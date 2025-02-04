#include "tela_historico_vendas.h"
#include "ui_tela_historico_vendas.h"
#include "date_selection.h"
#include <QSql>
#include <QSqlQuery>
#include <QMessageBox>
#include <QDebug>

// Construtor da tela de histórico que recebe um widget pai
tela_historico_vendas::tela_historico_vendas(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::tela_historico_vendas)
{
    // Configura a interface do usuário
    ui->setupUi(this);
    // Tenta abrir conexão com o banco de dados
    if(!con.abrir_conexao()){
        QMessageBox::warning(this, "ERRO", "Erro ao conectar com o banco de dados");
    }
    // Obtém a data selecionada e configura o campo de data
    QString data = date_selection::instance().get_data();
    QDate date = QDate::fromString(data, "dd/MM/yyyy");
    ui->dateEdit->setDate(date);
    // Define o título da janela
    this->setWindowTitle("Histórico de Vendas");
}

// Destrutor que fecha a conexão com o banco e limpa a memória
tela_historico_vendas::~tela_historico_vendas()
{
    con.fechar_conexao();
    total_vendas = 0;
    delete ui;
}

// Função chamada quando o botão de confirmar data é clicado
void tela_historico_vendas::on_btn_confirm_date_clicked()
{
    // Evita chamadas recursivas
    static bool is_updating = false;
    if (is_updating) return;
    is_updating = true;
    
    // Remove linhas existentes da tabela
    remove_rows(ui->tableWidget);
    int row_counter = 0;
    QSqlQuery query;
    // Obtém a data selecionada
    QString dataSelecionada = ui->dateEdit->date().toString("dd/MM/yyyy");
    qDebug() << dataSelecionada;
    
    // Prepara query para buscar vendas da data selecionada
    query.prepare("SELECT nome_prod, qtd_prod, valor_un, vendedor_id, tipo_pagamento, id_venda, cod_prod FROM tb_Vendas WHERE data_venda = :data");
    query.bindValue(":data", dataSelecionada);
    if (query.exec()) {
        // Define o número de colunas da tabela
        ui->tableWidget->setColumnCount(7);
        total_vendas = 0;
        while (query.next()) {
            // Insere uma nova linha e preenche com os dados da venda
            ui->tableWidget->insertRow(row_counter);
            ui->tableWidget->setItem(row_counter, 0, new QTableWidgetItem(query.value(0).toString()));
            ui->tableWidget->setItem(row_counter, 1, new QTableWidgetItem(query.value(1).toString()));
            float valor = query.value(2).toFloat();
            QString valorFormatado = QString::number(valor, 'f', 2);
            ui->tableWidget->setItem(row_counter, 2, new QTableWidgetItem(valorFormatado));
            ui->tableWidget->setItem(row_counter, 3, new QTableWidgetItem(query.value(3).toString()));
            ui->tableWidget->setItem(row_counter, 4, new QTableWidgetItem(query.value(4).toString()));

            // Calcula o total das vendas
            total_vendas += query.value(1).toInt() * query.value(2).toFloat();

            // Configura o ID da venda (oculto)
            QTableWidgetItem *idItem = new QTableWidgetItem(query.value(5).toString());
            idItem->setFlags(idItem->flags() ^ Qt::ItemIsEditable);
            ui->tableWidget->setItem(row_counter, 5, idItem);
            ui->tableWidget->setColumnHidden(5, true);

            // Configura o código do produto (oculto)
            QTableWidgetItem *codItem = new QTableWidgetItem(query.value(6).toString());
            codItem->setFlags(codItem->flags() ^ Qt::ItemIsEditable);
            ui->tableWidget->setItem(row_counter, 6, codItem);
            ui->tableWidget->setColumnHidden(6, true);

            // Centraliza o texto em todas as células
            for (int col = 0; col < 5; col++) {
                QTableWidgetItem *item = ui->tableWidget->item(row_counter, col);
                if (item) {
                    item->setTextAlignment(Qt::AlignCenter);
                }
            }

            // Define a altura da linha
            ui->tableWidget->setRowHeight(row_counter, 20);
            row_counter++;
        }
        
        // Configura as larguras das colunas
        ui->tableWidget->setColumnWidth(1,135);
        ui->tableWidget->setColumnWidth(4,130);
        ui->tableWidget->setColumnWidth(0,130);
        
        // Define os cabeçalhos das colunas
        QStringList cabecalho={"Produto","Quantidade Vendida", "Valor unitário", "ID Vendedor","Tipo de Pagamento"};
        ui->tableWidget->setHorizontalHeaderLabels(cabecalho);
        
        // Configura propriedades da tabela
        ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        ui->tableWidget->verticalHeader()->setVisible(false);
    }else{
        QMessageBox::warning(this, "ERRO", "erro ao listar produtos");
    }
    is_updating = false;
    // Atualiza o label do total
    ui->label_total->setText("Total: R$" + QString::number(total_vendas, 'f', 2).replace('.', ','));
}

