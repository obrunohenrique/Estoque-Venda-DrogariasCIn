#include "login_screen.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Login_screen w;
    w.show();
    return a.exec();
}
