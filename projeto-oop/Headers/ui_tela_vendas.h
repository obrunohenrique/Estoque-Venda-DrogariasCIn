/********************************************************************************
** Form generated from reading UI file 'tela_vendas.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA_VENDAS_H
#define UI_TELA_VENDAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_tela_vendas
{
public:

    void setupUi(QDialog *tela_vendas)
    {
        if (tela_vendas->objectName().isEmpty())
            tela_vendas->setObjectName("tela_vendas");
        tela_vendas->resize(400, 300);

        retranslateUi(tela_vendas);

        QMetaObject::connectSlotsByName(tela_vendas);
    } // setupUi

    void retranslateUi(QDialog *tela_vendas)
    {
        tela_vendas->setWindowTitle(QCoreApplication::translate("tela_vendas", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tela_vendas: public Ui_tela_vendas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_VENDAS_H
