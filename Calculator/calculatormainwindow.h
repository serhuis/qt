#ifndef CALCULATORMAINWINDOW_H
#define CALCULATORMAINWINDOW_H

#include <QWidget>

class QPushButton;
class QLCDNumber;
class QSignalMapper;

class CalculatorMainWindow : public QWidget
{
    Q_OBJECT

public:
    explicit CalculatorMainWindow(QWidget *parent = 0);
    ~CalculatorMainWindow();

private:
    void createWidgets();

private:
    QPushButton * pushButton0;
    QPushButton * pushButton1;
    QPushButton * pushButton2;
    QPushButton * pushButton3;
    QPushButton * pushButton4;
    QPushButton * pushButton5;
    QPushButton * pushButton6;
    QPushButton * pushButton7;
    QPushButton * pushButton8;
    QPushButton * pushButton9;
    QPushButton * pushButtonPlus;
    QPushButton * pushButtonMinus;
    QPushButton * pushButtonClear;
    QLCDNumber *lcdNumber;

    int mSum;
    int mNextNumber;

    QSignalMapper *mMapper;

private slots:
    void slotClear();
    void slotButtonPressed(int num);
    void slotPlusEqual();



};

#endif // CALCULATORMAINWINDOW_H
