#include "tela_estoque.h"
#include "ui_tela_estoque.h"
#include <QDebug>

// Construtor da tela de estoque que recebe um widget pai
tela_estoque::tela_estoque(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::tela_estoque)
{
    // Configura a interface do usuário
    ui->setupUi(this);
    // Define o foco inicial para o campo de código
    ui->lineEdit_codigo->setFocus();
    // Define o número de colunas da tabela
    ui->tableWidget_produtos->setColumnCount(2);
    // Define a aba inicial
    ui->tab_widget->setCurrentIndex(0);
    // Tenta abrir conexão com o banco de dados
    if (!con.abrir_conexao()) {
        qDebug() << "erro na conexão";
        return;
    }
    // Define o título da janela
    this->setWindowTitle("Estoque");
}

// Destrutor que fecha a conexão com o banco e limpa a memória
tela_estoque::~tela_estoque()
{
    con.fechar_conexao();
    delete ui;
}

// Função chamada quando Enter é pressionado no campo de código
void tela_estoque::on_lineEdit_codigo_returnPressed()
{
    // Move o foco para o campo de descrição
    ui->lineEdit_descricao->setFocus();
}

// Função chamada quando Enter é pressionado no campo de descrição
void tela_estoque::on_lineEdit_descricao_returnPressed()
{
    // Move o foco para o campo de quantidade
    ui->lineEdit_qtd->setFocus();
}

// Função chamada quando Enter é pressionado no campo de quantidade
void tela_estoque::on_lineEdit_qtd_returnPressed()
{
    // Move o foco para o campo de valor
    ui->lineEdit_valor->setFocus();
}

// Função chamada quando o botão novo é clicado
void tela_estoque::on_btn_novo_clicked()
{
    // Define o foco para o campo de código e limpa todos os campos
    ui->lineEdit_codigo->setFocus();
    ui->lineEdit_codigo->clear();
    ui->lineEdit_descricao->clear();
    ui->lineEdit_qtd->clear();
    ui->lineEdit_valor->clear();
}

// Função chamada quando Enter é pressionado no campo de valor
void tela_estoque::on_lineEdit_valor_returnPressed()
{
    // Simula o clique no botão gerar novo
    ui->btn_gerar_novo->clicked();
}

// Função chamada quando o botão gerar novo é clicado
void tela_estoque::on_btn_gerar_novo_clicked()
{
    // Obtém os valores dos campos
    codigo = ui->lineEdit_codigo->text();
    descricao = ui->lineEdit_descricao->text();
    qtd = ui->lineEdit_qtd->text();
    valor = ui->lineEdit_valor->text();
    valor.replace(',','.');
    QString valor_formatado = QString::number(valor.toFloat(), 'f', 2);

    // Verifica se algum campo obrigatório está vazio
    if(codigo == "" or descricao == "" or valor == ""){
        QMessageBox::warning(this, "ERRO", "Todos os Campos devem ser preenchidos");
    }else{
        // Verifica se o produto já existe
        QSqlQuery checkQuery;
        checkQuery.prepare("SELECT * FROM tb_Produtos WHERE cod_produto = :codigo OR nome_produto = :descricao");
        checkQuery.bindValue(":codigo", codigo.toInt());
        checkQuery.bindValue(":descricao", descricao);

        if (checkQuery.exec() && checkQuery.next()) {
            QMessageBox::warning(this, "Erro", "Produto já cadastrado com o mesmo código ou nome.");
            return;
        }
        
        // Prepara query para inserir novo produto
        QSqlQuery query;
        query.prepare("INSERT INTO tb_Produtos(cod_produto, nome_produto, preco_produto, qtd_produto) "
                      "VALUES (:codigo, :descricao, :valor, :qtd)");

        query.bindValue(":codigo", codigo.toInt());
        query.bindValue(":descricao", descricao);
        query.bindValue(":valor", valor_formatado.toFloat());
        query.bindValue(":qtd", qtd.toInt());

        if(query.exec()){
            QMessageBox::information(this, "", "Produto adicionado com sucesso.");
        } else {
            QString errorText = query.lastError().text();
            if (errorText.contains("UNIQUE constraint failed") || errorText.contains("duplicate key")) {
                QMessageBox::warning(this, "Erro", "Produto já cadastrado.");
            } else {
                QMessageBox::warning(this, "Erro", "Erro ao adicionar o produto: " + query.lastError().text());
            }
        }
        // Limpa os campos e retorna o foco para o código
        ui->lineEdit_codigo->setFocus();
        ui->lineEdit_codigo->clear();
        ui->lineEdit_descricao->clear();
        ui->lineEdit_qtd->clear();
        ui->lineEdit_valor->clear();
    }
}

