/********************************************************************************
** Form generated from reading UI file 'tela_estoque.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA_ESTOQUE_H
#define UI_TELA_ESTOQUE_H

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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tela_estoque
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tab_widget;
    QWidget *tab_nova;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_codigo;
    QLineEdit *lineEdit_codigo;
    QVBoxLayout *verticalLayout;
    QLabel *label_descricao;
    QLineEdit *lineEdit_descricao;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_qtd;
    QLineEdit *lineEdit_qtd;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_valor;
    QLineEdit *lineEdit_valor;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_novo;
    QPushButton *btn_gerar_novo;
    QSpacerItem *horizontalSpacer;
    QWidget *tab_gestao;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_13;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_codigo_ge;
    QLineEdit *lineEdit_codigo_ge;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_descricao_ge;
    QLineEdit *lineEdit_descricao_ge;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_qtd_ge;
    QLineEdit *lineEdit_qtd_ge;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_valor_ge;
    QLineEdit *lineEdit_valor_ge;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btn_att_ge;
    QPushButton *btn_excluir_ge;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_7;
    QRadioButton *radioButton_codigo;
    QRadioButton *radioButton_descricao;
    QVBoxLayout *verticalLayout_8;
    QLineEdit *lineEdit_procurar;
    QPushButton *btn_procurar;
    QTableWidget *tableWidget_produtos;

    void setupUi(QDialog *tela_estoque)
    {
        if (tela_estoque->objectName().isEmpty())
            tela_estoque->setObjectName("tela_estoque");
        tela_estoque->resize(401, 318);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/logo cin.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        tela_estoque->setWindowIcon(icon);
        tela_estoque->setStyleSheet(QString::fromUtf8("background-color:rgb(230, 230, 230);\n"
"color:black;"));
        gridLayout = new QGridLayout(tela_estoque);
        gridLayout->setObjectName("gridLayout");
        tab_widget = new QTabWidget(tela_estoque);
        tab_widget->setObjectName("tab_widget");
        tab_widget->setStyleSheet(QString::fromUtf8("QTabWidget::pane {\n"
"    border: 1px solid #ccc; /* Border around the tab widget */\n"
"    background-color: #f0f0f0; /* Background color of the tab content area */\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"    background: rgb(255, 150, 150); /* Background color of inactive tabs */\n"
"    border: 1px solid #ccc; /* Border around tabs */\n"
"    padding: 10px; /* Padding inside tabs */\n"
"    font-size: 14px; /* Font size of tab text */\n"
"    color: #333; /* Text color of inactive tabs */\n"
"}\n"
"\n"
"QTabBar::tab:selected {\n"
"    background: rgb(255, 170, 170); /* Slightly lighter/different shade for the active tab */\n"
"    border: 1px solid #333; /* Wider border for the selected tab */\n"
"    border-bottom-color: rgb(255, 170, 170); /* Match the border color to the background */\n"
"    color: #000; /* Text color of the selected tab */\n"
"}\n"
"\n"
"QTabBar::tab:hover {\n"
"    background: rgb(255, 120, 120); /* Slightly darker red when hovered */\n"
"}\n"
"\n"
"QTabBar::tab:!selected {\n"
"    margin-"
                        "top: 2px; /* Add a small margin to non-selected tabs */\n"
"}"));
        tab_nova = new QWidget();
        tab_nova->setObjectName("tab_nova");
        gridLayout_2 = new QGridLayout(tab_nova);
        gridLayout_2->setObjectName("gridLayout_2");
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_codigo = new QLabel(tab_nova);
        label_codigo->setObjectName("label_codigo");

        verticalLayout_2->addWidget(label_codigo);

        lineEdit_codigo = new QLineEdit(tab_nova);
        lineEdit_codigo->setObjectName("lineEdit_codigo");
        lineEdit_codigo->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color:black;\n"
"border: 1px solid black;"));

        verticalLayout_2->addWidget(lineEdit_codigo);


        verticalLayout_5->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_descricao = new QLabel(tab_nova);
        label_descricao->setObjectName("label_descricao");

        verticalLayout->addWidget(label_descricao);

        lineEdit_descricao = new QLineEdit(tab_nova);
        lineEdit_descricao->setObjectName("lineEdit_descricao");
        lineEdit_descricao->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color:black;\n"
