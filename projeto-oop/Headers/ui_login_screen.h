/********************************************************************************
** Form generated from reading UI file 'login_screen.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_SCREEN_H
#define UI_LOGIN_SCREEN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login_screen
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_senha;
    QLineEdit *lineEdit_senha;
    QSpacerItem *verticalSpacer;
    QLabel *label_icon;
    QPushButton *login_btn;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_usuario;
    QLineEdit *lineEdit_usuario;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Login_screen)
    {
        if (Login_screen->objectName().isEmpty())
            Login_screen->setObjectName("Login_screen");
        Login_screen->resize(768, 484);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/logo cin.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        Login_screen->setWindowIcon(icon);
        Login_screen->setAutoFillBackground(false);
        Login_screen->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color:black;"));
        centralwidget = new QWidget(Login_screen);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_senha = new QLabel(centralwidget);
        label_senha->setObjectName("label_senha");
        label_senha->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color:black;\n"
"border: 1px solid black;"));

        horizontalLayout_2->addWidget(label_senha);

        lineEdit_senha = new QLineEdit(centralwidget);
        lineEdit_senha->setObjectName("lineEdit_senha");
        lineEdit_senha->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color:black;\n"
"border: 1px solid black;"));
        lineEdit_senha->setEchoMode(QLineEdit::EchoMode::Password);

        horizontalLayout_2->addWidget(lineEdit_senha);


        gridLayout->addLayout(horizontalLayout_2, 3, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        label_icon = new QLabel(centralwidget);
        label_icon->setObjectName("label_icon");
        label_icon->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color:black;\n"
""));
        label_icon->setPixmap(QPixmap(QString::fromUtf8(":/imagens/imagens/teste.png")));
        label_icon->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_icon, 1, 1, 1, 1);

        login_btn = new QPushButton(centralwidget);
        login_btn->setObjectName("login_btn");
        login_btn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(login_btn, 4, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_usuario = new QLabel(centralwidget);
        label_usuario->setObjectName("label_usuario");
        label_usuario->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color:black;\n"
"border: 1px solid black;"));

        horizontalLayout->addWidget(label_usuario);

        lineEdit_usuario = new QLineEdit(centralwidget);
        lineEdit_usuario->setObjectName("lineEdit_usuario");
        lineEdit_usuario->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color:black;\n"
"border: 1px solid black;"));

        horizontalLayout->addWidget(lineEdit_usuario);


        gridLayout->addLayout(horizontalLayout, 2, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 5, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        Login_screen->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Login_screen);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 768, 21));
        Login_screen->setMenuBar(menubar);
        statusbar = new QStatusBar(Login_screen);
        statusbar->setObjectName("statusbar");
        Login_screen->setStatusBar(statusbar);
        QWidget::setTabOrder(lineEdit_usuario, lineEdit_senha);
        QWidget::setTabOrder(lineEdit_senha, login_btn);

        retranslateUi(Login_screen);

        QMetaObject::connectSlotsByName(Login_screen);
    } // setupUi

    void retranslateUi(QMainWindow *Login_screen)
    {
        Login_screen->setWindowTitle(QCoreApplication::translate("Login_screen", "Login_screen", nullptr));
        label_senha->setText(QCoreApplication::translate("Login_screen", "Senha   ", nullptr));
        label_icon->setText(QString());
        login_btn->setText(QCoreApplication::translate("Login_screen", "Entrar", nullptr));
        label_usuario->setText(QCoreApplication::translate("Login_screen", "Usu\303\241rio", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login_screen: public Ui_Login_screen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_SCREEN_H