void tela_estoque::on_tab_widget_currentChanged(int index)
{
    static bool is_updating = false; // Controle de estado estático
    if (is_updating) return;
    is_updating = true;

    if (index == 1) {
        remove_rows(ui->tableWidget_produtos);
        int row_counter = 0;
        QSqlQuery query;
        query.prepare("SELECT cod_produto, nome_produto FROM tb_Produtos ORDER BY nome_produto");
        if (query.exec()) {
            while (query.next()) {
                ui->tableWidget_produtos->insertRow(row_counter);
                ui->tableWidget_produtos->setItem(row_counter, 0, new QTableWidgetItem(query.value(0).toString()));
                ui->tableWidget_produtos->setItem(row_counter, 1, new QTableWidgetItem(query.value(1).toString()));
                ui->tableWidget_produtos->setRowHeight(row_counter, 20);
                row_counter++;
            }
            ui->tableWidget_produtos->setColumnWidth(0,75);
            ui->tableWidget_produtos->setColumnWidth(1,115);
            QStringList cabecalho={"Código","Produto"};

            ui->tableWidget_produtos->setHorizontalHeaderLabels(cabecalho);
            ui->tableWidget_produtos->setEditTriggers(QAbstractItemView::NoEditTriggers);
            ui->tableWidget_produtos->setSelectionBehavior(QAbstractItemView::SelectRows);
            ui->tableWidget_produtos->verticalHeader()->setVisible(false);
        }else{
            QMessageBox::warning(this, "ERRO", "erro ao listar produtos");
        }
        ui->lineEdit_codigo_ge->clear();
        ui->lineEdit_descricao_ge->clear();
        ui->lineEdit_valor_ge->clear();
        ui->lineEdit_procurar->clear();
        ui->lineEdit_qtd_ge->clear();
    }
    is_updating = false;
}

void tela_estoque::remove_rows(QTableWidget *tw)
{
    qDebug() << "Iniciando remoção de linhas. Total inicial:" << tw->rowCount();

    tw->blockSignals(true);

    while (tw->rowCount() > 0) {
        tw->removeRow(0);
        qDebug() << "Linha removida. Linhas restantes:" << tw->rowCount();
    }

    tw->blockSignals(false);

    if (tw->rowCount() > 0) {
        qWarning() << "Erro: Linhas restantes após a remoção. Total final:" << tw->rowCount();
    }
    qDebug() << "Remoção de linhas concluída.";
}

void tela_estoque::on_tableWidget_produtos_itemSelectionChanged()
{
    int currentRow = ui->tableWidget_produtos->currentRow();
    if (currentRow < 0) {
        QMessageBox::warning(this, "Erro", "Nenhuma linha foi selecionada.");
        return;
    }
    int codigo = ui->tableWidget_produtos->item(currentRow, 0)->text().toInt();
    QSqlQuery query;
    query.prepare("select * from tb_Produtos where cod_produto ="+QString::number(codigo));
    if(query.exec()){
        query.first();
        ui->lineEdit_codigo_ge->setText(query.value(0).toString());
        ui->lineEdit_descricao_ge->setText(query.value(1).toString());
        ui->lineEdit_qtd_ge->setText(query.value(3).toString());
        float valor = query.value(2).toFloat();
        QString valorFormatado = QString::number(valor, 'f', 2);
        ui->lineEdit_valor_ge->setText(valorFormatado);
    }else{
        QMessageBox::warning(this, "ERRO", "erro na query"+ query.lastError().text());
    }
}

