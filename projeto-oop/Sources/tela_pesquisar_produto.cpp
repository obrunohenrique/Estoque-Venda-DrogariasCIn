#include "tela_pesquisar_produto.h"
#include "ui_tela_pesquisar_produto.h"

tela_pesquisar_produto::tela_pesquisar_produto(QWidget *parent, tela_nova_venda *novaVenda)
    : QDialog(parent)
    , ui(new Ui::tela_pesquisar_produto), novaVenda(novaVenda)
{
    ui->setupUi(this);
    con.fechar_conexao();
    if(con.abrir_conexao()){
        qDebug()<<"connection opended";
    }
    ui->lineEdit_pesquisa->setText(novaVenda->nome_pesquisar);
    qDebug()<< novaVenda->nome_pesquisar;
    if(novaVenda->nome_pesquisar == ""){
        renovar_table();
    }else{
        on_pushButton_clicked();
    }
    this->setWindowTitle("Pesquisar Produto");
}

tela_pesquisar_produto::~tela_pesquisar_produto()
{
    con.fechar_conexao();
    delete ui;
}

void tela_pesquisar_produto::renovar_table()
{
    int row_counter = 0;
    QSqlQuery query;
    query.prepare("SELECT cod_produto, nome_produto, preco_produto, qtd_produto FROM tb_Produtos ORDER BY nome_produto");
    if (query.exec()) {
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

void tela_pesquisar_produto::remove_rows(QTableWidget *tw)
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

void tela_pesquisar_produto::on_pushButton_clicked()
{
    QSqlQuery query;
    query.prepare("SELECT cod_produto, nome_produto, preco_produto, qtd_produto FROM tb_Produtos"
                  " WHERE nome_produto like '%"+ui->lineEdit_pesquisa->text()+"%' order by nome_produto");
    int row_counter = 0;
    remove_rows(ui->tableWidget);
    if (query.exec()) {
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


void tela_pesquisar_produto::on_pushButton_2_clicked()
{

    int selected_row = ui->tableWidget->currentRow();

    if (selected_row == -1) {
        QMessageBox::warning(this, "Seleção Inválida", "Por favor, selecione uma linha na tabela referente ao produto.");
        return;
    }else{
        nome_selected = ui->tableWidget->item(selected_row, 1)->text();
        qDebug() << nome_selected;

        if (novaVenda) {
            novaVenda->nome_selected = nome_selected;
        }

        this->close();
    }
}

