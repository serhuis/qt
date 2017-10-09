#include "iconizedlineedit.h"
#include <QStyle>
#include <QLabel>


IconizedLineEdit::IconizedLineEdit(QWidget *parent) : QLineEdit(parent),
    mIconVisibilityMode(IconAlwaysVisible)
{

    mIconLabel = new QLabel(this);
    mIconLabel->setVisible(true);
    connect(this, SIGNAL(textChanged(QString)), this, SLOT(slotTextChanged(QString)), Qt::UniqueConnection);
}
bool IconizedLineEdit::isIconVisible() const
{
    return mIconLabel->isVisible();
}

void IconizedLineEdit::setIconPixmap(const QPixmap &pPixmap)
{
    mIconLabel->setPixmap(pPixmap);
    updateIconPositionAndSize();
}

void IconizedLineEdit::setIconToolTip(const QString &pToolTip)
{
    mIconLabel->setToolTip(pToolTip);
}

void IconizedLineEdit::updateIconPositionAndSize()
{
    mIconLabel->setScaledContents(true);
    mIconLabel->setFixedSize(width(), height());

    QSize size = mIconLabel->size();
    mIconLabel->move(rect().right() - size.width(), (rect().bottom() + 1 - size.height())/2);

    if(mIconLabel->isVisible())
    {
        QMargins margins = textMargins();
        margins.setRight(mIconLabel->size().width() +1);
        setTextMargins(margins);
    }
    else
    {
        setTextMargins(QMargins(0,0,0,0));
    }

}

void IconizedLineEdit::setIconVisibility(IconVisibilityMode pIconVisibilityMode)
{
    mIconVisibilityMode = pIconVisibilityMode;
    switch (pIconVisibilityMode) {
    case IconAlwaysVisible:
        setIconVisible(true);
        break;
    case IconVisibleOnEmptyText:
    case IconVisibleOnTextPresence:
        slotTextChanged(text());
        break;
    default:
        setIconVisible(false);
        break;
    }
}

void IconizedLineEdit::slotTextChanged( const QString &pText)
{
    if(IconVisibleOnEmptyText ==mIconVisibilityMode)
    {
        setIconVisible(pText.isEmpty());
    }
    else if (IconVisibleOnTextPresence == mIconVisibilityMode)
    {
        setIconVisible(!pText.isEmpty());
    }
}

void IconizedLineEdit::setIconVisible(bool pIsVisible)
{
    mIconLabel->setVisible(pIsVisible);
}