void tela_estoque::on_btn_att_ge_clicked()
{
    codigo_ge = ui->lineEdit_codigo_ge->text();
    descricao_ge = ui->lineEdit_descricao_ge->text();
    qtd_ge = ui->lineEdit_qtd_ge->text();
    valor_ge = ui->lineEdit_valor_ge->text();
    valor_ge.replace(',','.');
    qDebug() << valor_ge;

    if(codigo_ge == "" and descricao_ge == ""){
        QMessageBox::warning(this, "ERRO", "Selecione uma linha");
    }else{
        QSqlQuery query;
        query.prepare("UPDATE tb_Produtos SET nome_produto = :descricao_ge, preco_produto = :valor_ge, qtd_produto = :qtd_ge "
                      "WHERE cod_produto = :codigo_ge");

        query.bindValue(":codigo_ge", codigo_ge.toInt());
        query.bindValue(":descricao_ge", descricao_ge);
        query.bindValue(":valor_ge", valor_ge.toFloat());
        qDebug() << valor_ge;
        query.bindValue(":qtd_ge", qtd_ge.toInt());

        if(query.exec()){
            QMessageBox::information(this, "", "Produto atualizado com sucesso.");
        } else {
            QMessageBox::warning(this, "Erro", "Erro ao adicionar o produto: " + query.lastError().text());
        }
    }
}

void tela_estoque::on_btn_excluir_ge_clicked()
{
    QMessageBox::StandardButton quest = QMessageBox::question(this, "Excluir", "Gostaria de Excluir", QMessageBox::Yes|QMessageBox::No);
    if (quest==QMessageBox::Yes){
        int row = ui->tableWidget_produtos->currentRow();
        if (row < 0) {
            QMessageBox::warning(this, "Erro", "Nenhuma linha foi selecionada para exclusão.");
            return;
        }
        codigo_ge = ui->lineEdit_codigo_ge->text();
        QSqlQuery query;
        query.prepare("DELETE FROM tb_Produtos WHERE cod_produto = :codigo_ge");
        query.bindValue(":codigo_ge", codigo_ge.toInt());
        qDebug() << codigo_ge;
        if (query.exec()) {
            ui->tableWidget_produtos->removeRow(row);
            QMessageBox::information(this, "", "Produto excluído com sucesso.");
        }else {
            QMessageBox::warning(this, "Erro", "Erro ao excluir o produto: " + query.lastError().text());
        }
    }
}

void tela_estoque::on_btn_procurar_clicked()
{
    remove_rows(ui->tableWidget_produtos);
    if(ui->radioButton_codigo->isChecked()){
        busca = "select cod_produto, nome_produto from tb_Produtos where cod_produto ="+ui->lineEdit_procurar->text()+" order by nome_produto";
    }else{
        busca = "select cod_produto, nome_produto from tb_Produtos where nome_produto like '%"+ui->lineEdit_procurar->text()+"%' order by nome_produto";
    }

    QSqlQuery query;
    query.prepare(busca);
    int row_counter = 0;
    if(query.exec()){
        while(query.next()){
            ui->tableWidget_produtos->insertRow(row_counter);
            ui->tableWidget_produtos->setItem(row_counter,0, new QTableWidgetItem(query.value(0).toString()));
            ui->tableWidget_produtos->setItem(row_counter,1, new QTableWidgetItem(query.value(1).toString()));
            ui->tableWidget_produtos->setRowHeight(row_counter,20);
            row_counter++;
        }
    }else{
        QMessageBox::warning(this, "erro", "erro na busca");
    }
}
