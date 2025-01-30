#ifndef TELA_FUNCIONARIOS_H
#define TELA_FUNCIONARIOS_H
#include <QSql>
#include <QSqlQuery>
#include <QMessageBox>
#include <QDebug>
#include <QDialog>
#include <QTableWidget>
#include "conexao_db.h"

namespace Ui {
class tela_funcionarios;
}

class tela_funcionarios : public QDialog
{
    Q_OBJECT

public:
    explicit tela_funcionarios(QWidget *parent = nullptr);
    ~tela_funcionarios();
    conexao con;
    int index;
    QString usuario, nome, senha, ID, Acesso, id_filtro;

private slots:
    void on_btn_cadastrar_clicked();

    void on_btn_cancelar_clicked();

    void on_tabWidget_currentChanged(int index);
    void remove_rows(QTableWidget *tw);

    void on_tableWidget_itemSelectionChanged();

    void on_btnEditar_clicked();
    void renovar_table();

    void on_btnExcluir_clicked();

    void on_btnLimpar_clicked();

    void on_btnPesquisar_clicked();

    void on_inputUsername_returnPressed();

private:
    Ui::tela_funcionarios *ui;
};

#endif // TELA_FUNCIONARIOS_H
