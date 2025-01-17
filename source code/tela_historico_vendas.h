#ifndef TELA_HISTORICO_VENDAS_H
#define TELA_HISTORICO_VENDAS_H

#include <QDialog>

namespace Ui {
class tela_historico_vendas;
}

class tela_historico_vendas : public QDialog
{
    Q_OBJECT

public:
    explicit tela_historico_vendas(QWidget *parent = nullptr);
    ~tela_historico_vendas();

private:
    Ui::tela_historico_vendas *ui;
};

#endif // TELA_HISTORICO_VENDAS_H
