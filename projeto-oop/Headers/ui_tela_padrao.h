/********************************************************************************
** Form generated from reading UI file 'tela_padrao.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA_PADRAO_H
#define UI_TELA_PADRAO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tela_padrao
{
public:
    QAction *actionEstoque;
    QAction *actionVendas;
    QAction *actionFuncionarios;
    QAction *actionSair;
    QAction *actionSOBRE;
    QAction *actionAbrir_Caixa;
    QAction *actionFechar_caixa;
    QAction *actionNova_venda;
    QAction *actionHistorico_de_vendas;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *acesso_in;
    QLabel *Acesso_str;
    QSpacerItem *verticalSpacer;
    QLabel *usuario_in;
    QLabel *usuario_str;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QLabel *label_data;
    QMenuBar *menubar;
    QMenu *menuGest_o;
    QMenu *menuSistema;
    QMenu *menuNova_venda;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *tela_padrao)
    {
        if (tela_padrao->objectName().isEmpty())
            tela_padrao->setObjectName("tela_padrao");
        tela_padrao->resize(800, 600);
        QFont font;
        font.setBold(true);
        tela_padrao->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/logo cin.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        tela_padrao->setWindowIcon(icon);
        tela_padrao->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color:black;\n"
""));
        actionEstoque = new QAction(tela_padrao);
        actionEstoque->setObjectName("actionEstoque");
        actionEstoque->setCheckable(false);
        actionVendas = new QAction(tela_padrao);
        actionVendas->setObjectName("actionVendas");
        actionFuncionarios = new QAction(tela_padrao);
        actionFuncionarios->setObjectName("actionFuncionarios");
        actionSair = new QAction(tela_padrao);
        actionSair->setObjectName("actionSair");
        actionSOBRE = new QAction(tela_padrao);
        actionSOBRE->setObjectName("actionSOBRE");
        actionAbrir_Caixa = new QAction(tela_padrao);
        actionAbrir_Caixa->setObjectName("actionAbrir_Caixa");
        actionFechar_caixa = new QAction(tela_padrao);
        actionFechar_caixa->setObjectName("actionFechar_caixa");
        actionNova_venda = new QAction(tela_padrao);
        actionNova_venda->setObjectName("actionNova_venda");
        actionHistorico_de_vendas = new QAction(tela_padrao);
        actionHistorico_de_vendas->setObjectName("actionHistorico_de_vendas");
        centralwidget = new QWidget(tela_padrao);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        acesso_in = new QLabel(centralwidget);
        acesso_in->setObjectName("acesso_in");
        acesso_in->setStyleSheet(QString::fromUtf8("color:rgb(81, 81, 81)"));

        gridLayout->addWidget(acesso_in, 1, 2, 1, 1);

        Acesso_str = new QLabel(centralwidget);
        Acesso_str->setObjectName("Acesso_str");
        QFont font1;
        font1.setBold(false);
        Acesso_str->setFont(font1);
        Acesso_str->setStyleSheet(QString::fromUtf8("color:rgb(81, 81, 81)"));

        gridLayout->addWidget(Acesso_str, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 1, 1, 1);

        usuario_in = new QLabel(centralwidget);
        usuario_in->setObjectName("usuario_in");
        usuario_in->setStyleSheet(QString::fromUtf8("color:rgb(81, 81, 81)"));

        gridLayout->addWidget(usuario_in, 2, 2, 1, 1);

        usuario_str = new QLabel(centralwidget);
        usuario_str->setObjectName("usuario_str");
        usuario_str->setFont(font1);
        usuario_str->setStyleSheet(QString::fromUtf8("color:rgb(81, 81, 81)"));

        gridLayout->addWidget(usuario_str, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 0, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 3, 1, 1, 1);

        label_data = new QLabel(centralwidget);
        label_data->setObjectName("label_data");

        gridLayout->addWidget(label_data, 3, 2, 1, 1);

        tela_padrao->setCentralWidget(centralwidget);
        menubar = new QMenuBar(tela_padrao);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 27));
        menubar->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color:rgb(255, 150, 150);\n"
"border: 1px solid black;\n"
"padding: 2px 10px;\n"
"\n"
"\n"
""));
        menuGest_o = new QMenu(menubar);
        menuGest_o->setObjectName("menuGest_o");
        menuGest_o->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"	background-color:rgb(255, 150, 150);\n"
"    border: 1px solid black;\n"
"    border-radius: 5px;\n"
"    padding: 2px 10px;\n"
"\n"
"\n"
""));
        menuSistema = new QMenu(menubar);
        menuSistema->setObjectName("menuSistema");
        menuSistema->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"	background-color:rgb(255, 150, 150);\n"
"    border: 1px solid black;\n"
"    border-radius: 5px;\n"
"    padding: 2px 10px;\n"
"\n"
"\n"
""));
        menuNova_venda = new QMenu(menubar);
        menuNova_venda->setObjectName("menuNova_venda");
        menuNova_venda->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"	background-color:rgb(255, 150, 150);\n"
"    border: 1px solid black;\n"
"    border-radius: 5px;\n"
"    padding: 2px 10px;\n"
"\n"
"\n"
""));
        tela_padrao->setMenuBar(menubar);
        statusbar = new QStatusBar(tela_padrao);
        statusbar->setObjectName("statusbar");
        statusbar->setStyleSheet(QString::fromUtf8(""));
        tela_padrao->setStatusBar(statusbar);

        menubar->addAction(menuGest_o->menuAction());
        menubar->addAction(menuNova_venda->menuAction());
        menubar->addAction(menuSistema->menuAction());
        menuGest_o->addAction(actionEstoque);
        menuGest_o->addAction(actionFuncionarios);
        menuSistema->addAction(actionSair);
        menuSistema->addAction(actionSOBRE);
        menuNova_venda->addAction(actionNova_venda);
        menuNova_venda->addAction(actionHistorico_de_vendas);

        retranslateUi(tela_padrao);

        QMetaObject::connectSlotsByName(tela_padrao);
    } // setupUi

    void retranslateUi(QMainWindow *tela_padrao)
    {
        tela_padrao->setWindowTitle(QCoreApplication::translate("tela_padrao", "MainWindow", nullptr));
        actionEstoque->setText(QCoreApplication::translate("tela_padrao", "Estoque", nullptr));
        actionVendas->setText(QCoreApplication::translate("tela_padrao", "Vendas", nullptr));
        actionFuncionarios->setText(QCoreApplication::translate("tela_padrao", "Funcionarios", nullptr));
        actionSair->setText(QCoreApplication::translate("tela_padrao", "Sair", nullptr));
        actionSOBRE->setText(QCoreApplication::translate("tela_padrao", "SOBRE", nullptr));
        actionAbrir_Caixa->setText(QCoreApplication::translate("tela_padrao", "Abrir Caixa", nullptr));
        actionFechar_caixa->setText(QCoreApplication::translate("tela_padrao", "Fechar caixa", nullptr));
        actionNova_venda->setText(QCoreApplication::translate("tela_padrao", "Nova venda", nullptr));
        actionHistorico_de_vendas->setText(QCoreApplication::translate("tela_padrao", "Historico de vendas", nullptr));
        acesso_in->setText(QCoreApplication::translate("tela_padrao", "aaaaaaaaaaaaaaaa", nullptr));
        Acesso_str->setText(QCoreApplication::translate("tela_padrao", "Acesso:", nullptr));
        usuario_in->setText(QCoreApplication::translate("tela_padrao", "aaaaaaaaaaaaaaaa", nullptr));
        usuario_str->setText(QCoreApplication::translate("tela_padrao", "Usu\303\241rio:", nullptr));
        label->setText(QCoreApplication::translate("tela_padrao", "Data:", nullptr));
        label_data->setText(QCoreApplication::translate("tela_padrao", "aaaaaaaaaaaaaa", nullptr));
        menuGest_o->setTitle(QCoreApplication::translate("tela_padrao", "Gest\303\243o", nullptr));
        menuSistema->setTitle(QCoreApplication::translate("tela_padrao", "Sistema", nullptr));
        menuNova_venda->setTitle(QCoreApplication::translate("tela_padrao", "Venda", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tela_padrao: public Ui_tela_padrao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_PADRAO_H
