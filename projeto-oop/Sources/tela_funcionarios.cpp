#include "tela_funcionarios.h"
#include "ui_tela_funcionarios.h"

// Construtor da tela de funcionários que recebe um widget pai
tela_funcionarios::tela_funcionarios(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::tela_funcionarios)
{
    // Configura a interface do usuário
    ui->setupUi(this);
    // Abre conexão com o banco de dados
    con.abrir_conexao();
    // Atualiza a tabela de funcionários
    renovar_table();
    // Define o título da janela
    this->setWindowTitle("Funcionários");
}

// Destrutor que fecha a conexão com o banco e limpa a memória
tela_funcionarios::~tela_funcionarios()
{
    con.fechar_conexao();
    delete ui;
}

// Função que atualiza a tabela com todos os funcionários
void tela_funcionarios::renovar_table()
{
    // Remove linhas existentes
    remove_rows(ui->tableWidget);
    int row_counter = 0;
    QSqlQuery query;
    // Prepara query para selecionar todos os funcionários ordenados por ID
    query.prepare("SELECT usuario, senha, acesso, nome, ID FROM tb_Usuarios ORDER BY ID");
    if (query.exec()) {
        // Define o número de colunas da tabela
        ui->tableWidget->setColumnCount(5);
        while (query.next()) {
            // Insere uma nova linha e preenche com os dados do funcionário
            ui->tableWidget->insertRow(row_counter);
            ui->tableWidget->setItem(row_counter, 0, new QTableWidgetItem(query.value(4).toString()));
            ui->tableWidget->setItem(row_counter, 1, new QTableWidgetItem(query.value(3).toString()));
            ui->tableWidget->setItem(row_counter, 2, new QTableWidgetItem(query.value(0).toString()));
            ui->tableWidget->setItem(row_counter, 3, new QTableWidgetItem(query.value(1).toString()));
            ui->tableWidget->setItem(row_counter, 4, new QTableWidgetItem(query.value(2).toString()));

            // Centraliza o texto em todas as células
            for (int col = 0; col < 5; col++) {
                QTableWidgetItem *item = ui->tableWidget->item(row_counter, col);
                if (item) {
                    item->setTextAlignment(Qt::AlignCenter);
                }
            }

            // Define a altura da linha
            ui->tableWidget->setRowHeight(row_counter, 20);
            row_counter++;
        }
        // Configura a largura da coluna de ID
        ui->tableWidget->setColumnWidth(0,67);
        // Define os cabeçalhos das colunas
        QStringList cabecalho={"ID","Nome","Username", "Senha", "Tipo de Acesso"};

        ui->tableWidget->setHorizontalHeaderLabels(cabecalho);
        // Desabilita edição das células
        ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        // Permite seleção apenas de linhas inteiras
        ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        // Oculta os números das linhas
        ui->tableWidget->verticalHeader()->setVisible(false);
    }
    // Limpa os campos de edição
    ui->lineEdit_usuario->clear();
    ui->lineEdit_nome->clear();
    ui->lineEdit_senha->clear();
    ui->lineEdit_id->clear();
    ui->comboBox_acesso->clearEditText();
}

// Função chamada quando o botão cadastrar é clicado
void tela_funcionarios::on_btn_cadastrar_clicked()
{
    // Obtém os dados do novo funcionário
    QString nome = ui->inputNome->text();
    QString username = ui->inputUsername->text();
    QString senha = ui->inputSenha->text();
    QString acesso = "";
    // Define o nível de acesso baseado no radio button selecionado
    if(ui->radioAdm->isChecked()) {
        acesso = "A";
    } else {
        acesso = "B";
    }

    // Prepara query para inserir novo funcionário
    QSqlQuery query;
    query.prepare("insert into tb_Usuarios (usuario, senha, acesso, nome) values"
                  "('"+username+"','"+senha+"', '"+acesso+"', '"+nome+"')");

    if(query.exec()) {
        // Exibe mensagem de sucesso e limpa os campos
        QMessageBox::information(this, "", "Usuário cadastrado com sucesso!");
        ui->inputUsername->clear();
        ui->inputNome->clear();
        ui->inputSenha->clear();
        ui->inputUsername->setFocus();
    } else {
        qDebug() << "Erro ao inserir registro";
    }
}

void tela_funcionarios::on_btn_cancelar_clicked()
{
    ui->inputNome->clear();
    ui->inputUsername->clear();
    ui->inputSenha->clear();
}

void tela_funcionarios::on_tabWidget_currentChanged(int index)
{
    renovar_table();
}

void tela_funcionarios::remove_rows(QTableWidget *tw)
{
    qDebug() << "Iniciando remoção de linhas. Total inicial:" << tw->rowCount();

    tw->blockSignals(true);

    while (tw->rowCount() > 0) {
        tw->removeRow(0);
        qDebug() << "Linha removida. Linhas restantes:" << tw->rowCount();
    }

    tw->blockSignals(false);

    if (tw->rowCount() > 0) {
        qWarning() << "Erro: Linhas restantes após a remoção. Total final:" << tw->rowCount();
    }
    qDebug() << "Remoção de linhas concluída.";
}

