#include "tela_vendas.h"
#include "ui_tela_vendas.h"

tela_vendas::tela_vendas(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::tela_vendas)
{
    ui->setupUi(this);
}

tela_vendas::~tela_vendas()
{
    delete ui;
}
