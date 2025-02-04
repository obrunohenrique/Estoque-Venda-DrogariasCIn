#include "tela_nova_venda.h"
#include "ui_tela_nova_venda.h"
#include "tela_finalizar_venda.h"
#include "tela_pesquisar_produto.h"

// Construtor da tela de nova venda que recebe um widget pai
tela_nova_venda::tela_nova_venda(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::tela_nova_venda)
{
    // Configura a interface do usuário
    ui->setupUi(this);
    // Define tamanho mínimo e máximo da janela
    this->setMinimumSize(511, 394);
    this->setMaximumSize(511, 394);

    // Obtém o código do produto
    prod_id = ui->lineEdit_codigo->text();
    // Abre conexão com o banco de dados
    con.abrir_conexao();
    // Define o foco inicial para o campo de funcionário
    ui->lineEdit_funcionario->setFocus();
    
    // Configura a tabela se ainda não tiver colunas
    if (ui->tableWidget->columnCount() == 0) {
        QStringList cabecalho = {"Código", "Produto", "Quantidade", "Valor Unitário"};
        ui->tableWidget->setColumnCount(4);
        ui->tableWidget->verticalHeader()->setDefaultSectionSize(30);
        ui->tableWidget->setHorizontalHeaderLabels(cabecalho);
    }
    // Atualiza o label do total da venda
    ui->label_total->setText("Total: R$" + QString::number(total_venda, 'f', 2).replace('.', ','));
    // Define o título da janela
    this->setWindowTitle("Nova Venda");
}

// Destrutor que fecha a conexão com o banco e limpa a memória
tela_nova_venda::~tela_nova_venda()
{
    delete ui;
    con.fechar_conexao();
}

// Função chamada quando Enter é pressionado no campo de funcionário
void tela_nova_venda::on_lineEdit_funcionario_returnPressed()
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
            check();
            ui->lineEdit_codigo->setFocus();
        }
    } else {
        // Exibe mensagem de erro se não encontrar o funcionário
        QMessageBox::warning(this, "ERRO", "Não existe funcionário com este id");
        ui->lineEdit_funcionario->setFocus();
        ui->lineEdit_funcionario->clear();
    }
}

// Função chamada quando Enter é pressionado no campo de código
void tela_nova_venda::on_lineEdit_codigo_returnPressed()
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
        ui->lineEdit_qtd->setFocus();
        ui->lineEdit_qtd->setText("1");
        check();
    }else{
        // Se não encontrou por código, tenta buscar por nome
        int teste = ui->lineEdit_codigo->text().toInt();
        if(teste == 0){
            nome_pesquisar = ui->lineEdit_codigo->text();
            tela_pesquisar_produto *tela = new tela_pesquisar_produto(this, this);
            tela->exec();
            if(nome_selected != ""){
                QSqlQuery query;
                query.prepare("select * from tb_Produtos where :nome = nome_produto");
                query.bindValue(":nome", nome_selected);
                if(query.exec() && query.first()){
                    if (query.value(1).toString() != ""){
                        prod_nome = query.value(1).toString();
                        prod_id = query.value(0).toString();
                        prod_preco = query.value(2).toString();
                    }
                    ui->label_produto->setText(prod_nome);
                    ui->lineEdit_codigo->setText(prod_id);
                    ui->lineEdit_qtd->setFocus();
                    ui->lineEdit_qtd->setText("1");
                    check();
                }
            }
        }else{
            // Exibe mensagem de erro se não encontrar o produto
            QMessageBox::warning(this, "ERRO", "Código de Produto inválido");
            ui->lineEdit_codigo->clear();
            ui->lineEdit_codigo->setFocus();
        }
    }
}

void tela_nova_venda::on_lineEdit_qtd_returnPressed()
{
    int qtd_venda_int = ui->lineEdit_qtd->text().toInt();
    if(qtd_venda_int <= 0 or qtd_venda_int > 99){
        QMessageBox::warning(this,"","Quantidade Invalida");
        ui->lineEdit_qtd->clear();
        ui->lineEdit_qtd->setFocus();
    }else{
        ui->lineEdit_valor_un->setText("R$ "+prod_preco);
        ui->lineEdit_valor_un->setFocus();
    }
}

