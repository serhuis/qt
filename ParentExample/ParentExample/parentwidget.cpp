#include "parentwidget.h"
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>

ParentWidget::ParentWidget(QWidget *parent) : QWidget(parent)
{
    QLabel *label = new QLabel(this);
    label->setGeometry(50,0,100,30);
    label->setText("Text label");

    QPushButton *pushbutton = new QPushButton(this);
    pushbutton->setGeometry(50,50,100,30);
    pushbutton->setText("PushButton");

    QLineEdit *lineedit = new QLineEdit(this);

    lineedit->setGeometry(50,100,100,30);
    lineedit->setText("LineEdit");
    lineedit->selectAll();

    setGeometry(x(), y(), 300,150);
    setWindowTitle("Parent Widget Example");

}
