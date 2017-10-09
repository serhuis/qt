#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::UpdateTitle()
{
    QString lTitle = QString("TextEditor- %1[*]").arg(mFile.);
    setWindowTitle(lTitle);
}

void MainWindow::slotNewFile()
{
    mFileName = ("Untitled ");
    ui->plainTextEdit->clear();
    setWindowModified(false);
    UpdateTitle();
}
