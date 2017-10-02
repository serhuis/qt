#include "widget.h"
#include<QHBoxLayout>
#include<QVBoxLayout>
#include<QLabel>
#include<QLineEdit>
#include<QPushButton>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QLineEdit *lineedit = new QLineEdit("Text 1");

    QLabel *label = new QLabel("Line Edit &1");
    label->setBuddy(lineedit);

    QHBoxLayout *hboxlayout = new QHBoxLayout;
    hboxlayout->addWidget(label);
    hboxlayout->addWidget(lineedit);

    QLineEdit *lineedit2 = new QLineEdit("Text 2");

    QLabel *label2 = new QLabel("Line Edit &2");
    label->setBuddy(lineedit2);

    QHBoxLayout *hboxlayout2 = new QHBoxLayout;
    hboxlayout2->addWidget(label2);
    hboxlayout2->addWidget(lineedit2);

    QPushButton *buttonOK = new QPushButton("&Ok");
    QPushButton *buttonCancel = new QPushButton("&Cancel");

    QHBoxLayout *hboxlayout3 = new QHBoxLayout;
    hboxlayout3->addStretch();
    hboxlayout3->addWidget(buttonOK);
    hboxlayout3->addWidget(buttonCancel);

    QVBoxLayout *vboxlayout = new QVBoxLayout;
    vboxlayout->addLayout(hboxlayout);
    vboxlayout->addLayout(hboxlayout2);
    vboxlayout->addLayout(hboxlayout3);

    setLayout(vboxlayout);
}

Widget::~Widget()
{

}
