#include "tela_padrao.h"
#include "ui_tela_padrao.h"
#include "login_screen.h"
#include "login_screen.h"
#include "tela_estoque.h"
#include "tela_nova_venda.h"
#include "tela_historico_vendas.h"
#include "tela_funcionarios.h"
#include "date_selection.h"
#include <QMessageBox>

tela_padrao::tela_padrao(Login_screen *login, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::tela_padrao)
    , login_screen(login)
{
    ui->setupUi(this);
    QString nome = login_screen->getNome();
    QString acesso = login_screen->getAcesso();
    if (acesso=="A"){
        ui->acesso_in->setText("Administrador");
    }else{
        ui->acesso_in->setText("funcionário");
    }
    ui->usuario_in->setText(nome);
    date_selection::instance().exec();
    ui->label_data->setText(date_selection::instance().get_data());
    this->setWindowTitle("Drogarias CIn");
}

tela_padrao::~tela_padrao()
{
    delete ui;
}


void tela_padrao::on_actionEstoque_triggered()
{
    QString acesso = login_screen->getAcesso();
    if (acesso=="A"){
        tela_estoque estoque;
        estoque.exec();
    }else{
        QMessageBox::warning(this, "Acesso negado", "Usuário atual não tem pemissão para gerir estoque.");
    }
}


void tela_padrao::on_actionFuncionarios_triggered()
{
    QString acesso = login_screen->getAcesso();
    if (acesso=="A"){
        tela_funcionarios funcionarios;
        funcionarios.exec();
    }else{
        QMessageBox::warning(this, "Acesso negado", "Usuário atual não tem pemissão para gerir estoque.");
    }
}




void tela_padrao::on_actionNova_venda_triggered()
{
    tela_nova_venda venda;
    venda.exec();
}




void tela_padrao::on_actionHistorico_de_vendas_triggered()
{
    tela_historico_vendas historico_vendas;
    historico_vendas.exec();
}



void tela_padrao::on_actionSair_triggered()
{
    this->close();
    Login_screen *login = new Login_screen(this);
    login->show();
}

void tela_padrao::on_actionSOBRE_triggered()
{
    QMessageBox::information(this, "Sobre", "Esse é um Projeto de Programação orientada a objetos, da disciplina de Estrutura de Dados Orientadas a Objetos(CIN0135) ministrada pelo Professor"
                                            "Francisco Paulo Magalhaes Simoes, Feito pelos Alunos Rafael Correia de Queiroz de Sena Sales(rcqss) e Bruno Henrique Ferreira Pinto(bhfp).");
}
