#include "login_screen.h"
#include "ui_login_screen.h"
#include <QMessageBox>
#include <QDebug>

Login_screen::Login_screen(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Login_screen)
{
    ui->setupUi(this);
    ui->lineEdit_usuario->setFocus();
     this->setWindowTitle("Login");
}

Login_screen::~Login_screen()
{
    delete ui;
}

void Login_screen::on_login_btn_clicked()
{
    if(!con.abrir_conexao()){
        QMessageBox::warning(this, "ERRO", "Erro ao conectar com a base de dados");
        qDebug() << con.banco;
        qDebug() << con.dir;
        return;
    }else{
        QString usuario=ui->lineEdit_usuario->text();
        QString senha=ui->lineEdit_senha->text();

        QSqlQuery query;
        query.prepare("select * from tb_Usuarios where usuario ='"+usuario+"' and senha='"+senha+"' ");
        if(query.exec()){
            query.first();
            if (query.value(1).toString()!=""){
                acesso=query.value(2).toString();
                nome=query.value(3).toString();
                con.fechar_conexao();
                this->close();
                tela_padrao *tela = new tela_padrao(this);
                tela->show();
            }else{
                QMessageBox::warning(this, "ERRO", "Usuário e/ou Senha inválidos");
                ui->lineEdit_usuario->clear();
                ui->lineEdit_senha->clear();
                ui->lineEdit_usuario->setFocus();

            }
        }else{
            QMessageBox::warning(this, "ERRO", "falha no login");
        }
    }
}

QString Login_screen::getAcesso(){
    return acesso;
}

QString Login_screen::getNome(){
    return nome;
}


void Login_screen::on_lineEdit_usuario_returnPressed()
{
    ui->lineEdit_senha->setFocus();
}


void Login_screen::on_lineEdit_senha_returnPressed()
{
    ui->login_btn->click();
}

