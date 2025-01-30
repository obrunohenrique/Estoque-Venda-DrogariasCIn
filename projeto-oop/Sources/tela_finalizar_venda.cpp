#include "tela_finalizar_venda.h"
#include "ui_tela_finalizar_venda.h"
#include "ui_tela_nova_venda.h"
#include <QSql>
#include <QTableWidget>
tela_finalizar_venda::tela_finalizar_venda(QWidget *parent, tela_nova_venda *novaVenda)
    : QDialog(parent),
    ui(new Ui::tela_finalizar_venda), novaVenda(novaVenda)
{
    ui->setupUi(this);
    total = novaVenda->get_total();
    ui->label_total->setText("R$" + QString::number(total, 'f', 2).replace('.', ','));
    ui->label_total_desc->setText("R$" + QString::number(total, 'f', 2).replace('.', ','));
    data = date_selection::instance().get_data();
    qDebug() << data;
    this->setWindowTitle("Finalizar Venda");
}

tela_finalizar_venda::~tela_finalizar_venda()
{
    delete ui;
}

void tela_finalizar_venda::on_doubleSpinBox_editingFinished()
{
    float desc =ui->doubleSpinBox->text().replace(',','.').toFloat();
    float total_desc = total-((total/100) * desc);
    ui->label_total_desc->setText("R$" + QString::number(total_desc, 'f', 2).replace('.', ','));
}




void tela_finalizar_venda::on_btn_cancelar_clicked()
{
    this->close();
}


void tela_finalizar_venda::on_btn_fechar_venda_clicked()
{
    QMessageBox::StandardButton quest = QMessageBox::question(this, "", "Gostaria de fechar a venda?", QMessageBox::Yes|QMessageBox::No);
    if (quest==QMessageBox::Yes){
        QList<QList<QString>> tabelaVenda = novaVenda->getTabelaVenda();
        QString vendedor_id = novaVenda->id;
        QString metodo_pagamento = ui->comboBox->currentText();
        QSqlQuery query;
        for (const QList<QString>& row : tabelaVenda) {
            qDebug() << "Código:" << row[0] << "Produto:" << row[1] << "Quantidade:" << row[2] << "Valor Unitário:" << row[3];
            QString codigo = row[0];
            QString prod_nome = row[1];
            QString qtd = row[2];
            QString valor_un = row[3];
            query.prepare("INSERT INTO tb_Vendas(nome_prod, qtd_prod, valor_un, vendedor_id, tipo_pagamento, data_venda, cod_prod) "
                          "VALUES (:prod_nome,:qtd, :valor, :vendedor_id, :metodo, :data, :cod)");

            query.bindValue(":data", data);
            qDebug() << data;
            query.bindValue(":metodo", metodo_pagamento);
            query.bindValue(":vendedor_id", vendedor_id);
            query.bindValue(":prod_nome", prod_nome);
            query.bindValue(":valor", valor_un.replace("R$ ","").toFloat());
            query.bindValue(":qtd", qtd.toInt());
            query.bindValue(":cod", codigo.toInt());
            if(!query.exec()){
                qDebug() << "query nao executada";
            }

            QSqlQuery controle;
            controle.prepare("UPDATE tb_Produtos SET qtd_produto = qtd_produto - :qtd "
                             "WHERE cod_produto = :codigo");

            controle.bindValue(":qtd", qtd.toInt());
            controle.bindValue(":codigo", codigo.toInt());

            if (!controle.exec()) {
                qDebug() << "Erro ao atualizar estoque:" << controle.lastError().text();
            } else {
                qDebug() << "Query executada com sucesso!";
            }

        }
        emit vendaFechada();
        this->close();
    }
}

