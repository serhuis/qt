/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_New;
    QAction *action_Open;
    QAction *action_Save;
    QAction *actionE_xit;
    QAction *action_Undo;
    QAction *action_Redo;
    QAction *actionCu_t;
    QAction *action_Copy;
    QAction *action_Paste;
    QAction *actionSelect_all;
    QAction *actionAbout_program;
    QAction *actionAbout_Qt;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menuBar;
    QMenu *menu_File;
    QMenu *menu_Edit;
    QMenu *menu_About_program;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        action_New = new QAction(MainWindow);
        action_New->setObjectName(QStringLiteral("action_New"));
        action_New->setShortcutContext(Qt::ApplicationShortcut);
        action_Open = new QAction(MainWindow);
        action_Open->setObjectName(QStringLiteral("action_Open"));
        action_Save = new QAction(MainWindow);
        action_Save->setObjectName(QStringLiteral("action_Save"));
        actionE_xit = new QAction(MainWindow);
        actionE_xit->setObjectName(QStringLiteral("actionE_xit"));
        action_Undo = new QAction(MainWindow);
        action_Undo->setObjectName(QStringLiteral("action_Undo"));
        action_Undo->setEnabled(false);
        action_Redo = new QAction(MainWindow);
        action_Redo->setObjectName(QStringLiteral("action_Redo"));
        action_Redo->setEnabled(false);
        actionCu_t = new QAction(MainWindow);
        actionCu_t->setObjectName(QStringLiteral("actionCu_t"));
        actionCu_t->setEnabled(false);
        action_Copy = new QAction(MainWindow);
        action_Copy->setObjectName(QStringLiteral("action_Copy"));
        action_Copy->setEnabled(false);
        action_Paste = new QAction(MainWindow);
        action_Paste->setObjectName(QStringLiteral("action_Paste"));
        actionSelect_all = new QAction(MainWindow);
        actionSelect_all->setObjectName(QStringLiteral("actionSelect_all"));
        actionAbout_program = new QAction(MainWindow);
        actionAbout_program->setObjectName(QStringLiteral("actionAbout_program"));
        actionAbout_Qt = new QAction(MainWindow);
        actionAbout_Qt->setObjectName(QStringLiteral("actionAbout_Qt"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        verticalLayout->addWidget(plainTextEdit);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        menu_File = new QMenu(menuBar);
        menu_File->setObjectName(QStringLiteral("menu_File"));
        menu_Edit = new QMenu(menuBar);
        menu_Edit->setObjectName(QStringLiteral("menu_Edit"));
        menu_About_program = new QMenu(menuBar);
        menu_About_program->setObjectName(QStringLiteral("menu_About_program"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_File->menuAction());
        menuBar->addAction(menu_Edit->menuAction());
        menuBar->addAction(menu_About_program->menuAction());
        menu_File->addAction(action_New);
        menu_File->addAction(action_Open);
        menu_File->addAction(action_Save);
        menu_File->addSeparator();
        menu_File->addAction(actionE_xit);
        menu_Edit->addAction(action_Undo);
        menu_Edit->addAction(action_Redo);
        menu_Edit->addSeparator();
        menu_Edit->addAction(actionCu_t);
        menu_Edit->addAction(action_Copy);
        menu_Edit->addAction(action_Paste);
        menu_Edit->addSeparator();
        menu_Edit->addAction(actionSelect_all);
        menu_About_program->addAction(actionAbout_program);
        menu_About_program->addAction(actionAbout_Qt);

        retranslateUi(MainWindow);
        QObject::connect(actionE_xit, SIGNAL(triggered()), MainWindow, SLOT(close()));
        QObject::connect(plainTextEdit, SIGNAL(copyAvailable(bool)), action_Copy, SLOT(setEnabled(bool)));
        QObject::connect(plainTextEdit, SIGNAL(copyAvailable(bool)), actionCu_t, SLOT(setEnabled(bool)));
        QObject::connect(plainTextEdit, SIGNAL(copyAvailable(bool)), action_Undo, SLOT(setEnabled(bool)));
        QObject::connect(plainTextEdit, SIGNAL(copyAvailable(bool)), action_Redo, SLOT(setEnabled(bool)));
        QObject::connect(plainTextEdit, SIGNAL(modificationChanged(bool)), MainWindow, SLOT(setWindowModified(bool)));
        QObject::connect(action_Paste, SIGNAL(triggered()), plainTextEdit, SLOT(paste()));
        QObject::connect(action_Undo, SIGNAL(triggered()), plainTextEdit, SLOT(undo()));
        QObject::connect(actionSelect_all, SIGNAL(triggered()), plainTextEdit, SLOT(selectAll()));
        QObject::connect(action_Redo, SIGNAL(triggered()), plainTextEdit, SLOT(redo()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        action_New->setText(QApplication::translate("MainWindow", "&New", Q_NULLPTR));
        action_New->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", Q_NULLPTR));
        action_Open->setText(QApplication::translate("MainWindow", "&Open...", Q_NULLPTR));
        action_Open->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", Q_NULLPTR));
        action_Save->setText(QApplication::translate("MainWindow", "&Save", Q_NULLPTR));
        action_Save->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", Q_NULLPTR));
        actionE_xit->setText(QApplication::translate("MainWindow", "E&xit", Q_NULLPTR));
        actionE_xit->setShortcut(QApplication::translate("MainWindow", "Ctrl+F4", Q_NULLPTR));
        action_Undo->setText(QApplication::translate("MainWindow", "&Undo", Q_NULLPTR));
        action_Undo->setShortcut(QApplication::translate("MainWindow", "Ctrl+U", Q_NULLPTR));
        action_Redo->setText(QApplication::translate("MainWindow", "&Redo", Q_NULLPTR));
        action_Redo->setShortcut(QApplication::translate("MainWindow", "Ctrl+R", Q_NULLPTR));
        actionCu_t->setText(QApplication::translate("MainWindow", "Cu&t", Q_NULLPTR));
        actionCu_t->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", Q_NULLPTR));
        action_Copy->setText(QApplication::translate("MainWindow", "&Copy", Q_NULLPTR));
        action_Copy->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", Q_NULLPTR));
        action_Paste->setText(QApplication::translate("MainWindow", "&Paste", Q_NULLPTR));
        action_Paste->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", Q_NULLPTR));
        actionSelect_all->setText(QApplication::translate("MainWindow", "Select &all", Q_NULLPTR));
        actionSelect_all->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", Q_NULLPTR));
        actionAbout_program->setText(QApplication::translate("MainWindow", "About program", Q_NULLPTR));
        actionAbout_program->setShortcut(QApplication::translate("MainWindow", "Ctrl+F1", Q_NULLPTR));
        actionAbout_Qt->setText(QApplication::translate("MainWindow", "About&Qt", Q_NULLPTR));
        menu_File->setTitle(QApplication::translate("MainWindow", "&File", Q_NULLPTR));
        menu_Edit->setTitle(QApplication::translate("MainWindow", "&Edit", Q_NULLPTR));
        menu_About_program->setTitle(QApplication::translate("MainWindow", "&Help", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
