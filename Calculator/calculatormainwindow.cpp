#include "calculatormainwindow.h"
#include "ui_calculatormainwindow.h"

#include <QGridLayout>
#include <QPushButton>
#include <QLCDNumber>

CalculatorMainWindow::CalculatorMainWindow(QWidget *parent) :
    QWidget(parent)
{
    resize(300,300);
    setWindowTitle("Simple calculator");

    createWidgets();

}

CalculatorMainWindow::~CalculatorMainWindow()
{

}

void CalculatorMainWindow::createWidgets()
{
    QGridLayout *calcLayout = new QGridLayout;
    setLayout(calcLayout);

    lcdNumber = new QLCDNumber;

    pushButton0 = new QPushButton("0");
    pushButton1 = new QPushButton("1");
    pushButton2 = new QPushButton("2");
    pushButton3 = new QPushButton("3");
    pushButton4 = new QPushButton("4");
    pushButton5 = new QPushButton("5");
    pushButton6 = new QPushButton("6");
    pushButton7 = new QPushButton("7");
    pushButton8 = new QPushButton("8");
    pushButton9 = new QPushButton("9");
    pushButtonClear = new QPushButton("C");
    pushButtonPlus = new QPushButton("+/=");


    calcLayout->addWidget(lcdNumber, 0,0,1,4);
    calcLayout->addWidget(pushButton1, 1,0);
    calcLayout->addWidget(pushButton2, 1,1);
    calcLayout->addWidget(pushButton3, 1,2);
    calcLayout->addWidget(pushButton4, 2,0);
    calcLayout->addWidget(pushButton5, 2,1);
    calcLayout->addWidget(pushButton6, 2,2);
    calcLayout->addWidget(pushButton7, 3,0);
    calcLayout->addWidget(pushButton8, 3,1);
    calcLayout->addWidget(pushButton9, 3,2);
    calcLayout->addWidget(pushButton0, 4,0,1,3);
    calcLayout->addWidget(pushButtonClear, 1,3);
    calcLayout->addWidget(pushButtonPlus, 2,3,3,1);

    pushButton0->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
    pushButton1->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
    pushButton2->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
    pushButton3->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
    pushButton4->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
    pushButton5->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
    pushButton6->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
    pushButton7->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
    pushButton8->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
    pushButton9->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
    pushButtonClear->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
    pushButtonPlus->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);

    lcdNumber->setFixedHeight(50);


}
