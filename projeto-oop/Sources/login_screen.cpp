#include "login_screen.h"
#include "ui_login_screen.h"
#include <QMessageBox>
#include <QDebug>

// Construtor da tela de login que recebe um widget pai como parâmetro
Login_screen::Login_screen(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Login_screen)
{
    // Configura a interface do usuário
    ui->setupUi(this);
    // Define o foco inicial para o campo de usuário
    ui->lineEdit_usuario->setFocus();
    // Define o título da janela
    this->setWindowTitle("Login");
}

// Destrutor que limpa a memória alocada
Login_screen::~Login_screen()
{
    delete ui;
}

// Função chamada quando o botão de login é clicado
void Login_screen::on_login_btn_clicked()
{
    // Tenta abrir conexão com o banco de dados
    if(!con.abrir_conexao()){
        // Exibe mensagem de erro se falhar a conexão
        QMessageBox::warning(this, "ERRO", "Erro ao conectar com a base de dados");
        qDebug() << con.banco;
        qDebug() << con.dir;
        return;
    }else{
        // Obtém os valores digitados nos campos
        QString usuario=ui->lineEdit_usuario->text();
        QString senha=ui->lineEdit_senha->text();

        // Prepara a query para verificar usuário e senha
        QSqlQuery query;
        query.prepare("select * from tb_Usuarios where usuario ='"+usuario+"' and senha='"+senha+"' ");
        if(query.exec()){
            query.first();
            // Verifica se encontrou algum usuário
            if (query.value(1).toString()!=""){
                // Armazena o nível de acesso e nome do usuário
                acesso=query.value(2).toString();
                nome=query.value(3).toString();
                // Fecha a conexão com o banco
                con.fechar_conexao();
                // Fecha a tela de login
                this->close();
                // Cria e exibe a tela principal
                tela_padrao *tela = new tela_padrao(this);
                tela->show();
            }else{
                // Exibe mensagem de erro para login inválido
                QMessageBox::warning(this, "ERRO", "Usuário e/ou Senha inválidos");
                // Limpa os campos
                ui->lineEdit_usuario->clear();
                ui->lineEdit_senha->clear();
                // Retorna foco para o campo de usuário
                ui->lineEdit_usuario->setFocus();
            }
        }else{
            // Exibe mensagem se houver erro na execução da query
            QMessageBox::warning(this, "ERRO", "falha no login");
        }
    }
}

// Retorna o nível de acesso do usuário logado
QString Login_screen::getAcesso(){
    return acesso;
}

// Retorna o nome do usuário logado
QString Login_screen::getNome(){
    return nome;
}

// Função chamada quando Enter é pressionado no campo de usuário
void Login_screen::on_lineEdit_usuario_returnPressed()
{
    // Move o foco para o campo de senha
    ui->lineEdit_senha->setFocus();
}

// Função chamada quando Enter é pressionado no campo de senha
void Login_screen::on_lineEdit_senha_returnPressed()
{
    // Simula o clique no botão de login
    ui->login_btn->click();
}

