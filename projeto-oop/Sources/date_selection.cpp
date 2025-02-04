#include "date_selection.h"
#include "ui_date_selection.h"
#include <QDebug>

// Implementação do padrão Singleton - retorna a única instância da classe
date_selection& date_selection::instance(QWidget *parent)
{
    // Cria uma instância estática que será reutilizada em todas as chamadas
    static date_selection instance(parent);
    return instance;
}

// Construtor privado da classe (usado pelo Singleton)
date_selection::date_selection(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::date_selection)
{
    // Configura a interface do usuário
    ui->setupUi(this);
    // Define o título da janela
    this->setWindowTitle("Selecione a Data");
}

// Destrutor que limpa a memória alocada
date_selection::~date_selection()
{
    delete ui;
}

// Função chamada quando o botão é clicado
void date_selection::on_pushButton_clicked()
{
    // Armazena a data selecionada no widget
    data = ui->dateEdit->text();
    qDebug() << data;
    // Fecha o diálogo com status de aceito
    this->accept();
}

// Função que retorna a data selecionada
QString date_selection::get_data() const
{
    return data;
}
