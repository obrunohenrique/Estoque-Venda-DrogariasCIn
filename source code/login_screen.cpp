#include "login_screen.h"
#include "ui_login_screen.h"
#include <QMessageBox>

Login_screen::Login_screen(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Login_screen)
{
    ui->setupUi(this);
    ui->label_usuario->setFocus();
}

Login_screen::~Login_screen()
{
    delete ui;
}

void Login_screen::on_login_btn_clicked()
{
    if(!con.abrir_conexao()){
        QMessageBox::warning(this, "ERRO", "Erro ao abrir o banco de dados");
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
                ui->label_usuario->clear();
                ui->label_senha->clear();
                ui->label_usuario->setFocus();

            }
        }else{
            QMessageBox::warning(this, "ERRO", "falha no login");
        }
    }


    qDebug() << "Acesso:" <<getAcesso();
    qDebug() << "Nome:" <<getNome();
    qDebug() << acesso;
    qDebug() << nome;

}

QString Login_screen::getAcesso(){
    return acesso;
}

QString Login_screen::getNome(){
    return nome;
}

