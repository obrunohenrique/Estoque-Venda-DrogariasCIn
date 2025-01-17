#ifndef TELA_FUNCIONARIOS_H
#define TELA_FUNCIONARIOS_H

#include <QDialog>

namespace Ui {
class tela_funcionarios;
}

class tela_funcionarios : public QDialog
{
    Q_OBJECT

public:
    explicit tela_funcionarios(QWidget *parent = nullptr);
    ~tela_funcionarios();

private:
    Ui::tela_funcionarios *ui;
};

#endif // TELA_FUNCIONARIOS_H
