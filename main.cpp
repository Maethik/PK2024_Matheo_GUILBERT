#include "widget.h"
#include "home.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    home h;
    h.show();
    return a.exec();
}
