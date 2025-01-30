/********************************************************************************
** Form generated from reading UI file 'tela_base.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA_BASE_H
#define UI_TELA_BASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_tela_base
{
public:
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *tela_base)
    {
        if (tela_base->objectName().isEmpty())
            tela_base->setObjectName("tela_base");
        tela_base->resize(803, 590);
        label = new QLabel(tela_base);
        label->setObjectName("label");
        label->setGeometry(QRect(340, 50, 49, 16));
        label_2 = new QLabel(tela_base);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(340, 80, 49, 16));

        retranslateUi(tela_base);

        QMetaObject::connectSlotsByName(tela_base);
    } // setupUi

    void retranslateUi(QDialog *tela_base)
    {
        tela_base->setWindowTitle(QCoreApplication::translate("tela_base", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("tela_base", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("tela_base", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tela_base: public Ui_tela_base {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_BASE_H
