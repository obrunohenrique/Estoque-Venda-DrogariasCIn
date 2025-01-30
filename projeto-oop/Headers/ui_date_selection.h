/********************************************************************************
** Form generated from reading UI file 'date_selection.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATE_SELECTION_H
#define UI_DATE_SELECTION_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_date_selection
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QDateEdit *dateEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *date_selection)
    {
        if (date_selection->objectName().isEmpty())
            date_selection->setObjectName("date_selection");
        date_selection->resize(237, 67);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/logo cin.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        date_selection->setWindowIcon(icon);
        date_selection->setStyleSheet(QString::fromUtf8("background-color:rgb(230, 230, 230);\n"
"color:black;"));
        gridLayout = new QGridLayout(date_selection);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(date_selection);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        dateEdit = new QDateEdit(date_selection);
        dateEdit->setObjectName("dateEdit");

        verticalLayout->addWidget(dateEdit);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        pushButton = new QPushButton(date_selection);
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

        gridLayout->addWidget(pushButton, 0, 1, 1, 1);


        retranslateUi(date_selection);

        QMetaObject::connectSlotsByName(date_selection);
    } // setupUi

    void retranslateUi(QDialog *date_selection)
    {
        date_selection->setWindowTitle(QCoreApplication::translate("date_selection", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("date_selection", "Selecione a data de hoje:", nullptr));
        pushButton->setText(QCoreApplication::translate("date_selection", "Confirmar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class date_selection: public Ui_date_selection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATE_SELECTION_H
