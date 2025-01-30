#ifndef TELA_ESTOQUE_H
#define TELA_ESTOQUE_H
#include "conexao_db.h"
#include <QDebug>
#include <QMessageBox>
#include <QDialog>
#include <QtSql>
#include <QTableWidget>

namespace Ui {
class tela_estoque;
}

class tela_estoque : public QDialog
{
    Q_OBJECT

public:
    explicit tela_estoque(QWidget *parent = nullptr);
    ~tela_estoque();
    conexao con;
    QString descricao, valor, qtd, codigo;
    QString descricao_ge, valor_ge, qtd_ge, codigo_ge;
    QString busca;
    void remove_rows(QTableWidget *tw);
private slots:
    void on_lineEdit_codigo_returnPressed();

    void on_lineEdit_descricao_returnPressed();

    void on_lineEdit_qtd_returnPressed();

    void on_btn_novo_clicked();

    void on_btn_gerar_novo_clicked();

    void on_tab_widget_currentChanged(int index);

    void on_tableWidget_produtos_itemSelectionChanged();

    void on_btn_att_ge_clicked();

    void on_btn_excluir_ge_clicked();

    void on_btn_procurar_clicked();

    void on_lineEdit_valor_returnPressed();

private:
    Ui::tela_estoque *ui;
};

#endif // TELA_ESTOQUE_H
