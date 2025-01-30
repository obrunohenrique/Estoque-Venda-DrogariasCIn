/********************************************************************************
** Form generated from reading UI file 'tela_funcionarios.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA_FUNCIONARIOS_H
#define UI_TELA_FUNCIONARIOS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
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

class Ui_tela_funcionarios
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_pesquisa;
    QPushButton *btnPesquisar;
    QPushButton *btnLimpar;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QLineEdit *lineEdit_usuario;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QLineEdit *lineEdit_nome;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_senha;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_10;
    QLineEdit *lineEdit_id;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QComboBox *comboBox_acesso;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *btnExcluir;
    QPushButton *btnEditar;
    QSpacerItem *verticalSpacer;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_6;
    QLineEdit *inputUsername;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_7;
    QLineEdit *inputNome;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_8;
    QLineEdit *inputSenha;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_9;
    QVBoxLayout *verticalLayout_8;
    QRadioButton *radioFuncionario;
    QRadioButton *radioAdm;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *btn_cancelar;
    QPushButton *btn_cadastrar;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *tela_funcionarios)
    {
        if (tela_funcionarios->objectName().isEmpty())
            tela_funcionarios->setObjectName("tela_funcionarios");
        tela_funcionarios->resize(793, 411);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/logo cin.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        tela_funcionarios->setWindowIcon(icon);
        tela_funcionarios->setStyleSheet(QString::fromUtf8("background-color:rgb(230, 230, 230);\n"
"color:black;"));
        gridLayout = new QGridLayout(tela_funcionarios);
        gridLayout->setObjectName("gridLayout");
        tabWidget = new QTabWidget(tela_funcionarios);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setStyleSheet(QString::fromUtf8("QTabWidget::pane {\n"
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
        tab = new QWidget();
        tab->setObjectName("tab");
        tab->setStyleSheet(QString::fromUtf8(""));
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 10, 471, 321));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        lineEdit_pesquisa = new QLineEdit(layoutWidget);
        lineEdit_pesquisa->setObjectName("lineEdit_pesquisa");
        lineEdit_pesquisa->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color:black;\n"
"border: 1px solid black;"));

        horizontalLayout->addWidget(lineEdit_pesquisa);

        btnPesquisar = new QPushButton(layoutWidget);
        btnPesquisar->setObjectName("btnPesquisar");
        btnPesquisar->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout->addWidget(btnPesquisar);

        btnLimpar = new QPushButton(layoutWidget);
        btnLimpar->setObjectName("btnLimpar");
        btnLimpar->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout->addWidget(btnLimpar);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);

        tableWidget = new QTableWidget(layoutWidget);
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

        verticalLayout_3->addWidget(tableWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");

        verticalLayout_3->addLayout(horizontalLayout_2);

        layoutWidget1 = new QWidget(tab);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(480, 10, 261, 216));
        verticalLayout_5 = new QVBoxLayout(layoutWidget1);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label = new QLabel(layoutWidget1);
        label->setObjectName("label");

        horizontalLayout_6->addWidget(label);

        lineEdit_usuario = new QLineEdit(layoutWidget1);
        lineEdit_usuario->setObjectName("lineEdit_usuario");
        lineEdit_usuario->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color:black;\n"
"border: 1px solid black;"));
        lineEdit_usuario->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_6->addWidget(lineEdit_usuario);


        verticalLayout_4->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName("label_3");

        horizontalLayout_5->addWidget(label_3);

        lineEdit_nome = new QLineEdit(layoutWidget1);
        lineEdit_nome->setObjectName("lineEdit_nome");
        lineEdit_nome->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color:black;\n"
"border: 1px solid black;"));
        lineEdit_nome->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_5->addWidget(lineEdit_nome);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        lineEdit_senha = new QLineEdit(layoutWidget1);
        lineEdit_senha->setObjectName("lineEdit_senha");
        lineEdit_senha->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color:black;\n"
"border: 1px solid black;"));
        lineEdit_senha->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_4->addWidget(lineEdit_senha);


        verticalLayout_4->addLayout(horizontalLayout_4);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_10 = new QLabel(layoutWidget1);
        label_10->setObjectName("label_10");

        horizontalLayout_7->addWidget(label_10);

        lineEdit_id = new QLineEdit(layoutWidget1);
        lineEdit_id->setObjectName("lineEdit_id");
        lineEdit_id->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color:black;\n"
"border: 1px solid black;"));
        lineEdit_id->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_7->addWidget(lineEdit_id);


        verticalLayout_4->addLayout(horizontalLayout_7);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName("label_5");

        horizontalLayout_3->addWidget(label_5);

        comboBox_acesso = new QComboBox(layoutWidget1);
        comboBox_acesso->addItem(QString());
        comboBox_acesso->addItem(QString());
        comboBox_acesso->setObjectName("comboBox_acesso");
        comboBox_acesso->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color:black;"));

        horizontalLayout_3->addWidget(comboBox_acesso);


        verticalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout_5->addLayout(verticalLayout_4);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        btnExcluir = new QPushButton(layoutWidget1);
        btnExcluir->setObjectName("btnExcluir");
        btnExcluir->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_8->addWidget(btnExcluir);

        btnEditar = new QPushButton(layoutWidget1);
        btnEditar->setObjectName("btnEditar");
        btnEditar->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_8->addWidget(btnEditar);


        verticalLayout_5->addLayout(horizontalLayout_8);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        gridLayout_3 = new QGridLayout(tab_2);
        gridLayout_3->setObjectName("gridLayout_3");
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_6 = new QLabel(tab_2);
        label_6->setObjectName("label_6");

        horizontalLayout_9->addWidget(label_6);

        inputUsername = new QLineEdit(tab_2);
        inputUsername->setObjectName("inputUsername");
        inputUsername->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color:black;\n"
"border: 1px solid black;"));

        horizontalLayout_9->addWidget(inputUsername);


        verticalLayout_7->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_7 = new QLabel(tab_2);
        label_7->setObjectName("label_7");

        horizontalLayout_10->addWidget(label_7);

        inputNome = new QLineEdit(tab_2);
        inputNome->setObjectName("inputNome");
        inputNome->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color:black;\n"
"border: 1px solid black;"));

        horizontalLayout_10->addWidget(inputNome);


        verticalLayout_7->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_8 = new QLabel(tab_2);
        label_8->setObjectName("label_8");

        horizontalLayout_11->addWidget(label_8);

        inputSenha = new QLineEdit(tab_2);
        inputSenha->setObjectName("inputSenha");
        inputSenha->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color:black;\n"
"border: 1px solid black;"));
        inputSenha->setEchoMode(QLineEdit::EchoMode::Password);

        horizontalLayout_11->addWidget(inputSenha);


        verticalLayout_7->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        label_9 = new QLabel(tab_2);
        label_9->setObjectName("label_9");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);

        horizontalLayout_12->addWidget(label_9);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        radioFuncionario = new QRadioButton(tab_2);
        radioFuncionario->setObjectName("radioFuncionario");
        radioFuncionario->setStyleSheet(QString::fromUtf8("QRadioButton::indicator {\n"
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

        verticalLayout_8->addWidget(radioFuncionario);

        radioAdm = new QRadioButton(tab_2);
        radioAdm->setObjectName("radioAdm");
        radioAdm->setStyleSheet(QString::fromUtf8("QRadioButton::indicator {\n"
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

        verticalLayout_8->addWidget(radioAdm);


        horizontalLayout_12->addLayout(verticalLayout_8);


        verticalLayout_7->addLayout(horizontalLayout_12);


        verticalLayout_6->addLayout(verticalLayout_7);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        btn_cancelar = new QPushButton(tab_2);
        btn_cancelar->setObjectName("btn_cancelar");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btn_cancelar->sizePolicy().hasHeightForWidth());
        btn_cancelar->setSizePolicy(sizePolicy1);
        btn_cancelar->setMinimumSize(QSize(0, 44));
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

        horizontalLayout_13->addWidget(btn_cancelar);

        btn_cadastrar = new QPushButton(tab_2);
        btn_cadastrar->setObjectName("btn_cadastrar");
        btn_cadastrar->setMinimumSize(QSize(0, 44));
        btn_cadastrar->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_13->addWidget(btn_cadastrar);


        verticalLayout_6->addLayout(horizontalLayout_13);


        verticalLayout_9->addLayout(verticalLayout_6);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_2);


        gridLayout_3->addLayout(verticalLayout_9, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(tela_funcionarios);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(tela_funcionarios);
    } // setupUi

    void retranslateUi(QDialog *tela_funcionarios)
    {
        tela_funcionarios->setWindowTitle(QCoreApplication::translate("tela_funcionarios", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("tela_funcionarios", "Pesquisar:", nullptr));
        btnPesquisar->setText(QCoreApplication::translate("tela_funcionarios", "Pesquisar", nullptr));
        btnLimpar->setText(QCoreApplication::translate("tela_funcionarios", "Limpar", nullptr));
        label->setText(QCoreApplication::translate("tela_funcionarios", "  Usu\303\241rio", nullptr));
        label_3->setText(QCoreApplication::translate("tela_funcionarios", "  Nome", nullptr));
        label_4->setText(QCoreApplication::translate("tela_funcionarios", "  Senha", nullptr));
        label_10->setText(QCoreApplication::translate("tela_funcionarios", "  ID", nullptr));
        label_5->setText(QCoreApplication::translate("tela_funcionarios", "Tipo de Acesso", nullptr));
        comboBox_acesso->setItemText(0, QCoreApplication::translate("tela_funcionarios", "A", nullptr));
        comboBox_acesso->setItemText(1, QCoreApplication::translate("tela_funcionarios", "B", nullptr));

        btnExcluir->setText(QCoreApplication::translate("tela_funcionarios", "Excluir Usu\303\241rio", nullptr));
        btnEditar->setText(QCoreApplication::translate("tela_funcionarios", "Editar Usu\303\241rio", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("tela_funcionarios", "Funcion\303\241rios", nullptr));
        label_6->setText(QCoreApplication::translate("tela_funcionarios", "Username", nullptr));
        label_7->setText(QCoreApplication::translate("tela_funcionarios", "Nome", nullptr));
        label_8->setText(QCoreApplication::translate("tela_funcionarios", "Senha", nullptr));
        label_9->setText(QCoreApplication::translate("tela_funcionarios", "Tipo de acesso", nullptr));
        radioFuncionario->setText(QCoreApplication::translate("tela_funcionarios", "Funcion\303\241rio", nullptr));
        radioAdm->setText(QCoreApplication::translate("tela_funcionarios", "Administrador", nullptr));
        btn_cancelar->setText(QCoreApplication::translate("tela_funcionarios", "Cancelar", nullptr));
        btn_cadastrar->setText(QCoreApplication::translate("tela_funcionarios", "Cadastrar Us\303\272ario", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("tela_funcionarios", "Novo Funcion\303\241rio", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tela_funcionarios: public Ui_tela_funcionarios {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_FUNCIONARIOS_H