"border: 1px solid black;"));

        verticalLayout->addWidget(lineEdit_descricao);


        verticalLayout_5->addLayout(verticalLayout);


        verticalLayout_6->addLayout(verticalLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_qtd = new QLabel(tab_nova);
        label_qtd->setObjectName("label_qtd");

        verticalLayout_3->addWidget(label_qtd);

        lineEdit_qtd = new QLineEdit(tab_nova);
        lineEdit_qtd->setObjectName("lineEdit_qtd");
        lineEdit_qtd->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color:black;\n"
"border: 1px solid black;"));

        verticalLayout_3->addWidget(lineEdit_qtd);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_valor = new QLabel(tab_nova);
        label_valor->setObjectName("label_valor");

        verticalLayout_4->addWidget(label_valor);

        lineEdit_valor = new QLineEdit(tab_nova);
        lineEdit_valor->setObjectName("lineEdit_valor");
        lineEdit_valor->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color:black;\n"
"border: 1px solid black;"));

        verticalLayout_4->addWidget(lineEdit_valor);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_6->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        btn_novo = new QPushButton(tab_nova);
        btn_novo->setObjectName("btn_novo");
        btn_novo->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        btn_novo->setAutoDefault(false);

        horizontalLayout_2->addWidget(btn_novo);

        btn_gerar_novo = new QPushButton(tab_nova);
        btn_gerar_novo->setObjectName("btn_gerar_novo");
        btn_gerar_novo->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        btn_gerar_novo->setAutoDefault(false);

        horizontalLayout_2->addWidget(btn_gerar_novo);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_6->addLayout(horizontalLayout_2);


        gridLayout_2->addLayout(verticalLayout_6, 0, 0, 1, 1);

        tab_widget->addTab(tab_nova, QString());
        tab_gestao = new QWidget();
        tab_gestao->setObjectName("tab_gestao");
        gridLayout_3 = new QGridLayout(tab_gestao);
        gridLayout_3->setObjectName("gridLayout_3");
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName("verticalLayout_13");
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        label_codigo_ge = new QLabel(tab_gestao);
        label_codigo_ge->setObjectName("label_codigo_ge");

        verticalLayout_9->addWidget(label_codigo_ge);

        lineEdit_codigo_ge = new QLineEdit(tab_gestao);
        lineEdit_codigo_ge->setObjectName("lineEdit_codigo_ge");
        lineEdit_codigo_ge->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color:black;\n"
"border: 1px solid black;"));

        verticalLayout_9->addWidget(lineEdit_codigo_ge);


        verticalLayout_13->addLayout(verticalLayout_9);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName("verticalLayout_10");
        label_descricao_ge = new QLabel(tab_gestao);
        label_descricao_ge->setObjectName("label_descricao_ge");

        verticalLayout_10->addWidget(label_descricao_ge);

        lineEdit_descricao_ge = new QLineEdit(tab_gestao);
        lineEdit_descricao_ge->setObjectName("lineEdit_descricao_ge");
        lineEdit_descricao_ge->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color:black;\n"
"border: 1px solid black;"));

        verticalLayout_10->addWidget(lineEdit_descricao_ge);


        verticalLayout_13->addLayout(verticalLayout_10);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName("verticalLayout_11");
        label_qtd_ge = new QLabel(tab_gestao);
        label_qtd_ge->setObjectName("label_qtd_ge");

        verticalLayout_11->addWidget(label_qtd_ge);

        lineEdit_qtd_ge = new QLineEdit(tab_gestao);
        lineEdit_qtd_ge->setObjectName("lineEdit_qtd_ge");
        lineEdit_qtd_ge->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color:black;\n"
"border: 1px solid black;"));

        verticalLayout_11->addWidget(lineEdit_qtd_ge);


        verticalLayout_13->addLayout(verticalLayout_11);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName("verticalLayout_12");
        label_valor_ge = new QLabel(tab_gestao);
        label_valor_ge->setObjectName("label_valor_ge");

        verticalLayout_12->addWidget(label_valor_ge);

        lineEdit_valor_ge = new QLineEdit(tab_gestao);
        lineEdit_valor_ge->setObjectName("lineEdit_valor_ge");
        lineEdit_valor_ge->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color:black;\n"
