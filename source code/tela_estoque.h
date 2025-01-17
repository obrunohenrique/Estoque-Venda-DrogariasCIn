#ifndef TELA_ESTOQUE_H
#define TELA_ESTOQUE_H

#include <QDialog>

namespace Ui {
class tela_estoque;
}

class tela_estoque : public QDialog
{
    Q_OBJECT

public:
    explicit tela_estoque(QWidget *parent = nullptr);
    ~tela_estoque();

private:
    Ui::tela_estoque *ui;
};

#endif // TELA_ESTOQUE_H
