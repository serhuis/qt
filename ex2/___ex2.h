#ifndef EX2_H
#define EX2_H

#include <QWidget>

namespace Ui {
class ex2;
}

class ex2 : public QWidget
{
    Q_OBJECT

public:
    explicit ex2(QWidget *parent = 0);
    ~ex2();

private:
    Ui::ex2 *ui;
};

#endif // EX2_H
