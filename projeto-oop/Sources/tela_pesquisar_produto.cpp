#include "tela_pesquisar_produto.h"
#include "ui_tela_pesquisar_produto.h"

// Construtor da tela de pesquisa que recebe um widget pai e uma referência da tela de nova venda
tela_pesquisar_produto::tela_pesquisar_produto(QWidget *parent, tela_nova_venda *novaVenda)
    : QDialog(parent)
    , ui(new Ui::tela_pesquisar_produto), novaVenda(novaVenda)
{
    // Configura a interface do usuário
    ui->setupUi(this);
    // Fecha conexão anterior com o banco
    con.fechar_conexao();
    // Tenta abrir nova conexão
    if(con.abrir_conexao()){
        qDebug()<<"connection opended";
    }
    // Preenche o campo de pesquisa com o nome do produto a ser pesquisado
    ui->lineEdit_pesquisa->setText(novaVenda->nome_pesquisar);
    qDebug()<< novaVenda->nome_pesquisar;
    // Se não houver nome para pesquisar, renova a tabela com todos os produtos
    if(novaVenda->nome_pesquisar == ""){
        renovar_table();
    }else{
        // Caso contrário, realiza a pesquisa
        on_pushButton_clicked();
    }
    // Define o título da janela
    this->setWindowTitle("Pesquisar Produto");
}

// Destrutor que fecha a conexão com o banco e limpa a memória
tela_pesquisar_produto::~tela_pesquisar_produto()
{
    con.fechar_conexao();
    delete ui;
}

// Função que atualiza a tabela com todos os produtos
void tela_pesquisar_produto::renovar_table()
{
    int row_counter = 0;
    QSqlQuery query;
    // Prepara query para selecionar todos os produtos ordenados por nome
    query.prepare("SELECT cod_produto, nome_produto, preco_produto, qtd_produto FROM tb_Produtos ORDER BY nome_produto");
    if (query.exec()) {
        // Define o número de colunas da tabela
        ui->tableWidget->setColumnCount(4);
        while (query.next()) {
            // Insere uma nova linha na tabela
            ui->tableWidget->insertRow(row_counter);
            // Preenche as células com os dados do produto
            ui->tableWidget->setItem(row_counter, 0, new QTableWidgetItem(query.value(0).toString()));
            ui->tableWidget->setItem(row_counter, 1, new QTableWidgetItem(query.value(1).toString()));
            ui->tableWidget->setItem(row_counter, 2, new QTableWidgetItem(query.value(2).toString()));
            ui->tableWidget->setItem(row_counter, 3, new QTableWidgetItem(query.value(3).toString()));

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
        // Configura a largura da coluna de quantidade
        ui->tableWidget->setColumnWidth(3,150);
        // Define os cabeçalhos das colunas
        QStringList cabecalho={"Código","Nome","Preço", "Quantidade Estoque"};

        ui->tableWidget->setHorizontalHeaderLabels(cabecalho);
        // Desabilita edição das células
        ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        // Permite seleção apenas de linhas inteiras
        ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        // Oculta os números das linhas
        ui->tableWidget->verticalHeader()->setVisible(false);
    }
}

// Função que remove todas as linhas da tabela
void tela_pesquisar_produto::remove_rows(QTableWidget *tw)
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

// Função chamada quando o botão de pesquisa é clicado
void tela_pesquisar_produto::on_pushButton_clicked()
{
    QSqlQuery query;
    // Prepara query para pesquisar produtos pelo nome
    query.prepare("SELECT cod_produto, nome_produto, preco_produto, qtd_produto FROM tb_Produtos"
                  " WHERE nome_produto like '%"+ui->lineEdit_pesquisa->text()+"%' order by nome_produto");
    int row_counter = 0;
    // Remove linhas existentes
    remove_rows(ui->tableWidget);
    if (query.exec()) {
        // Processo similar ao renovar_table(), mas com os resultados da pesquisa
        ui->tableWidget->setColumnCount(4);
        while (query.next()) {
            ui->tableWidget->insertRow(row_counter);
            ui->tableWidget->setItem(row_counter, 0, new QTableWidgetItem(query.value(0).toString()));
            ui->tableWidget->setItem(row_counter, 1, new QTableWidgetItem(query.value(1).toString()));
            ui->tableWidget->setItem(row_counter, 2, new QTableWidgetItem(query.value(2).toString()));
            ui->tableWidget->setItem(row_counter, 3, new QTableWidgetItem(query.value(3).toString()));

            for (int col = 0; col < 5; col++) {
                QTableWidgetItem *item = ui->tableWidget->item(row_counter, col);
                if (item) {
                    item->setTextAlignment(Qt::AlignCenter);
                }
            }

            ui->tableWidget->setRowHeight(row_counter, 20);
            row_counter++;
        }
        ui->tableWidget->setColumnWidth(3,150);
        QStringList cabecalho={"Código","Nome","Preço", "Quantidade Estoque"};

        ui->tableWidget->setHorizontalHeaderLabels(cabecalho);
        ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        ui->tableWidget->verticalHeader()->setVisible(false);
    }
}

// Função chamada quando o botão de seleção é clicado
void tela_pesquisar_produto::on_pushButton_2_clicked()
{
    // Obtém a linha selecionada
    int selected_row = ui->tableWidget->currentRow();

    // Verifica se alguma linha foi selecionada
    if (selected_row == -1) {
        QMessageBox::warning(this, "Seleção Inválida", "Por favor, selecione uma linha na tabela referente ao produto.");
        return;
    }else{
        // Armazena o nome do produto selecionado
        nome_selected = ui->tableWidget->item(selected_row, 1)->text();
        qDebug() << nome_selected;

        // Se existe uma referência para a tela de nova venda, atualiza o nome selecionado
        if (novaVenda) {
            novaVenda->nome_selected = nome_selected;
        }

        // Fecha a tela de pesquisa
        this->close();
    }
}

