#ifndef LOGIN_SCREEN_H
#define LOGIN_SCREEN_H

#include <QMainWindow>
#include <QApplication>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include "conexao_db.h"
#include "tela_padrao.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class Login_screen;
}
QT_END_NAMESPACE

class Login_screen : public QMainWindow
{
    Q_OBJECT

public:
    Login_screen(QWidget *parent = nullptr);
    ~Login_screen();
    conexao con;
    QString acesso, nome;
    int id;
    QString getNome();
    QString getAcesso();

private slots:
    void on_login_btn_clicked();

    void on_lineEdit_usuario_returnPressed();

    void on_lineEdit_senha_returnPressed();

private:
    Ui::Login_screen *ui;

};
#endif // LOGIN_SCREEN_H
