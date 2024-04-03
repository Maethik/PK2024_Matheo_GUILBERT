#include "widget.h"
#include "home.h"
#include "managewindows.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    manageWindows m;
    m.show();
    return a.exec();
}
