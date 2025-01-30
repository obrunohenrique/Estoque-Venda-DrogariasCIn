#ifndef TELA_NOVA_VENDA_H
#define TELA_NOVA_VENDA_H
#include "conexao_db.h"
#include <QMessageBox>
#include <QDebug>
#include <QDialog>

namespace Ui {
class tela_nova_venda;
}

class tela_finalizar_venda;
class tela_pesquisar_produto;
class tela_nova_venda : public QDialog
{
    Q_OBJECT

public:
    explicit tela_nova_venda(QWidget *parent = nullptr);
    ~tela_nova_venda();
    conexao con;
    QString acesso, nome, id, nome_pesquisar,nome_selected;
    QString prod_id, prod_nome, prod_preco;
    float total_venda = 0.00;
    float valor;
    float get_total();
    QList<QList<QString>> getTabelaVenda();

private slots:
    void check();

    void limpar_campos();

    void setupTelaFinalizarVenda(tela_finalizar_venda *telaFecharVenda);

    void on_lineEdit_funcionario_returnPressed();

    void on_lineEdit_codigo_returnPressed();

    void on_lineEdit_qtd_returnPressed();

    void on_lineEdit_valor_un_returnPressed();

    void on_btn_delete_clicked();

    void on_lineEdit_delete_returnPressed();

    void on_btn_limpar_clicked();

    void on_btn_confirmar_clicked();
private:
    Ui::tela_nova_venda *ui;
};

#endif // TELA_NOVA_VENDA_H
