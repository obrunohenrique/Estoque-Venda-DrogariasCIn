/********************************************************************************
** Form generated from reading UI file 'tela_venda.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA_VENDA_H
#define UI_TELA_VENDA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tela_venda
{
public:
    QTableWidget *tableWidget;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *btn_limpar;
    QPushButton *btn_confirmar;
    QLineEdit *lineEdit_codigo;
    QLabel *label_funcionario;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_delete;
    QPushButton *btn_delete;
    QLineEdit *lineEdit_funcionario;
    QLabel *label_2;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QLineEdit *lineEdit_qtd;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QLineEdit *lineEdit_valor_un;
    QLabel *label_produto;

    void setupUi(QDialog *tela_venda)
    {
        if (tela_venda->objectName().isEmpty())
            tela_venda->setObjectName("tela_venda");
        tela_venda->resize(484, 376);
        tableWidget = new QTableWidget(tela_venda);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(-4, 138, 481, 192));
        tableWidget->setStyleSheet(QString::fromUtf8("border: 1px solid black; border-radius: 5px; color:black;\n"
"background-color:rgb(190, 190, 190)"));
        layoutWidget_2 = new QWidget(tela_venda);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(309, 345, 168, 26));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        btn_limpar = new QPushButton(layoutWidget_2);
        btn_limpar->setObjectName("btn_limpar");
        btn_limpar->setStyleSheet(QString::fromUtf8("background-color:rgb(195, 195, 195);\n"
"color:rgb(0, 0, 0)"));

        horizontalLayout_5->addWidget(btn_limpar);

        btn_confirmar = new QPushButton(layoutWidget_2);
        btn_confirmar->setObjectName("btn_confirmar");
        btn_confirmar->setStyleSheet(QString::fromUtf8("background-color:rgb(195, 195, 195);\n"
"color:rgb(0, 0, 0)"));

        horizontalLayout_5->addWidget(btn_confirmar);

        lineEdit_codigo = new QLineEdit(tela_venda);
        lineEdit_codigo->setObjectName("lineEdit_codigo");
        lineEdit_codigo->setGeometry(QRect(-1, 41, 261, 24));
        lineEdit_codigo->setStyleSheet(QString::fromUtf8("border: 1px solid black; border-radius: 5px; color:black;\n"
"background-color:rgb(190, 190, 190)"));
        label_funcionario = new QLabel(tela_venda);
        label_funcionario->setObjectName("label_funcionario");
        label_funcionario->setGeometry(QRect(157, 4, 81, 21));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label_funcionario->setFont(font);
        label_funcionario->setStyleSheet(QString::fromUtf8("border: 1px solid black; border-radius: 5px; color:black;\n"
""));
        layoutWidget = new QWidget(tela_venda);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(7, 344, 118, 26));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_delete = new QLineEdit(layoutWidget);
        lineEdit_delete->setObjectName("lineEdit_delete");
        lineEdit_delete->setStyleSheet(QString::fromUtf8("border: 1px solid black; border-radius: 5px; color:black;\n"
"background-color:rgb(190, 190, 190)"));

        horizontalLayout->addWidget(lineEdit_delete);

        btn_delete = new QPushButton(layoutWidget);
        btn_delete->setObjectName("btn_delete");
        btn_delete->setStyleSheet(QString::fromUtf8("background-color:rgb(195, 195, 195);\n"
"color:rgb(0, 0, 0)"));

        horizontalLayout->addWidget(btn_delete);

        lineEdit_funcionario = new QLineEdit(tela_venda);
        lineEdit_funcionario->setObjectName("lineEdit_funcionario");
        lineEdit_funcionario->setGeometry(QRect(127, 4, 22, 22));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Georgia")});
        font1.setBold(true);
        lineEdit_funcionario->setFont(font1);
        lineEdit_funcionario->setStyleSheet(QString::fromUtf8("border: 1px solid black; border-radius: 5px; color:black;\n"
"background-color:rgb(190, 190, 190)"));
        lineEdit_funcionario->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_2 = new QLabel(tela_venda);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(-3, 4, 121, 22));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Georgia")});
        font2.setPointSize(15);
        font2.setBold(true);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("border: 1px solid black; border-radius: 5px; color:black;\n"
""));
        layoutWidget_3 = new QWidget(tela_venda);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(-2, 84, 194, 46));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_4 = new QLabel(layoutWidget_3);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("color:rgb(0,0,0)"));

        verticalLayout_2->addWidget(label_4);

        lineEdit_qtd = new QLineEdit(layoutWidget_3);
        lineEdit_qtd->setObjectName("lineEdit_qtd");
        lineEdit_qtd->setStyleSheet(QString::fromUtf8("border: 1px solid black; border-radius: 5px; color:black;\n"
"background-color:rgb(190, 190, 190)"));
        lineEdit_qtd->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(lineEdit_qtd);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_5 = new QLabel(layoutWidget_3);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("color:rgb(0,0,0)"));

        verticalLayout->addWidget(label_5);

        lineEdit_valor_un = new QLineEdit(layoutWidget_3);
        lineEdit_valor_un->setObjectName("lineEdit_valor_un");
        lineEdit_valor_un->setStyleSheet(QString::fromUtf8("border: 1px solid black; border-radius: 5px; color:black;\n"
"background-color:rgb(190, 190, 190)"));
        lineEdit_valor_un->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(lineEdit_valor_un);


        horizontalLayout_2->addLayout(verticalLayout);

        label_produto = new QLabel(tela_venda);
        label_produto->setObjectName("label_produto");
        label_produto->setGeometry(QRect(270, 30, 201, 41));
        QFont font3;
        font3.setPointSize(21);
        label_produto->setFont(font3);
        label_produto->setStyleSheet(QString::fromUtf8("border: 1px solid black; border-radius: 5px; color:black;\n"
""));
        label_produto->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        retranslateUi(tela_venda);

        QMetaObject::connectSlotsByName(tela_venda);
    } // setupUi

    void retranslateUi(QDialog *tela_venda)
    {
        tela_venda->setWindowTitle(QCoreApplication::translate("tela_venda", "Dialog", nullptr));
        btn_limpar->setText(QCoreApplication::translate("tela_venda", "Limpar ", nullptr));
        btn_confirmar->setText(QCoreApplication::translate("tela_venda", "Confirmar ", nullptr));
        label_funcionario->setText(QString());
        btn_delete->setText(QCoreApplication::translate("tela_venda", "Deletar ", nullptr));
        label_2->setText(QCoreApplication::translate("tela_venda", "Vendedor:", nullptr));
        label_4->setText(QCoreApplication::translate("tela_venda", "Quantidade", nullptr));
        lineEdit_qtd->setText(QString());
        label_5->setText(QCoreApplication::translate("tela_venda", "Valor Unit\303\241rio", nullptr));
        lineEdit_valor_un->setText(QString());
        label_produto->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class tela_venda: public Ui_tela_venda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_VENDA_H
