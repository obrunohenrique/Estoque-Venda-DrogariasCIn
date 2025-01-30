#ifndef TELA_HISTORICO_VENDAS_H
#define TELA_HISTORICO_VENDAS_H
#include "conexao_db.h"
#include <QDialog>
#include <QTableWidget>

namespace Ui {
class tela_historico_vendas;
}

class tela_historico_vendas : public QDialog
{
    Q_OBJECT

public:
    explicit tela_historico_vendas(QWidget *parent = nullptr);
    ~tela_historico_vendas();
    QString prod_nome, prod_qtd, valor_un, vendedor_id, tipo_pagamento;
    conexao con;
    void remove_rows(QTableWidget *tw);
    QString busca;
    float total_vendas;

private slots:
    void on_btn_confirm_date_clicked();

    void on_btn_filtrar_clicked();

    void on_btn_deletar_clicked();

private:
    Ui::tela_historico_vendas *ui;
};

#endif // TELA_HISTORICO_VENDAS_H
