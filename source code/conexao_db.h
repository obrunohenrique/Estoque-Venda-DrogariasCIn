#ifndef CONEXAO_DB_H
#define CONEXAO_DB_H
#include <QtSql>

class conexao{

public:
    QSqlDatabase BancoDeDados;
    conexao(){
        BancoDeDados=QSqlDatabase::addDatabase("QSQLITE");
    }

    void fechar_conexao(){
        BancoDeDados.close();
    }
    bool abrir_conexao(){
        BancoDeDados.setDatabaseName("E:/Projeto_oop_db/Projeto_oop_db.db");
        if(!BancoDeDados.open()){
            return false;
        }else{
            return true;
        }
    }
};

#endif // CONEXAO_DB_H
