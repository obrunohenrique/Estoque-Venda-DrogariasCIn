#include "date_selection.h"
#include "ui_date_selection.h"
#include <QDebug>

date_selection& date_selection::instance(QWidget *parent)
{
    static date_selection instance(parent);
    return instance;
}

date_selection::date_selection(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::date_selection)
{
    ui->setupUi(this);
    this->setWindowTitle("Selecione a Data");
}

date_selection::~date_selection()
{
    delete ui;
}

void date_selection::on_pushButton_clicked()
{
    data = ui->dateEdit->text();
    qDebug() << data;
    this->accept();
}

QString date_selection::get_data() const
{
    return data;
}
