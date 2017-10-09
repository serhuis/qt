/********************************************************************************
** Form generated from reading UI file 'iconizemainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ICONIZEMAINWINDOW_H
#define UI_ICONIZEMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IconizeMainWindow
{
public:

    void setupUi(QWidget *IconizeMainWindow)
    {
        if (IconizeMainWindow->objectName().isEmpty())
            IconizeMainWindow->setObjectName(QStringLiteral("IconizeMainWindow"));
        IconizeMainWindow->resize(478, 477);

        retranslateUi(IconizeMainWindow);

        QMetaObject::connectSlotsByName(IconizeMainWindow);
    } // setupUi

    void retranslateUi(QWidget *IconizeMainWindow)
    {
        IconizeMainWindow->setWindowTitle(QApplication::translate("IconizeMainWindow", "IconizeMainWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class IconizeMainWindow: public Ui_IconizeMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ICONIZEMAINWINDOW_H
