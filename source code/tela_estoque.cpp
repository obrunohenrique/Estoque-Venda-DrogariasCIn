#include "tela_estoque.h"
#include "ui_tela_estoque.h"

tela_estoque::tela_estoque(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::tela_estoque)
{
    ui->setupUi(this);
}

tela_estoque::~tela_estoque()
{
    delete ui;
}