"border: 1px solid black;"));

        verticalLayout_12->addWidget(lineEdit_valor_ge);


        verticalLayout_13->addLayout(verticalLayout_12);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_13->addItem(verticalSpacer_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        btn_att_ge = new QPushButton(tab_gestao);
        btn_att_ge->setObjectName("btn_att_ge");
        btn_att_ge->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        btn_att_ge->setAutoDefault(false);

        horizontalLayout_3->addWidget(btn_att_ge);

        btn_excluir_ge = new QPushButton(tab_gestao);
        btn_excluir_ge->setObjectName("btn_excluir_ge");
        btn_excluir_ge->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_3->addWidget(btn_excluir_ge);


        verticalLayout_13->addLayout(horizontalLayout_3);


        gridLayout_3->addLayout(verticalLayout_13, 0, 0, 2, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        radioButton_codigo = new QRadioButton(tab_gestao);
        radioButton_codigo->setObjectName("radioButton_codigo");
        radioButton_codigo->setStyleSheet(QString::fromUtf8("QRadioButton::indicator {\n"
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

        verticalLayout_7->addWidget(radioButton_codigo);

        radioButton_descricao = new QRadioButton(tab_gestao);
        radioButton_descricao->setObjectName("radioButton_descricao");
        radioButton_descricao->setStyleSheet(QString::fromUtf8("QRadioButton::indicator {\n"
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
        radioButton_descricao->setChecked(false);
        radioButton_descricao->setAutoExclusive(true);

        verticalLayout_7->addWidget(radioButton_descricao);


        horizontalLayout_4->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        lineEdit_procurar = new QLineEdit(tab_gestao);
        lineEdit_procurar->setObjectName("lineEdit_procurar");
        lineEdit_procurar->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color:black;\n"
"border: 1px solid black;"));

        verticalLayout_8->addWidget(lineEdit_procurar);

        btn_procurar = new QPushButton(tab_gestao);
        btn_procurar->setObjectName("btn_procurar");
        btn_procurar->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        verticalLayout_8->addWidget(btn_procurar);


        horizontalLayout_4->addLayout(verticalLayout_8);


        gridLayout_3->addLayout(horizontalLayout_4, 0, 1, 1, 1);

        tableWidget_produtos = new QTableWidget(tab_gestao);
        tableWidget_produtos->setObjectName("tableWidget_produtos");
        tableWidget_produtos->setStyleSheet(QString::fromUtf8("QTableWidget {\n"
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

        gridLayout_3->addWidget(tableWidget_produtos, 1, 1, 1, 1);

        tab_widget->addTab(tab_gestao, QString());

        gridLayout->addWidget(tab_widget, 0, 0, 1, 1);


        retranslateUi(tela_estoque);

        tab_widget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(tela_estoque);
    } // setupUi

    void retranslateUi(QDialog *tela_estoque)
    {
        tela_estoque->setWindowTitle(QCoreApplication::translate("tela_estoque", "Dialog", nullptr));
        label_codigo->setText(QCoreApplication::translate("tela_estoque", "C\303\263digo", nullptr));
        label_descricao->setText(QCoreApplication::translate("tela_estoque", "Descri\303\247\303\243o", nullptr));
        label_qtd->setText(QCoreApplication::translate("tela_estoque", "Quantidade estoque", nullptr));
        label_valor->setText(QCoreApplication::translate("tela_estoque", "Valor", nullptr));
        btn_novo->setText(QCoreApplication::translate("tela_estoque", "Novo", nullptr));
        btn_gerar_novo->setText(QCoreApplication::translate("tela_estoque", "Cadastrar", nullptr));
        tab_widget->setTabText(tab_widget->indexOf(tab_nova), QCoreApplication::translate("tela_estoque", "Novo Produto", nullptr));
        label_codigo_ge->setText(QCoreApplication::translate("tela_estoque", "C\303\263digo", nullptr));
        label_descricao_ge->setText(QCoreApplication::translate("tela_estoque", "Descri\303\247\303\243o", nullptr));
        label_qtd_ge->setText(QCoreApplication::translate("tela_estoque", "Quantidade Estoque", nullptr));
        label_valor_ge->setText(QCoreApplication::translate("tela_estoque", "Valor", nullptr));
        btn_att_ge->setText(QCoreApplication::translate("tela_estoque", "Atualizar", nullptr));
        btn_excluir_ge->setText(QCoreApplication::translate("tela_estoque", "Excluir", nullptr));
        radioButton_codigo->setText(QCoreApplication::translate("tela_estoque", "C\303\263digo", nullptr));
        radioButton_descricao->setText(QCoreApplication::translate("tela_estoque", "Descri\303\247\303\243o", nullptr));
        btn_procurar->setText(QCoreApplication::translate("tela_estoque", "Pesquisar", nullptr));
        tab_widget->setTabText(tab_widget->indexOf(tab_gestao), QCoreApplication::translate("tela_estoque", "Gest\303\243o de Estoque", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tela_estoque: public Ui_tela_estoque {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_ESTOQUE_H
