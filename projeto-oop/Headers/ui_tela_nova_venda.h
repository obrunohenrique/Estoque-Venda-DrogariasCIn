/********************************************************************************
** Form generated from reading UI file 'tela_nova_venda.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA_NOVA_VENDA_H
#define UI_TELA_NOVA_VENDA_H

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

class Ui_tela_nova_venda
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEdit_funcionario;
    QLabel *label_funcionario;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QLineEdit *lineEdit_codigo;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_produto;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QLineEdit *lineEdit_qtd;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QLineEdit *lineEdit_valor_un;
    QSpacerItem *horizontalSpacer;
    QLabel *label_total;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_delete;
    QPushButton *btn_delete;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *btn_limpar;
    QPushButton *btn_confirmar;

    void setupUi(QDialog *tela_nova_venda)
    {
        if (tela_nova_venda->objectName().isEmpty())
            tela_nova_venda->setObjectName("tela_nova_venda");
        tela_nova_venda->resize(499, 390);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/logo cin.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        tela_nova_venda->setWindowIcon(icon);
        tela_nova_venda->setStyleSheet(QString::fromUtf8("background-color:rgb(230, 230, 230);\n"
"color:black;"));
        gridLayout = new QGridLayout(tela_nova_venda);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2 = new QLabel(tela_nova_venda);
        label_2->setObjectName("label_2");
        label_2->setMaximumSize(QSize(130, 16777215));
        QFont font;
        font.setFamilies({QString::fromUtf8("Georgia")});
        font.setPointSize(15);
        font.setBold(true);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color:black;\n"
"border: 1px solid black;"));

        horizontalLayout_3->addWidget(label_2);

        lineEdit_funcionario = new QLineEdit(tela_nova_venda);
        lineEdit_funcionario->setObjectName("lineEdit_funcionario");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(12);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_funcionario->sizePolicy().hasHeightForWidth());
        lineEdit_funcionario->setSizePolicy(sizePolicy);
        lineEdit_funcionario->setMaximumSize(QSize(20, 16777215));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Georgia")});
        font1.setBold(true);
        lineEdit_funcionario->setFont(font1);
        lineEdit_funcionario->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color:black;\n"
"border: 1px solid black;"));
        lineEdit_funcionario->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_3->addWidget(lineEdit_funcionario);

        label_funcionario = new QLabel(tela_nova_venda);
        label_funcionario->setObjectName("label_funcionario");
        label_funcionario->setMinimumSize(QSize(100, 0));
        label_funcionario->setMaximumSize(QSize(100, 16777215));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        label_funcionario->setFont(font2);
        label_funcionario->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color:black;\n"
"border: 1px solid black;"));

        horizontalLayout_3->addWidget(label_funcionario);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(-1, 10, -1, -1);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(4);
        verticalLayout_3->setObjectName("verticalLayout_3");
        label = new QLabel(tela_nova_venda);
        label->setObjectName("label");

        verticalLayout_3->addWidget(label);

        lineEdit_codigo = new QLineEdit(tela_nova_venda);
        lineEdit_codigo->setObjectName("lineEdit_codigo");
        lineEdit_codigo->setMinimumSize(QSize(250, 0));
        lineEdit_codigo->setMaximumSize(QSize(250, 16777215));
        lineEdit_codigo->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color:black;\n"
"border: 1px solid black;"));

        verticalLayout_3->addWidget(lineEdit_codigo);


        horizontalLayout_4->addLayout(verticalLayout_3);


        horizontalLayout_6->addLayout(horizontalLayout_4);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);


        gridLayout->addLayout(horizontalLayout_6, 1, 0, 1, 1);

        label_produto = new QLabel(tela_nova_venda);
        label_produto->setObjectName("label_produto");
        QFont font3;
        font3.setPointSize(21);
        font3.setBold(true);
        label_produto->setFont(font3);
        label_produto->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color:black;\n"
"border: 1px solid black;"));
        label_produto->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_produto, 1, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_4 = new QLabel(tela_nova_venda);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("color:rgb(0,0,0)"));

        verticalLayout_2->addWidget(label_4);

        lineEdit_qtd = new QLineEdit(tela_nova_venda);
        lineEdit_qtd->setObjectName("lineEdit_qtd");
        lineEdit_qtd->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color:black;\n"
"border: 1px solid black;"));
        lineEdit_qtd->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(lineEdit_qtd);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_5 = new QLabel(tela_nova_venda);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("color:rgb(0,0,0)"));

        verticalLayout->addWidget(label_5);

        lineEdit_valor_un = new QLineEdit(tela_nova_venda);
        lineEdit_valor_un->setObjectName("lineEdit_valor_un");
        lineEdit_valor_un->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color:black;\n"
"border: 1px solid black;"));
        lineEdit_valor_un->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(lineEdit_valor_un);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        label_total = new QLabel(tela_nova_venda);
        label_total->setObjectName("label_total");
        label_total->setFont(font3);
        label_total->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"	background-color:rgb(255, 150, 150);\n"
"    border: 1px solid black;\n"
"    border-radius: 5px;\n"
"    padding: 2px 10px;"));
        label_total->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(label_total, 2, 1, 1, 1);

        tableWidget = new QTableWidget(tela_nova_venda);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setMinimumSize(QSize(480, 0));
        tableWidget->setMaximumSize(QSize(480, 16777215));
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

        gridLayout->addWidget(tableWidget, 3, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        lineEdit_delete = new QLineEdit(tela_nova_venda);
        lineEdit_delete->setObjectName("lineEdit_delete");
        lineEdit_delete->setMaximumSize(QSize(30, 16777215));
        lineEdit_delete->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color:black;\n"
"border: 1px solid black;"));

        horizontalLayout->addWidget(lineEdit_delete);

        btn_delete = new QPushButton(tela_nova_venda);
        btn_delete->setObjectName("btn_delete");
        btn_delete->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        btn_delete->setAutoDefault(false);

        horizontalLayout->addWidget(btn_delete);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        btn_limpar = new QPushButton(tela_nova_venda);
        btn_limpar->setObjectName("btn_limpar");
        btn_limpar->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        btn_limpar->setAutoDefault(false);

        horizontalLayout_5->addWidget(btn_limpar);

        btn_confirmar = new QPushButton(tela_nova_venda);
        btn_confirmar->setObjectName("btn_confirmar");
        btn_confirmar->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        btn_confirmar->setAutoDefault(false);

        horizontalLayout_5->addWidget(btn_confirmar);


        gridLayout->addLayout(horizontalLayout_5, 4, 1, 1, 1);


        retranslateUi(tela_nova_venda);

        QMetaObject::connectSlotsByName(tela_nova_venda);
    } // setupUi

    void retranslateUi(QDialog *tela_nova_venda)
    {
        tela_nova_venda->setWindowTitle(QCoreApplication::translate("tela_nova_venda", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("tela_nova_venda", "Vendedor:", nullptr));
        label_funcionario->setText(QString());
        label->setText(QCoreApplication::translate("tela_nova_venda", "Produto", nullptr));
        lineEdit_codigo->setText(QString());
        label_produto->setText(QString());
        label_4->setText(QCoreApplication::translate("tela_nova_venda", "Quantidade", nullptr));
        lineEdit_qtd->setText(QString());
        label_5->setText(QCoreApplication::translate("tela_nova_venda", "Valor Unit\303\241rio", nullptr));
        lineEdit_valor_un->setText(QString());
        label_total->setText(QCoreApplication::translate("tela_nova_venda", "Total: ", nullptr));
        btn_delete->setText(QCoreApplication::translate("tela_nova_venda", "Deletar ", nullptr));
        btn_limpar->setText(QCoreApplication::translate("tela_nova_venda", "Limpar ", nullptr));
        btn_confirmar->setText(QCoreApplication::translate("tela_nova_venda", "Confirmar ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tela_nova_venda: public Ui_tela_nova_venda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_NOVA_VENDA_H
