#include "ledindicator.h"
#include <QPainter>
#include <QPaintEvent>

const int cLedRadius = 7;
const int cLedSpacing = 5;

LedIndicator::LedIndicator(QWidget *parent) : QWidget(parent),
    mIsTurnedOn(false)
{
}

QString LedIndicator::text() const
{
    return mText;
}

bool LedIndicator::isTurnedOn() const
{
    return mIsTurnedOn;
}

void LedIndicator::setText(const QString &pText)
{
    mText = pText;
}

void LedIndicator::setTurnedOn(bool pIsTurnedOn)
{
    if(isTurnedOn() == pIsTurnedOn)
    {
        return;
    }
    mIsTurnedOn = pIsTurnedOn;

    emit stateToggled(mIsTurnedOn);

    update();
}

void LedIndicator::paintEvent(QPaintEvent *pEvent)
{
    QPainter lPainter(this);
    lPainter.setRenderHint(QPainter::Antialiasing);

    QPoint lLedCenter(cLedRadius + 1, height()/2);
    QPainterPath lPath;

    lPath.addEllipse(lLedCenter, cLedRadius, cLedRadius);
    lPainter.save();

    QRadialGradient lGradient(lLedCenter, cLedRadius);
    if(mIsTurnedOn)
    {
        lPainter.setPen(QPen(Qt::darkGreen));

        lGradient.setColorAt(0.2, "#70ff70");
        lGradient.setColorAt(1, "#00CC00");
    }
    else
    {
        lPainter.setPen(QPen(QColor(0,0,0)));
        lGradient.setColorAt(0.2, Qt::gray);
        lGradient.setColorAt(1, Qt::darkGray);
    }
    lPainter.fillPath(lPath, QBrush(lGradient));
    lPainter.drawPath((lPath));
    lPainter.restore();

    lPainter.setFont(font());
    QRect lTextRect(cLedRadius*2+cLedSpacing, 0,width()-(cLedRadius*2+cLedSpacing), height());
    lPainter.drawText(lTextRect, Qt::AlignVCenter|Qt::AlignLeft, mText);
}

QSize LedIndicator::minimumSizeHint() const
{
    return QSize(cLedRadius*2 + fontMetrics().width(mText)+cLedSpacing, cLedRadius*2);
}
