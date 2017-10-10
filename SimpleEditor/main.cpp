#include "mainwindow.h"
#include <QApplication>
#include "ui_mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setApplicationName("TextEditor");
    a.setApplicationVersion(QString("%1.%2").arg(MAJOR_VERSION).arg(MINOR_VERSION));
    MainWindow w;
    w.show();

    return a.exec();
}
