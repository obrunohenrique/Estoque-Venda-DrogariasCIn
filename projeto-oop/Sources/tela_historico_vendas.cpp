#include "tela_historico_vendas.h"
#include "ui_tela_historico_vendas.h"
#include "date_selection.h"
#include <QSql>
#include <QSqlQuery>
#include <QMessageBox>
#include <QDebug>

tela_historico_vendas::tela_historico_vendas(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::tela_historico_vendas)
{
    ui->setupUi(this);
    if(!con.abrir_conexao()){
        QMessageBox::warning(this, "ERRO", "Erro ao conectar com o banco de dados");
    }
    QString data = date_selection::instance().get_data();
    QDate date = QDate::fromString(data, "dd/MM/yyyy");
    ui->dateEdit->setDate(date);
    this->setWindowTitle("Histórico de Vendas");
}

tela_historico_vendas::~tela_historico_vendas()
{
    con.fechar_conexao();
    total_vendas = 0;
    delete ui;
}



void tela_historico_vendas::on_btn_confirm_date_clicked()
{
    static bool is_updating = false;
    if (is_updating) return;
    is_updating = true;
    remove_rows(ui->tableWidget);
    int row_counter = 0;
    QSqlQuery query;
    QString dataSelecionada = ui->dateEdit->date().toString("dd/MM/yyyy");
    qDebug() << dataSelecionada;
    query.prepare("SELECT nome_prod, qtd_prod, valor_un, vendedor_id, tipo_pagamento, id_venda, cod_prod FROM tb_Vendas WHERE data_venda = :data");
    query.bindValue(":data", dataSelecionada);
    if (query.exec()) {
        ui->tableWidget->setColumnCount(7);
        total_vendas = 0;
        while (query.next()) {
            ui->tableWidget->insertRow(row_counter);
            ui->tableWidget->setItem(row_counter, 0, new QTableWidgetItem(query.value(0).toString()));
            ui->tableWidget->setItem(row_counter, 1, new QTableWidgetItem(query.value(1).toString()));
            float valor = query.value(2).toFloat();
            QString valorFormatado = QString::number(valor, 'f', 2);
            ui->tableWidget->setItem(row_counter, 2, new QTableWidgetItem(valorFormatado));
            ui->tableWidget->setItem(row_counter, 3, new QTableWidgetItem(query.value(3).toString()));
            ui->tableWidget->setItem(row_counter, 4, new QTableWidgetItem(query.value(4).toString()));

            total_vendas += query.value(1).toInt() * query.value(2).toFloat();

            QTableWidgetItem *idItem = new QTableWidgetItem(query.value(5).toString());
            idItem->setFlags(idItem->flags() ^ Qt::ItemIsEditable);  // Impede que o item seja editado
            ui->tableWidget->setItem(row_counter, 5, idItem);
            ui->tableWidget->setColumnHidden(5, true);

            QTableWidgetItem *codItem = new QTableWidgetItem(query.value(6).toString());
            codItem->setFlags(codItem->flags() ^ Qt::ItemIsEditable);  // Impede que o item seja editado
            ui->tableWidget->setItem(row_counter, 6, codItem);
            ui->tableWidget->setColumnHidden(6, true);

            for (int col = 0; col < 5; col++) {
                QTableWidgetItem *item = ui->tableWidget->item(row_counter, col);
                if (item) {
                    item->setTextAlignment(Qt::AlignCenter); // Centraliza o texto
                }
            }

            ui->tableWidget->setRowHeight(row_counter, 20);
            row_counter++;
        }
        ui->tableWidget->setColumnWidth(1,135);
        ui->tableWidget->setColumnWidth(4,130);
        ui->tableWidget->setColumnWidth(0,130);
        QStringList cabecalho={"Produto","Quantidade Vendida", "Valor unitário", "ID Vendedor","Tipo de Pagamento"};
        ui->tableWidget->setHorizontalHeaderLabels(cabecalho);
        ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        ui->tableWidget->verticalHeader()->setVisible(false);
    }else{
        QMessageBox::warning(this, "ERRO", "erro ao listar produtos");
    }
    is_updating = false;
    ui->label_total->setText("Total: R$" + QString::number(total_vendas, 'f', 2).replace('.', ','));
}

void tela_historico_vendas::remove_rows(QTableWidget *tw)
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


void tela_historico_vendas::on_btn_filtrar_clicked()
{

    remove_rows(ui->tableWidget);
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
        ui->tableWidget->setColumnCount(5);
        while (query.next()) {
            ui->tableWidget->insertRow(row_counter);
            ui->tableWidget->setItem(row_counter, 0, new QTableWidgetItem(query.value(0).toString()));
            ui->tableWidget->setItem(row_counter, 1, new QTableWidgetItem(query.value(1).toString()));
            ui->tableWidget->setItem(row_counter, 2, new QTableWidgetItem(query.value(2).toString()));
            ui->tableWidget->setItem(row_counter, 3, new QTableWidgetItem(query.value(3).toString()));
            ui->tableWidget->setItem(row_counter, 4, new QTableWidgetItem(query.value(4).toString()));

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

void tela_historico_vendas::on_btn_deletar_clicked()
{
    QMessageBox::StandardButton quest = QMessageBox::question(this, "Excluir", "Gostaria de Excluir", QMessageBox::Yes|QMessageBox::No);
    if (quest==QMessageBox::Yes){
        int row = ui->tableWidget->currentRow();
        if (row < 0) {
            QMessageBox::warning(this, "Erro", "Nenhuma linha foi selecionada para exclusão.");
            return;
        }
        int qtd = ui->tableWidget->item(row, 1)->text().toInt();
        float valor = ui->tableWidget->item(row, 2)->text().toFloat();
        float sub = qtd * valor;
        int id_venda = ui->tableWidget->item(row, 5)->text().toInt();
        int codigo = ui->tableWidget->item(row, 6)->text().toInt();
        QSqlQuery query;
        query.prepare("DELETE FROM tb_vendas WHERE id_venda = :id_venda");
        query.bindValue(":id_venda", id_venda);
        if (query.exec()) {
            ui->tableWidget->removeRow(row);
            QMessageBox::information(this, "", "Produto excluído com sucesso.");
        }else {
            QMessageBox::warning(this, "Erro", "Erro ao excluir a venda: " + query.lastError().text());
        }

        total_vendas = total_vendas - sub;
        ui->label_total->setText("Total: R$" + QString::number(total_vendas, 'f', 2).replace('.', ','));

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

