#ifndef ICONIZEDLINEEDIT_H
#define ICONIZEDLINEEDIT_H
#include <QLineEdit>
#include <QValidator>

class QLabel;

class IconizedLineEdit : public QLineEdit
{
    Q_OBJECT
public:
    explicit IconizedLineEdit(QWidget *parent = 0);

    enum IconVisibilityMode{
        IconAlwaysVisible = 0,
        IconVisibleOnHover,
        IconVisibleOnTextPresence,
        IconVisibleOnEmptyText,
        IconAllwaysHidden
    };
    void setIconVisibility(IconVisibilityMode pIconVisibilityMode);
    bool isIconVisible() const;
    void setIconPixmap(const QPixmap &pPixmap);
    void setIconToolTip(const QString &pToolTip);

private slots:
    void slotTextChanged(const QString &pText);

private:
    void updateIconPositionAndSize();
    void setIconVisible(bool pIsVisible);

private:
    QLabel *mIconLabel;
    IconVisibilityMode mIconVisibilityMode;
    QValidator *mValidator;

};

#endif // ICONIZEDLINEEDIT_H
