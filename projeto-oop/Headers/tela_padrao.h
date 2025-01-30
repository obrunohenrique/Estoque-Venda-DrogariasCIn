#ifndef TELA_PADRAO_H
#define TELA_PADRAO_H

#include <QMainWindow>

class Login_screen;

namespace Ui {
class tela_padrao;
}

class tela_padrao : public QMainWindow
{
    Q_OBJECT

public:
    explicit tela_padrao(Login_screen *login, QWidget *parent = nullptr);
    ~tela_padrao();
    QString date;
    QString get_date();
private slots:
    void on_actionEstoque_triggered();

    void on_actionFuncionarios_triggered();

    void on_actionNova_venda_triggered();

    void on_actionHistorico_de_vendas_triggered();

    void on_actionSair_triggered();

    void on_actionSOBRE_triggered();

private:
    Ui::tela_padrao *ui;
    Login_screen *login_screen;
};

#endif // TELA_PADRAO_H
