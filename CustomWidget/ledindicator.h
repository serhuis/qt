#ifndef LEDINDICATOR_H
#define LEDINDICATOR_H

#include <QWidget>

class LedIndicator : public QWidget
{
    Q_OBJECT
    Q_PROPERTY(QString text READ text WRITE setText )
    Q_PROPERTY(bool turnedOn READ isTurnedOn WRITE setTurnedOn NOTIFY stateToggled)

public:
    explicit LedIndicator(QWidget *parent = nullptr);
    QString text() const;
    bool isTurnedOn() const;
    QSize minimumSizeHint() const;

protected:
    void paintEvent(QPaintEvent *);

signals:
    void stateToggled(bool);

public slots:
    void setText(const QString &);
    void setTurnedOn(bool);

private:
    QString mText;
    bool mIsTurnedOn;
};

#endif // LEDINDICATOR_H