void tela_nova_venda::on_lineEdit_valor_un_returnPressed()
{
    QString valor_un = ui->lineEdit_valor_un->text();
    valor_un.remove("R$ "); // Remove currency prefix
    float valor_un_float = valor_un.toFloat();
    int qtd_venda_int = ui->lineEdit_qtd->text().toInt();

    if(valor_un == "" or valor_un_float <= 0){
        QMessageBox::warning(this,"","Preço inválido");
    }else{
        int row_counter = ui->tableWidget->rowCount();
        ui->tableWidget->insertRow(row_counter);
        ui->tableWidget->setItem(row_counter, 0, new QTableWidgetItem(prod_id));
        ui->tableWidget->setItem(row_counter, 1, new QTableWidgetItem(prod_nome));
        ui->tableWidget->setItem(row_counter, 2, new QTableWidgetItem(QString::number(qtd_venda_int)));
        ui->tableWidget->setItem(row_counter, 3, new QTableWidgetItem("R$ " + QString::number(valor_un_float)));

        valor = qtd_venda_int * valor_un_float;
        ui->lineEdit_codigo->clear();
        ui->lineEdit_qtd->clear();
        ui->lineEdit_valor_un->clear();
        ui->label_produto->clear();
        ui->lineEdit_codigo->setFocus();
        total_venda += valor;
        check();
        ui->label_total->setText("Total: R$" + QString::number(total_venda, 'f', 2).replace('.', ','));
    }
}

void tela_nova_venda::check()
{
    if(ui->lineEdit_codigo->text() == ""){
        prod_id.clear();
        prod_nome.clear();
        prod_preco.clear();
    }
}

void tela_nova_venda::on_lineEdit_delete_returnPressed()
{
    ui->btn_delete->click();
    ui->lineEdit_codigo->setFocus();
}

void tela_nova_venda::on_btn_delete_clicked()
{
    int current_row = ui->lineEdit_delete->text().toInt() - 1;

    if (current_row < 0 || current_row >= ui->tableWidget->rowCount()) {
        QMessageBox::warning(this, "Erro", "Produto selecionado não existe");
        return;
    }
    QTableWidgetItem *item = ui->tableWidget->item(current_row, 3);
    if (item) {
        total_venda -= item->text().replace("R$ ","").toFloat();
    } else {
        QMessageBox::warning(this, "Erro", "Valor inválido na célula");
    }
    ui->tableWidget->removeRow(current_row);
    ui->label_total->setText("Total: R$" + QString::number(total_venda, 'f', 2).replace('.', ','));
    ui->tableWidget->clearSelection();
    ui->lineEdit_delete->clear();
    ui->lineEdit_codigo->setFocus();
}

void tela_nova_venda::on_btn_limpar_clicked()
{
    limpar_campos();
}

void tela_nova_venda::setupTelaFinalizarVenda(tela_finalizar_venda *telaFecharVenda)
{
    connect(telaFecharVenda, &tela_finalizar_venda::vendaFechada, this, &tela_nova_venda::limpar_campos);
}

void tela_nova_venda::limpar_campos()
{
    while (ui->tableWidget->rowCount() > 0) {
        ui->tableWidget->removeRow(0);
    }
    total_venda = 0;
    ui->label_total->setText("Total: R$" + QString::number(total_venda, 'f', 2).replace('.', ','));
    ui->lineEdit_codigo->setFocus();
    ui->lineEdit_codigo->clear();
    ui->lineEdit_qtd->clear();
    ui->lineEdit_valor_un->clear();
    ui->label_produto->clear();
}

QList<QList<QString>> tela_nova_venda::getTabelaVenda()
{
    QList<QList<QString>> tabelaDados;

    for (int row = 0; row < ui->tableWidget->rowCount(); ++row) {
        QList<QString> rowData;
        rowData.append(ui->tableWidget->item(row, 0)->text());
        rowData.append(ui->tableWidget->item(row, 1)->text());
        rowData.append(ui->tableWidget->item(row, 2)->text());
        rowData.append(ui->tableWidget->item(row, 3)->text());
        tabelaDados.append(rowData);
    }

    return tabelaDados;
}

void tela_nova_venda::on_btn_confirmar_clicked()
{
    if (ui->tableWidget->rowCount() == 0){
        QMessageBox::warning(this,"","Não há itens a serem vendidos.");
        return;
    }
    qDebug() << total_venda;
    tela_finalizar_venda *finalizarVenda = new tela_finalizar_venda(this, this);
    setupTelaFinalizarVenda(finalizarVenda);
    finalizarVenda->exec();
}

float tela_nova_venda::get_total()
{
    return total_venda;
}

