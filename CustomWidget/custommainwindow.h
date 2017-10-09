#ifndef CUSTOMMAINWINDOW_H
#define CUSTOMMAINWINDOW_H

#include <QWidget>

class CustomMainWindow : public QWidget
{
    Q_OBJECT

public:
    CustomMainWindow(QWidget *parent = 0);
    ~CustomMainWindow();
};

#endif // CUSTOMMAINWINDOW_H
