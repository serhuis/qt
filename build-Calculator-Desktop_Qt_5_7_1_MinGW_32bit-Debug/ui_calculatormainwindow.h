/********************************************************************************
** Form generated from reading UI file 'calculatormainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATORMAINWINDOW_H
#define UI_CALCULATORMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CalculatorMainWindow
{
public:

    void setupUi(QWidget *CalculatorMainWindow)
    {
        if (CalculatorMainWindow->objectName().isEmpty())
            CalculatorMainWindow->setObjectName(QStringLiteral("CalculatorMainWindow"));
        CalculatorMainWindow->resize(400, 300);

        retranslateUi(CalculatorMainWindow);

        QMetaObject::connectSlotsByName(CalculatorMainWindow);
    } // setupUi

    void retranslateUi(QWidget *CalculatorMainWindow)
    {
        CalculatorMainWindow->setWindowTitle(QApplication::translate("CalculatorMainWindow", "CalculatorMainWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CalculatorMainWindow: public Ui_CalculatorMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATORMAINWINDOW_H
