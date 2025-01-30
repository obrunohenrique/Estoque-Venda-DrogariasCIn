#include "tela_venda.h"
#include "ui_tela_venda.h"
#include <QDebug>
#include <QMessageBox>

tela_venda::tela_venda(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::tela_venda)
{
    ui->setupUi(this);
    this->setMinimumSize(511, 394);
    this->setMaximumSize(511, 394);

    prod_id = ui->lineEdit_codigo->text();
    con.abrir_conexao();
    ui->lineEdit_funcionario->setFocus();
}

tela_venda::~tela_venda()
{
    delete ui;
}


void tela_venda::on_lineEdit_funcionario_returnPressed()
{
    id = ui->lineEdit_funcionario->text();
    QSqlQuery query;
    query.prepare("SELECT * FROM tb_Usuarios WHERE ID = :id");
    query.bindValue(":id", id);
    if(query.exec() && query.first()){
        if (query.value(1).toString() != ""){
            acesso = query.value(2).toString();
            nome = query.value(3).toString();
            id = query.value(4).toString();
            ui->label_funcionario->setText(nome);
            ui->lineEdit_funcionario->setFocus();
        }
    } else {
        QMessageBox::warning(this, "ERRO", "Não existe funcionário com este id");
        ui->lineEdit_funcionario->setFocus();
        ui->lineEdit_funcionario->clear();
    }
    ui->lineEdit_codigo->setFocus();
}


void tela_venda::on_lineEdit_codigo_returnPressed()
{
    prod_id = ui->lineEdit_codigo->text();

    QSqlQuery query;
    query.prepare("SELECT * FROM tb_Produtos WHERE cod_produto = :prod_id");
    query.bindValue(":prod_id", prod_id);
    if(query.exec() && query.first()){
        if (query.value(1).toString() != ""){
            prod_nome = query.value(1).toString();
            prod_id = query.value(0).toString();
            prod_preco = query.value(2).toString();
        }
        ui->label_produto->setText(prod_nome);
    }else{
        QMessageBox::warning(this, "ERRO", "Código de Produto inválido");
        ui->lineEdit_codigo->setFocus();
    }
    ui->lineEdit_qtd->setFocus();
    ui->lineEdit_qtd->setText("1");
}


void tela_venda::on_lineEdit_qtd_returnPressed()
{
    ui->lineEdit_valor_un->setText("R$ "+prod_preco);
    ui->lineEdit_valor_un->setFocus();
}


void tela_venda::on_lineEdit_valor_un_returnPressed()
{
    QString valor_un = ui->lineEdit_valor_un->text();
    valor_un.remove("R$ ");
    valor_un.toInt();
    QString qtd_venda = ui->lineEdit_qtd->text();
    qtd_venda.toInt();
    int row_counter = 0;
    ui->tableWidget->setColumnWidth(0,75);
    ui->tableWidget->setColumnWidth(1,115);
    QStringList cabecalho={"Código","Produto", "Quantidade", "Valor Unitário"};
    ui->tableWidget->setHorizontalHeaderLabels(cabecalho);

    ui->tableWidget->setItem(row_counter, 0, new QTableWidgetItem (prod_id));
    ui->tableWidget->setItem(row_counter, 0, new QTableWidgetItem (prod_nome));
    ui->tableWidget->setItem(row_counter, 0, new QTableWidgetItem (qtd_venda));
    ui->tableWidget->setItem(row_counter, 0, new QTableWidgetItem (valor_un));
    row_counter++;

}
