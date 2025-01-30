#ifndef CONEXAO_DB_H
#define CONEXAO_DB_H
#include <QtSql>
#include <QDebug>

class conexao{

public:
    QSqlDatabase BancoDeDados;
    conexao(){
        BancoDeDados=QSqlDatabase::addDatabase("QSQLITE");
    }

    QString dir=qApp->applicationDirPath();
    QString banco = dir+"/data_base/Projeto_oop_db.db";
    void fechar_conexao(){
        BancoDeDados.close();
    }
    bool abrir_conexao(){
        BancoDeDados.setDatabaseName(banco);
        if(!BancoDeDados.open()){
            qDebug() << "Falha ao conectar com Banco de Dados";
            return false;
        }else{
            qDebug() << "Banco de Dados conectado com SUCESSO";
            return true;
        }
    }
};

#endif // CONEXAO_DB_H
