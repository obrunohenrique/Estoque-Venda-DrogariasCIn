/********************************************************************************
** Form generated from reading UI file 'tela_pesquisar_produto.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA_PESQUISAR_PRODUTO_H
#define UI_TELA_PESQUISAR_PRODUTO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_tela_pesquisar_produto
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit_pesquisa;
    QPushButton *pushButton;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;

    void setupUi(QDialog *tela_pesquisar_produto)
    {
        if (tela_pesquisar_produto->objectName().isEmpty())
            tela_pesquisar_produto->setObjectName("tela_pesquisar_produto");
        tela_pesquisar_produto->resize(478, 301);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/logo cin.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        tela_pesquisar_produto->setWindowIcon(icon);
        gridLayout = new QGridLayout(tela_pesquisar_produto);
        gridLayout->setObjectName("gridLayout");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(tela_pesquisar_produto);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        lineEdit_pesquisa = new QLineEdit(tela_pesquisar_produto);
        lineEdit_pesquisa->setObjectName("lineEdit_pesquisa");
        lineEdit_pesquisa->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color:black;\n"
"border: 1px solid black;"));

        verticalLayout->addWidget(lineEdit_pesquisa);


        horizontalLayout->addLayout(verticalLayout);

        pushButton = new QPushButton(tela_pesquisar_produto);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout);

        tableWidget = new QTableWidget(tela_pesquisar_produto);
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


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(tela_pesquisar_produto);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout_3->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 1, 1);


        retranslateUi(tela_pesquisar_produto);

        QMetaObject::connectSlotsByName(tela_pesquisar_produto);
    } // setupUi

    void retranslateUi(QDialog *tela_pesquisar_produto)
    {
        tela_pesquisar_produto->setWindowTitle(QCoreApplication::translate("tela_pesquisar_produto", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("tela_pesquisar_produto", "Pesquisar produto por nome", nullptr));
        pushButton->setText(QCoreApplication::translate("tela_pesquisar_produto", "pesquisar", nullptr));
        pushButton_2->setText(QCoreApplication::translate("tela_pesquisar_produto", "confirmar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tela_pesquisar_produto: public Ui_tela_pesquisar_produto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_PESQUISAR_PRODUTO_H
