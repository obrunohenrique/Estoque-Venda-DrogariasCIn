/********************************************************************************
** Form generated from reading UI file 'tela_finalizar_venda.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA_FINALIZAR_VENDA_H
#define UI_TELA_FINALIZAR_VENDA_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_tela_finalizar_venda
{
public:
    QGridLayout *gridLayout;
    QPushButton *btn_cancelar;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_total;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLabel *label_total_desc;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_5;
    QComboBox *comboBox;
    QPushButton *btn_fechar_venda;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *tela_finalizar_venda)
    {
        if (tela_finalizar_venda->objectName().isEmpty())
            tela_finalizar_venda->setObjectName("tela_finalizar_venda");
        tela_finalizar_venda->resize(272, 224);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/logo cin.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        tela_finalizar_venda->setWindowIcon(icon);
        tela_finalizar_venda->setStyleSheet(QString::fromUtf8("background-color:rgb(230, 230, 230);\n"
"color:black;"));
        gridLayout = new QGridLayout(tela_finalizar_venda);
        gridLayout->setObjectName("gridLayout");
        btn_cancelar = new QPushButton(tela_finalizar_venda);
        btn_cancelar->setObjectName("btn_cancelar");
        btn_cancelar->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: rgb(0, 0, 0);\n"
"	background-color:rgb(255, 150, 150);\n"
"    border: 1px solid black;\n"
"    border-radius: 5px;\n"
"    padding: 2px 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(255, 131, 131);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(255, 131, 131);\n"
"}\n"
""));

        gridLayout->addWidget(btn_cancelar, 2, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(tela_finalizar_venda);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        label_total = new QLabel(tela_finalizar_venda);
        label_total->setObjectName("label_total");

        horizontalLayout->addWidget(label_total);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(tela_finalizar_venda);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        doubleSpinBox = new QDoubleSpinBox(tela_finalizar_venda);
        doubleSpinBox->setObjectName("doubleSpinBox");
        doubleSpinBox->setSingleStep(10.000000000000000);

        horizontalLayout_2->addWidget(doubleSpinBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2 = new QLabel(tela_finalizar_venda);
        label_2->setObjectName("label_2");

        horizontalLayout_3->addWidget(label_2);

        label_total_desc = new QLabel(tela_finalizar_venda);
        label_total_desc->setObjectName("label_total_desc");

        horizontalLayout_3->addWidget(label_total_desc);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_3);

        label_5 = new QLabel(tela_finalizar_venda);
        label_5->setObjectName("label_5");

        verticalLayout->addWidget(label_5);

        comboBox = new QComboBox(tela_finalizar_venda);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);\n"
"color: black"));

        verticalLayout->addWidget(comboBox);


        verticalLayout_2->addLayout(verticalLayout);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 2);

        btn_fechar_venda = new QPushButton(tela_finalizar_venda);
        btn_fechar_venda->setObjectName("btn_fechar_venda");
        btn_fechar_venda->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: rgb(0, 0, 0);\n"
"	background-color:rgb(255, 150, 150);\n"
"    border: 1px solid black;\n"
"    border-radius: 5px;\n"
"    padding: 2px 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(255, 131, 131);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(255, 131, 131);\n"
"}\n"
""));

        gridLayout->addWidget(btn_fechar_venda, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);


        retranslateUi(tela_finalizar_venda);

        QMetaObject::connectSlotsByName(tela_finalizar_venda);
    } // setupUi

    void retranslateUi(QDialog *tela_finalizar_venda)
    {
        tela_finalizar_venda->setWindowTitle(QCoreApplication::translate("tela_finalizar_venda", "Dialog", nullptr));
        btn_cancelar->setText(QCoreApplication::translate("tela_finalizar_venda", "Cancelar", nullptr));
        label->setText(QCoreApplication::translate("tela_finalizar_venda", "Total:", nullptr));
        label_total->setText(QString());
        label_3->setText(QCoreApplication::translate("tela_finalizar_venda", "Desconto% :", nullptr));
        label_2->setText(QCoreApplication::translate("tela_finalizar_venda", "Total:", nullptr));
        label_total_desc->setText(QString());
        label_5->setText(QCoreApplication::translate("tela_finalizar_venda", "Forma de Pagamento:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("tela_finalizar_venda", "Dinheiro", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("tela_finalizar_venda", "Credito", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("tela_finalizar_venda", "Debito", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("tela_finalizar_venda", "Pix", nullptr));

        btn_fechar_venda->setText(QCoreApplication::translate("tela_finalizar_venda", "Fechar Venda", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tela_finalizar_venda: public Ui_tela_finalizar_venda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_FINALIZAR_VENDA_H
