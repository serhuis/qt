#ifndef PARENTWIDGET_H
#define PARENTWIDGET_H

#include <QWidget>

class ParentWidget : public QWidget
{
    Q_OBJECT
public:
    explicit ParentWidget(QWidget *parent = nullptr);

signals:

public slots:
};

#endif // PARENTWIDGET_H