#ifndef ICONIZEMAINWINDOW_H
#define ICONIZEMAINWINDOW_H

#include <QWidget>

class IconizedLineEdit;

class IconizeMainWindow : public QWidget
{
    Q_OBJECT

public:
    explicit IconizeMainWindow(QWidget *parent = 0);
    ~IconizeMainWindow();

private:
    void createUI();

private:
    IconizedLineEdit  *iconizedLineEdit;
    IconizedLineEdit  *iconizedLineEdit2;
    IconizedLineEdit  *iconizedLineEdit3;
    IconizedLineEdit  *iconizedLineEdit4;
    IconizedLineEdit  *iconizedLineEdit5;

};

#endif // ICONIZEMAINWINDOW_H
