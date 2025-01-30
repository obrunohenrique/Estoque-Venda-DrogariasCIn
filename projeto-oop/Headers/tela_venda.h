#ifndef TELA_VENDA_H
#define TELA_VENDA_H
#include "login_screen.h"
#include "conexao_db.h"
#include <QDialog>

namespace Ui {
class tela_venda;
}

class tela_venda : public QDialog
{
    Q_OBJECT

public:
    explicit tela_venda(QWidget *parent = nullptr);
    ~tela_venda();
    conexao con;
    QString acesso, nome, id;
    QString prod_id, prod_nome, prod_preco;

private slots:
    void on_lineEdit_returnPressed();

    void on_lineEdit_2_returnPressed();

    void on_lineEdit_funcionario_returnPressed();

    void on_lineEdit_codigo_returnPressed();

    void on_lineEdit_qtd_returnPressed();

    void on_lineEdit_valor_un_returnPressed();

private:
    Ui::tela_venda *ui;
};

#endif // TELA_VENDA_H
