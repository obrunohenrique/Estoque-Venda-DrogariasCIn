/********************************************************************************
** Form generated from reading UI file 'tela_historico_vendas.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA_HISTORICO_VENDAS_H
#define UI_TELA_HISTORICO_VENDAS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tela_historico_vendas
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDateEdit *dateEdit;
    QPushButton *btn_confirm_date;
    QLabel *label_2;
    QRadioButton *radioButton_produto;
    QRadioButton *radioButton_vendedor;
    QRadioButton *radioButton_payment;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *lineEdit_filtrar;
    QPushButton *btn_filtrar;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btn_deletar;
    QHBoxLayout *horizontalLayout_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_total;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QDialog *tela_historico_vendas)
    {
        if (tela_historico_vendas->objectName().isEmpty())
            tela_historico_vendas->setObjectName("tela_historico_vendas");
        tela_historico_vendas->resize(915, 384);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/logo cin.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        tela_historico_vendas->setWindowIcon(icon);
        tela_historico_vendas->setStyleSheet(QString::fromUtf8("background-color:rgb(230, 230, 230);\n"
"color:black;"));
        layoutWidget = new QWidget(tela_historico_vendas);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(9, 9, 301, 226));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        QFont font;
        font.setBold(true);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        dateEdit = new QDateEdit(layoutWidget);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color:black;\n"
""));

        horizontalLayout->addWidget(dateEdit);

        btn_confirm_date = new QPushButton(layoutWidget);
        btn_confirm_date->setObjectName("btn_confirm_date");
        QFont font1;
        font1.setPointSize(8);
        font1.setBold(true);
        btn_confirm_date->setFont(font1);
        btn_confirm_date->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        btn_confirm_date->setAutoDefault(false);

        horizontalLayout->addWidget(btn_confirm_date);


        verticalLayout->addLayout(horizontalLayout);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        radioButton_produto = new QRadioButton(layoutWidget);
        radioButton_produto->setObjectName("radioButton_produto");
        radioButton_produto->setStyleSheet(QString::fromUtf8("QRadioButton::indicator {\n"
"    width: 10px;\n"
"    height: 10px;\n"
"    border: 1px solid black;\n"
"    border-radius: 5px;\n"
"    background-color: #f0f0f0;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked {\n"
"    background-color: rgb(255, 150, 150);\n"
"    border: 1px solid black;\n"
"}\n"
"\n"
""));

        verticalLayout->addWidget(radioButton_produto);

        radioButton_vendedor = new QRadioButton(layoutWidget);
        radioButton_vendedor->setObjectName("radioButton_vendedor");
        radioButton_vendedor->setStyleSheet(QString::fromUtf8("QRadioButton::indicator {\n"
"    width: 10px;\n"
"    height: 10px;\n"
"    border: 1px solid black;\n"
"    border-radius: 5px;\n"
"    background-color: #f0f0f0;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked {\n"
"    background-color: rgb(255, 150, 150);\n"
"    border: 1px solid black;\n"
"}\n"
"\n"
""));

        verticalLayout->addWidget(radioButton_vendedor);

        radioButton_payment = new QRadioButton(layoutWidget);
        radioButton_payment->setObjectName("radioButton_payment");
        radioButton_payment->setStyleSheet(QString::fromUtf8("QRadioButton::indicator {\n"
"    width: 10px;\n"
"    height: 10px;\n"
"    border: 1px solid black;\n"
"    border-radius: 5px;\n"
"    background-color: #f0f0f0;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked {\n"
"    background-color: rgb(255, 150, 150);\n"
"    border: 1px solid black;\n"
"}\n"
"\n"
""));

        verticalLayout->addWidget(radioButton_payment);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        lineEdit_filtrar = new QLineEdit(layoutWidget);
        lineEdit_filtrar->setObjectName("lineEdit_filtrar");
        lineEdit_filtrar->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color:black;\n"
"border: 1px solid black;"));

        horizontalLayout_5->addWidget(lineEdit_filtrar);

        btn_filtrar = new QPushButton(layoutWidget);
        btn_filtrar->setObjectName("btn_filtrar");
        btn_filtrar->setFont(font1);
        btn_filtrar->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_5->addWidget(btn_filtrar);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        btn_deletar = new QPushButton(layoutWidget);
        btn_deletar->setObjectName("btn_deletar");
        btn_deletar->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_3->addWidget(btn_deletar);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");

        verticalLayout->addLayout(horizontalLayout_2);

        layoutWidget1 = new QWidget(tela_historico_vendas);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(311, 1, 601, 381));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        tableWidget = new QTableWidget(layoutWidget1);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setStyleSheet(QString::fromUtf8("QTableWidget {\n"
"    background-color: white;\n"
"    color: black;\n"
"    gridline-color: #e1e1e1;\n"
"	border: 2px solid black\n"
"}\n"
"\n"
"QTableWidget::item:selected {\n"
"    background-color: #ffcccc; \n"
"    color: black;\n"
"}\n"
"\n"
"QTableWidget::horizontalHeader {\n"
"    background-color: #f0f0f0;\n"
"    border: none;\n"
"}\n"
"\n"
"QTableWidget::verticalHeader {\n"
"    background-color: #f0f0f0;\n"
"    border: none;\n"
"}\n"
"\n"
"QTableWidget::item {\n"
"    padding: 5px;\n"
"}\n"
""));

        verticalLayout_2->addWidget(tableWidget);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        label_total = new QLabel(layoutWidget1);
        label_total->setObjectName("label_total");
        QFont font2;
        font2.setPointSize(17);
        font2.setBold(true);
        label_total->setFont(font2);
        label_total->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"	background-color:rgb(255, 150, 150);\n"
"    border: 1px solid black;\n"
"    border-radius: 5px;\n"
"    padding: 2px 10px;"));
        label_total->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_4->addWidget(label_total);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);


        verticalLayout_2->addLayout(horizontalLayout_4);


        retranslateUi(tela_historico_vendas);

        QMetaObject::connectSlotsByName(tela_historico_vendas);
    } // setupUi

    void retranslateUi(QDialog *tela_historico_vendas)
    {
        tela_historico_vendas->setWindowTitle(QCoreApplication::translate("tela_historico_vendas", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("tela_historico_vendas", "Selecione o dia:", nullptr));
        btn_confirm_date->setText(QCoreApplication::translate("tela_historico_vendas", "confirmar data", nullptr));
        label_2->setText(QCoreApplication::translate("tela_historico_vendas", "Filtragem", nullptr));
        radioButton_produto->setText(QCoreApplication::translate("tela_historico_vendas", "Produto", nullptr));
        radioButton_vendedor->setText(QCoreApplication::translate("tela_historico_vendas", "Vendedor", nullptr));
        radioButton_payment->setText(QCoreApplication::translate("tela_historico_vendas", "Forma de Pagamento", nullptr));
        btn_filtrar->setText(QCoreApplication::translate("tela_historico_vendas", "Filtrar", nullptr));
        btn_deletar->setText(QCoreApplication::translate("tela_historico_vendas", "deletar venda", nullptr));
        label_total->setText(QCoreApplication::translate("tela_historico_vendas", "Total Vendido: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tela_historico_vendas: public Ui_tela_historico_vendas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_HISTORICO_VENDAS_H
