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

// Construtor da tela principal que recebe a tela de login e um widget pai
tela_padrao::tela_padrao(Login_screen *login, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::tela_padrao)
    , login_screen(login)
{
    // Configura a interface do usuário
    ui->setupUi(this);
    // Obtém o nome e nível de acesso do usuário logado
    QString nome = login_screen->getNome();
    QString acesso = login_screen->getAcesso();
    // Define o texto do nível de acesso baseado no tipo
    if (acesso=="A"){
        ui->acesso_in->setText("Administrador");
    }else{
        ui->acesso_in->setText("funcionário");
    }
    // Exibe o nome do usuário
    ui->usuario_in->setText(nome);
    // Abre a tela de seleção de data e exibe a data selecionada
    date_selection::instance().exec();
    ui->label_data->setText(date_selection::instance().get_data());
    // Define o título da janela
    this->setWindowTitle("Drogarias CIn");
}

// Destrutor que limpa a memória alocada
tela_padrao::~tela_padrao()
{
    delete ui;
}

// Função chamada quando a opção Estoque é selecionada
void tela_padrao::on_actionEstoque_triggered()
{
    // Verifica se o usuário tem permissão de administrador
    QString acesso = login_screen->getAcesso();
    if (acesso=="A"){
        // Cria e exibe a tela de estoque
        tela_estoque estoque;
        estoque.exec();
    }else{
        // Exibe mensagem de erro se não tiver permissão
        QMessageBox::warning(this, "Acesso negado", "Usuário atual não tem pemissão para gerir estoque.");
    }
}

// Função chamada quando a opção Funcionários é selecionada
void tela_padrao::on_actionFuncionarios_triggered()
{
    // Verifica se o usuário tem permissão de administrador
    QString acesso = login_screen->getAcesso();
    if (acesso=="A"){
        // Cria e exibe a tela de funcionários
        tela_funcionarios funcionarios;
        funcionarios.exec();
    }else{
        // Exibe mensagem de erro se não tiver permissão
        QMessageBox::warning(this, "Acesso negado", "Usuário atual não tem pemissão para gerir estoque.");
    }
}

// Função chamada quando a opção Nova Venda é selecionada
void tela_padrao::on_actionNova_venda_triggered()
{
    // Cria e exibe a tela de nova venda
    tela_nova_venda venda;
    venda.exec();
}

// Função chamada quando a opção Histórico de Vendas é selecionada
void tela_padrao::on_actionHistorico_de_vendas_triggered()
{
    // Cria e exibe a tela de histórico de vendas
    tela_historico_vendas historico_vendas;
    historico_vendas.exec();
}

// Função chamada quando a opção Sair é selecionada
void tela_padrao::on_actionSair_triggered()
{
    // Fecha a tela atual
    this->close();
    // Cria e exibe uma nova tela de login
    Login_screen *login = new Login_screen(this);
    login->show();
}

// Função chamada quando a opção Sobre é selecionada
void tela_padrao::on_actionSOBRE_triggered()
{
    // Exibe uma mensagem com informações sobre o projeto
    QMessageBox::information(this, "Sobre", "Esse é um Projeto de Programação orientada a objetos, da disciplina de Estrutura de Dados Orientadas a Objetos(CIN0135) ministrada pelo Professor"
                                            "Francisco Paulo Magalhaes Simoes, Feito pelos Alunos Rafael Correia de Queiroz de Sena Sales(rcqss) e Bruno Henrique Ferreira Pinto(bhfp).");
}
