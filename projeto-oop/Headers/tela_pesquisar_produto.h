#ifndef TELA_PESQUISAR_PRODUTO_H
#define TELA_PESQUISAR_PRODUTO_H
#include "tela_nova_venda.h"
#include <QTableWidget>
#include <QDialog>
#include "conexao_db.h"

namespace Ui {
class tela_pesquisar_produto;
}

class tela_pesquisar_produto : public QDialog
{
    Q_OBJECT

public:
    explicit tela_pesquisar_produto(QWidget *parent = nullptr, tela_nova_venda *novaVenda = nullptr);
    ~tela_pesquisar_produto();
    QString nome_selected;
    conexao con;
    tela_nova_venda tela;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    void renovar_table();
    void remove_rows(QTableWidget *tw);
    Ui::tela_pesquisar_produto *ui;
    tela_nova_venda *novaVenda = new tela_nova_venda;
};

#endif // TELA_PESQUISAR_PRODUTO_H
