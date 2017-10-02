#include <QApplication>

#include "parentwidget.h"

int main(int argc, char *argv[])
{
    QApplication app (argc, argv);

    ParentWidget parentwidget;
    parentwidget.move(100,200);
    parentwidget.show();

    return app.exec();
}