// Função que remove todas as linhas da tabela
void tela_historico_vendas::remove_rows(QTableWidget *tw)
{
    qDebug() << "Iniciando remoção de linhas. Total inicial:" << tw->rowCount();

    // Bloqueia sinais para evitar processamento desnecessário
    tw->blockSignals(true);

    // Remove todas as linhas
    while (tw->rowCount() > 0) {
        tw->removeRow(0);
        qDebug() << "Linha removida. Linhas restantes:" << tw->rowCount();
    }

    // Reativa os sinais
    tw->blockSignals(false);

    // Verifica se todas as linhas foram removidas
    if (tw->rowCount() > 0) {
        qWarning() << "Erro: Linhas restantes após a remoção. Total final:" << tw->rowCount();
    }
    qDebug() << "Remoção de linhas concluída.";
}

// Função chamada quando o botão de filtrar é clicado
void tela_historico_vendas::on_btn_filtrar_clicked()
{
    // Remove linhas existentes
    remove_rows(ui->tableWidget);
    
    // Define a query de acordo com o tipo de filtro selecionado
    if(ui->radioButton_payment->isChecked()){
        busca = "SELECT nome_prod, qtd_prod, valor_un, vendedor_id, tipo_pagamento FROM tb_Vendas WHERE tipo_pagamento like '%"+ui->lineEdit_filtrar->text()+"%' order by tipo_pagamento";
    }else if(ui->radioButton_produto->isChecked()){
        busca = "SELECT nome_prod, qtd_prod, valor_un, vendedor_id, tipo_pagamento FROM tb_Vendas WHERE nome_prod like '%"+ui->lineEdit_filtrar->text()+"%' order by nome_prod";
    }else{
        busca = "SELECT nome_prod, qtd_prod, valor_un, vendedor_id, tipo_pagamento FROM tb_Vendas WHERE vendedor_id = "+ui->lineEdit_filtrar->text()+" order by vendedor_id";
    }

    QSqlQuery query;
    query.prepare(busca);
    int row_counter = 0;
    if (query.exec()) {
        // Define o número de colunas da tabela
        ui->tableWidget->setColumnCount(5);
        while (query.next()) {
            // Insere uma nova linha e preenche com os dados filtrados
            ui->tableWidget->insertRow(row_counter);
            ui->tableWidget->setItem(row_counter, 0, new QTableWidgetItem(query.value(0).toString()));
            ui->tableWidget->setItem(row_counter, 1, new QTableWidgetItem(query.value(1).toString()));
            ui->tableWidget->setItem(row_counter, 2, new QTableWidgetItem(query.value(2).toString()));
            ui->tableWidget->setItem(row_counter, 3, new QTableWidgetItem(query.value(3).toString()));
            ui->tableWidget->setItem(row_counter, 4, new QTableWidgetItem(query.value(4).toString()));

            // Centraliza o texto em todas as células
            for (int col = 0; col < 5; col++) {
                QTableWidgetItem *item = ui->tableWidget->item(row_counter, col);
                if (item) {
                    item->setTextAlignment(Qt::AlignCenter);
                }
            }
            ui->tableWidget->setRowHeight(row_counter, 20);
            row_counter++;
        }
    }
}

// Função chamada quando o botão de deletar é clicado
void tela_historico_vendas::on_btn_deletar_clicked()
{
    // Confirma se o usuário realmente quer excluir
    QMessageBox::StandardButton quest = QMessageBox::question(this, "Excluir", "Gostaria de Excluir", QMessageBox::Yes|QMessageBox::No);
    if (quest==QMessageBox::Yes){
        // Obtém a linha selecionada
        int row = ui->tableWidget->currentRow();
        if (row < 0) {
            QMessageBox::warning(this, "Erro", "Nenhuma linha foi selecionada para exclusão.");
            return;
        }
        
        // Calcula o valor total do item a ser removido
        int qtd = ui->tableWidget->item(row, 1)->text().toInt();
        float valor = ui->tableWidget->item(row, 2)->text().toFloat();
        float sub = qtd * valor;
        int id_venda = ui->tableWidget->item(row, 5)->text().toInt();
        int codigo = ui->tableWidget->item(row, 6)->text().toInt();
        
        // Prepara query para deletar a venda
        QSqlQuery query;
        query.prepare("DELETE FROM tb_vendas WHERE id_venda = :id_venda");
        query.bindValue(":id_venda", id_venda);
        if (query.exec()) {
            // Remove a linha da tabela e atualiza o total
            ui->tableWidget->removeRow(row);
            QMessageBox::information(this, "", "Produto excluído com sucesso.");
        }else {
            QMessageBox::warning(this, "Erro", "Erro ao excluir a venda: " + query.lastError().text());
        }

        // Atualiza o total das vendas
        total_vendas = total_vendas - sub;
        ui->label_total->setText("Total: R$" + QString::number(total_vendas, 'f', 2).replace('.', ','));

        // Atualiza o estoque do produto
        QSqlQuery controle;
        controle.prepare("UPDATE tb_Produtos SET qtd_produto = qtd_produto + :qtd "
                         "WHERE cod_produto = :codigo");

        controle.bindValue(":qtd", qtd);
        controle.bindValue(":codigo", codigo);

        if (!controle.exec()) {
            qDebug() << "Erro ao atualizar estoque:" << controle.lastError().text();
        } else {
            qDebug() << "Query executada com sucesso!";
        }
    }
}

