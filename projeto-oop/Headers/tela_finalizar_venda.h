#ifndef TELA_FINALIZAR_VENDA_H
#define TELA_FINALIZAR_VENDA_H
#include "tela_nova_venda.h"
#include <QDialog>
#include "date_selection.h"

namespace Ui {
class tela_finalizar_venda;
}

class tela_finalizar_venda : public QDialog
{
    Q_OBJECT

public:
    explicit tela_finalizar_venda(QWidget *parent = nullptr, tela_nova_venda *novaVenda = nullptr);
    ~tela_finalizar_venda();
    float total;
    QString data;
signals:
    void vendaFechada();

private slots:
    void on_doubleSpinBox_editingFinished();

    void on_btn_cancelar_clicked();

    void on_btn_fechar_venda_clicked();

private:
    Ui::tela_finalizar_venda *ui;
    tela_nova_venda *novaVenda = new tela_nova_venda;
};

#endif // TELA_FINALIZAR_VENDA_H
