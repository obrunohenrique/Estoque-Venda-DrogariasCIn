#include "tela_finalizar_venda.h"
#include "ui_tela_finalizar_venda.h"
#include "ui_tela_nova_venda.h"
#include <QSql>
#include <QTableWidget>

// Construtor da tela de finalizar venda que recebe um widget pai e uma referência da tela de nova venda
tela_finalizar_venda::tela_finalizar_venda(QWidget *parent, tela_nova_venda *novaVenda)
    : QDialog(parent),
    ui(new Ui::tela_finalizar_venda), novaVenda(novaVenda)
{
    // Configura a interface do usuário
    ui->setupUi(this);
    // Obtém o total da venda
    total = novaVenda->get_total();
    // Exibe o total sem desconto
    ui->label_total->setText("R$" + QString::number(total, 'f', 2).replace('.', ','));
    // Exibe o total com desconto (inicialmente igual ao total)
    ui->label_total_desc->setText("R$" + QString::number(total, 'f', 2).replace('.', ','));
    // Obtém a data atual
    data = date_selection::instance().get_data();
    qDebug() << data;
    // Define o título da janela
    this->setWindowTitle("Finalizar Venda");
}

// Destrutor que limpa a memória alocada
tela_finalizar_venda::~tela_finalizar_venda()
{
    delete ui;
}

// Função chamada quando o campo de desconto é editado
void tela_finalizar_venda::on_doubleSpinBox_editingFinished()
{
    // Obtém o valor do desconto
    float desc = ui->doubleSpinBox->text().replace(',','.').toFloat();
    // Calcula o total com desconto
    float total_desc = total-((total/100) * desc);
    // Atualiza o label com o total com desconto
    ui->label_total_desc->setText("R$" + QString::number(total_desc, 'f', 2).replace('.', ','));
}

// Função chamada quando o botão cancelar é clicado
void tela_finalizar_venda::on_btn_cancelar_clicked()
{
    // Fecha a tela
    this->close();
}

// Função chamada quando o botão fechar venda é clicado
void tela_finalizar_venda::on_btn_fechar_venda_clicked()
{
    // Confirma se o usuário quer fechar a venda
    QMessageBox::StandardButton quest = QMessageBox::question(this, "", "Gostaria de fechar a venda?", QMessageBox::Yes|QMessageBox::No);
    if (quest==QMessageBox::Yes){
        // Obtém os dados da tabela de venda
        QList<QList<QString>> tabelaVenda = novaVenda->getTabelaVenda();
        QString vendedor_id = novaVenda->id;
        QString metodo_pagamento = ui->comboBox->currentText();
        QSqlQuery query;
        
        // Para cada item da venda
        for (const QList<QString>& row : tabelaVenda) {
            qDebug() << "Código:" << row[0] << "Produto:" << row[1] << "Quantidade:" << row[2] << "Valor Unitário:" << row[3];
            QString codigo = row[0];
            QString prod_nome = row[1];
            QString qtd = row[2];
            QString valor_un = row[3];
            
            // Prepara query para inserir a venda no banco
            query.prepare("INSERT INTO tb_Vendas(nome_prod, qtd_prod, valor_un, vendedor_id, tipo_pagamento, data_venda, cod_prod) "
                          "VALUES (:prod_nome,:qtd, :valor, :vendedor_id, :metodo, :data, :cod)");

            query.bindValue(":data", data);
            qDebug() << data;
            query.bindValue(":metodo", metodo_pagamento);
            query.bindValue(":vendedor_id", vendedor_id);
            query.bindValue(":prod_nome", prod_nome);
            query.bindValue(":valor", valor_un.replace("R$ ","").toFloat());
            query.bindValue(":qtd", qtd.toInt());
            query.bindValue(":cod", codigo.toInt());
            if(!query.exec()){
                qDebug() << "query nao executada";
            }

            // Atualiza o estoque do produto
            QSqlQuery controle;
            controle.prepare("UPDATE tb_Produtos SET qtd_produto = qtd_produto - :qtd "
                             "WHERE cod_produto = :codigo");

            controle.bindValue(":qtd", qtd.toInt());
            controle.bindValue(":codigo", codigo.toInt());

            if (!controle.exec()) {
                qDebug() << "Erro ao atualizar estoque:" << controle.lastError().text();
            } else {
                qDebug() << "Query executada com sucesso!";
            }
        }
        // Emite sinal de venda fechada e fecha a tela
        emit vendaFechada();
        this->close();
    }
}

