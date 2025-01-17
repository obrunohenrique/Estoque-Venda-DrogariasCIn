#include "tela_historico_vendas.h"
#include "ui_tela_historico_vendas.h"

tela_historico_vendas::tela_historico_vendas(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::tela_historico_vendas)
{
    ui->setupUi(this);
}

tela_historico_vendas::~tela_historico_vendas()
{
    delete ui;
}