// Função chamada quando uma linha da tabela é selecionada
void tela_funcionarios::on_tableWidget_itemSelectionChanged()
{
    // Obtém a linha selecionada
    int currentRow = ui->tableWidget->currentRow();
    if (currentRow < 0) {
        QMessageBox::warning(this, "Erro", "Nenhuma linha foi selecionada.");
        return;
    }
    // Obtém o código do funcionário selecionado
    int codigo = ui->tableWidget->item(currentRow, 0)->text().toInt();
    QSqlQuery query;
    // Prepara query para buscar dados do funcionário
    query.prepare("select * from tb_Usuarios where ID ="+QString::number(codigo));
    if(query.exec()){
        query.first();
        // Define o índice do tipo de acesso
        if((query.value(2).toString()) == "A"){
            index = 0;
            qDebug() << "0";
        }else{
            index = 1;
            qDebug() << "1";
        }
        // Preenche os campos com os dados do funcionário
        ui->lineEdit_usuario->setText(query.value(0).toString());
        ui->lineEdit_nome->setText(query.value(3).toString());
        ui->lineEdit_senha->setText(query.value(1).toString());
        ui->lineEdit_id->setText(query.value(4).toString());
        ui->comboBox_acesso->setCurrentIndex(index);
        id_filtro = query.value(4).toString();
    }else{
        QMessageBox::warning(this, "ERRO", "erro na query"+ query.lastError().text());
    }
}

// Função chamada quando o botão editar é clicado
void tela_funcionarios::on_btnEditar_clicked()
{
    // Obtém os dados dos campos de edição
    usuario = ui->lineEdit_usuario->text();
    nome = ui->lineEdit_nome->text();
    senha = ui->lineEdit_senha->text();
    ID = ui->lineEdit_id->text();
    Acesso = ui->comboBox_acesso->currentText();
    
    // Verifica se algum campo está vazio
    if(usuario == "" and senha == "" and nome == "" and ID == "" and Acesso == ""){
        QMessageBox::warning(this, "ERRO", "Selecione uma linha");
    }else{
        // Prepara query para atualizar dados do funcionário
        QSqlQuery query;
        query.prepare("UPDATE tb_Usuarios SET usuario = :usuario, senha = :senha, acesso = :acesso, "
                      "nome = :nome, ID = :ID WHERE ID = :id");

        query.bindValue(":usuario", usuario);
        query.bindValue(":senha", senha);
        query.bindValue(":acesso", Acesso);
        query.bindValue(":nome", nome);
        query.bindValue(":ID", ID.toInt());
        query.bindValue(":id", id_filtro.toInt());

        if(query.exec()){
            QMessageBox::information(this, "", "Usuario atualizado com sucesso.");
        } else {
            QMessageBox::warning(this, "Erro", "Erro ao atualizar o usuario: " + query.lastError().text());
        }
        renovar_table();
    }
}

// Função chamada quando o botão excluir é clicado
void tela_funcionarios::on_btnExcluir_clicked()
{
    // Confirma se o usuário quer excluir
    QMessageBox::StandardButton quest = QMessageBox::question(this, "Excluir", "Gostaria de Excluir", QMessageBox::Yes|QMessageBox::No);
    if (quest==QMessageBox::Yes){
        // Obtém a linha selecionada
        int row = ui->tableWidget->currentRow();
        if (row < 0) {
            QMessageBox::warning(this, "Erro", "Nenhuma linha foi selecionada para exclusão.");
            return;
        }
        ID = ui->lineEdit_id->text();
        // Prepara query para deletar funcionário
        QSqlQuery query;
        query.prepare("DELETE FROM tb_Usuarios WHERE ID = :ID");
        query.bindValue(":ID", ID.toInt());
        if (query.exec()) {
            renovar_table();
            QMessageBox::information(this, "", "Produto excluído com sucesso.");
        }else {
            QMessageBox::warning(this, "Erro", "Erro ao excluir o produto: " + query.lastError().text());
        }
    }
}

// Função chamada quando o botão limpar é clicado
void tela_funcionarios::on_btnLimpar_clicked()
{
    // Atualiza a tabela e limpa os campos
    renovar_table();
}

// Função chamada quando o botão pesquisar é clicado
void tela_funcionarios::on_btnPesquisar_clicked()
{
    QSqlQuery query;
    // Prepara query para pesquisar funcionários por nome
    query.prepare("SELECT usuario, senha, acesso, nome, ID FROM tb_Usuarios"
                  " WHERE nome like '%"+ui->lineEdit_pesquisa->text()+"%' order by nome");
    int row_counter = 0;
    if (query.exec()) {
        // Remove linhas existentes
        remove_rows(ui->tableWidget);
        ui->tableWidget->setColumnCount(5);
        while (query.next()) {
            // Insere uma nova linha e preenche com os dados do funcionário
            ui->tableWidget->insertRow(row_counter);
            ui->tableWidget->setItem(row_counter, 0, new QTableWidgetItem(query.value(4).toString()));
            ui->tableWidget->setItem(row_counter, 1, new QTableWidgetItem(query.value(3).toString()));
            ui->tableWidget->setItem(row_counter, 2, new QTableWidgetItem(query.value(0).toString()));
            ui->tableWidget->setItem(row_counter, 3, new QTableWidgetItem(query.value(1).toString()));
            ui->tableWidget->setItem(row_counter, 4, new QTableWidgetItem(query.value(2).toString()));
            ui->tableWidget->setRowHeight(row_counter, 20);
            row_counter++;

            // Centraliza o texto em todas as células
            for (int col = 0; col < 5; col++) {
                QTableWidgetItem *item = ui->tableWidget->item(row_counter, col);
                if (item) {
                    item->setTextAlignment(Qt::AlignCenter);
                }
            }
            ui->tableWidget->setRowHeight(row_counter, 20);
            row_counter++;
        }
        ui->lineEdit_pesquisa->clear();
    }
}

