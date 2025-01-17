#ifndef TELA_VENDAS_H
#define TELA_VENDAS_H

#include <QDialog>

namespace Ui {
class tela_vendas;
}

class tela_vendas : public QDialog
{
    Q_OBJECT

public:
    explicit tela_vendas(QWidget *parent = nullptr);
    ~tela_vendas();

private:
    Ui::tela_vendas *ui;
};

#endif // TELA_VENDAS_H
