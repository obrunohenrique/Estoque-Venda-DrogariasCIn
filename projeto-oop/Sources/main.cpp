#include "login_screen.h"
#include "tela_nova_venda.h"

#include <QApplication>

// Função principal do programa
int main(int argc, char *argv[])
{
    // Cria uma instância da aplicação Qt
    QApplication a(argc, argv);
    
    // Cria uma instância da tela de login
    Login_screen w;
    
    // Exibe a tela de login
    w.show();
    
    // Inicia o loop de eventos da aplicação e retorna o código de saída
    return a.exec();
}
