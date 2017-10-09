#include "iconizemainwindow.h"
#include "iconizedlineedit.h"
#include "ui_iconizemainwindow.h"
#include <QBoxLayout>


IconizeMainWindow::IconizeMainWindow(QWidget *parent) :
    QWidget(parent)//,
//    ui(new Ui::IconizeMainWindow)
{
//    ui->setupUi(this);
    createUI();
}

IconizeMainWindow::~IconizeMainWindow()
{

}

void IconizeMainWindow::createUI()
{
    QBoxLayout *mainLayout = new QVBoxLayout;
    setLayout(mainLayout);

    iconizedLineEdit = new IconizedLineEdit;
    iconizedLineEdit->setPlaceholderText("Click to open file");
    iconizedLineEdit->setIconToolTip("Enter filename");
    iconizedLineEdit->setIconPixmap(QPixmap("folder.png"));
    iconizedLineEdit->setIconVisibility(IconizedLineEdit::IconAlwaysVisible);
    mainLayout->addWidget(iconizedLineEdit);

    iconizedLineEdit2 = new IconizedLineEdit;
    iconizedLineEdit2->setPlaceholderText("Enter IP address");
    iconizedLineEdit2->setIconPixmap(QPixmap("Web_Address.png"));
    iconizedLineEdit2->setIconVisibility(IconizedLineEdit::IconAlwaysVisible);
    mainLayout->addWidget(iconizedLineEdit2);

    iconizedLineEdit3 = new IconizedLineEdit;
    iconizedLineEdit3->setPlaceholderText("");
    iconizedLineEdit3->setIconPixmap(QPixmap("question.png"));
    iconizedLineEdit3->setIconVisibility(IconizedLineEdit::IconAlwaysVisible);
    mainLayout->addWidget(iconizedLineEdit3);
}
