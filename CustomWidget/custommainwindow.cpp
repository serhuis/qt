#include "custommainwindow.h"
#include <QHBoxLayout>
#include <QCheckBox>
#include "ledindicator.h"

CustomMainWindow::CustomMainWindow(QWidget *parent)
    : QWidget(parent)
{
    QHBoxLayout *lLayout = new QHBoxLayout;
    setLayout(lLayout);

    LedIndicator *lLedIndicator = new LedIndicator;
    lLedIndicator->setText("LED indicator");
    lLayout->addWidget(lLedIndicator);

    QCheckBox* lCheckbox = new QCheckBox;
    lLayout->addWidget(lCheckbox);

    connect(lCheckbox, SIGNAL(toggled(bool)), lLedIndicator, SLOT(setTurnedOn(bool)), Qt::UniqueConnection);
}

CustomMainWindow::~CustomMainWindow()
{

}
