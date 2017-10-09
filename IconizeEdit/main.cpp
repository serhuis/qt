#include "iconizemainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    IconizeMainWindow w;
    w.show();

    return a.exec();
}
