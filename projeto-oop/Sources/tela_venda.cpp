#include "tela_venda.h"
#include "ui_tela_venda.h"
#include <QDebug>
#include <QMessageBox>

// Construtor da tela de venda que recebe um widget pai
tela_venda::tela_venda(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::tela_venda)
{
    // Configura a interface do usuário
    ui->setupUi(this);
    // Define tamanho mínimo e máximo da janela
    this->setMinimumSize(511, 394);
    this->setMaximumSize(511, 394);

    // Obtém o código do produto do campo de texto
    prod_id = ui->lineEdit_codigo->text();
    // Abre conexão com o banco de dados
    con.abrir_conexao();
    // Define o foco inicial para o campo de funcionário
    ui->lineEdit_funcionario->setFocus();
}

// Destrutor que limpa a memória alocada
tela_venda::~tela_venda()
{
    delete ui;
}

// Função chamada quando Enter é pressionado no campo de funcionário
void tela_venda::on_lineEdit_funcionario_returnPressed()
{
    // Obtém o ID do funcionário
    id = ui->lineEdit_funcionario->text();
    QSqlQuery query;
    // Prepara query para buscar dados do funcionário
    query.prepare("SELECT * FROM tb_Usuarios WHERE ID = :id");
    query.bindValue(":id", id);
    if(query.exec() && query.first()){
        // Se encontrou o funcionário, armazena seus dados
        if (query.value(1).toString() != ""){
            acesso = query.value(2).toString();
            nome = query.value(3).toString();
            id = query.value(4).toString();
            // Exibe o nome do funcionário
            ui->label_funcionario->setText(nome);
            ui->lineEdit_funcionario->setFocus();
        }
    } else {
        // Exibe mensagem de erro se não encontrar o funcionário
        QMessageBox::warning(this, "ERRO", "Não existe funcionário com este id");
        ui->lineEdit_funcionario->setFocus();
        ui->lineEdit_funcionario->clear();
    }
    // Move o foco para o campo de código
    ui->lineEdit_codigo->setFocus();
}

// Função chamada quando Enter é pressionado no campo de código
void tela_venda::on_lineEdit_codigo_returnPressed()
{
    prod_id = ui->lineEdit_codigo->text();

    QSqlQuery query;
    // Prepara query para buscar dados do produto
    query.prepare("SELECT * FROM tb_Produtos WHERE cod_produto = :prod_id");
    query.bindValue(":prod_id", prod_id);
    if(query.exec() && query.first()){
        // Se encontrou o produto, armazena seus dados
        if (query.value(1).toString() != ""){
            prod_nome = query.value(1).toString();
            prod_id = query.value(0).toString();
            prod_preco = query.value(2).toString();
        }
        // Exibe o nome do produto
        ui->label_produto->setText(prod_nome);
    }else{
        // Exibe mensagem de erro se não encontrar o produto
        QMessageBox::warning(this, "ERRO", "Código de Produto inválido");
        ui->lineEdit_codigo->setFocus();
    }
    // Move o foco para o campo de quantidade
    ui->lineEdit_qtd->setFocus();
    ui->lineEdit_qtd->setText("1");
}

// Função chamada quando Enter é pressionado no campo de quantidade
void tela_venda::on_lineEdit_qtd_returnPressed()
{
    // Preenche o valor unitário e move o foco
    ui->lineEdit_valor_un->setText("R$ "+prod_preco);
    ui->lineEdit_valor_un->setFocus();
}

// Função chamada quando Enter é pressionado no campo de valor unitário
void tela_venda::on_lineEdit_valor_un_returnPressed()
{
    // Obtém o valor unitário e quantidade
    QString valor_un = ui->lineEdit_valor_un->text();
    valor_un.remove("R$ ");
    valor_un.toInt();
    QString qtd_venda = ui->lineEdit_qtd->text();
    qtd_venda.toInt();
    int row_counter = 0;
    
    // Configura a tabela
    ui->tableWidget->setColumnWidth(0,75);
    ui->tableWidget->setColumnWidth(1,115);
    QStringList cabecalho={"Código","Produto", "Quantidade", "Valor Unitário"};
    ui->tableWidget->setHorizontalHeaderLabels(cabecalho);

    // Adiciona os dados na tabela
    ui->tableWidget->setItem(row_counter, 0, new QTableWidgetItem (prod_id));
    ui->tableWidget->setItem(row_counter, 0, new QTableWidgetItem (prod_nome));
    ui->tableWidget->setItem(row_counter, 0, new QTableWidgetItem (qtd_venda));
    ui->tableWidget->setItem(row_counter, 0, new QTableWidgetItem (valor_un));
    row_counter++;
}
