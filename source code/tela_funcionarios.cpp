#include "tela_funcionarios.h"
#include "ui_tela_funcionarios.h"

tela_funcionarios::tela_funcionarios(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::tela_funcionarios)
{
    ui->setupUi(this);
}

tela_funcionarios::~tela_funcionarios()
{
    delete ui;
}
