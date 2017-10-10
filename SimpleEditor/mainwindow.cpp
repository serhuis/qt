#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QFileDialog>
#include<QMessageBox>
#include<QDir>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    slotNewFile();
    connect(ui->action_New, SIGNAL(triggered()), this, SLOT(slotNewFile()), Qt::UniqueConnection);
    connect(ui->action_Open,SIGNAL(triggered()), this, SLOT(slotOpenFile()), Qt::UniqueConnection);
    connect(ui->action_Save, SIGNAL(triggered()), this, SLOT(slotSaveFale()), Qt::UniqueConnection);
    connect(ui->actionAbout_program, SIGNAL(triggered()), this, SLOT(slotAboutProgram()), Qt::UniqueConnection);
    connect(ui->actionAbout_Qt, SIGNAL(triggered()), this, SLOT(slotAboutQt()), Qt::UniqueConnection);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::UpdateTitle()
{
    QString lTitle = QString("TextEditor- %1[*]").arg(mFile.fileName());
    setWindowTitle(lTitle);
}

void MainWindow::slotNewFile()
{
    if(!askForFileSaveAndClose()){
        return;
    }

    mFile.setFileName("Untitled ");
    ui->plainTextEdit->clear();
    setWindowModified(false);
    UpdateTitle();
}

void MainWindow::slotOpenFile()
{
    QString lFileName = QFileDialog::getOpenFileName(this, "Open file...", QDir::homePath(), "TextFiles (*.txt);; All files (*.*)");

    if(lFileName.isEmpty())
        return;

    if(!askForFileSaveAndClose())
        return;

    QFile lFile(lFileName);
    if(lFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        mFile.setFileName(lFileName);
        mFileName = lFileName;
        ui->plainTextEdit->setPlainText(lFile.readAll());
        lFile.close();
        setWindowModified(false);
        UpdateTitle();
    }
    else
    {
        QMessageBox::warning(this, "ERROR", QString("Could not open file %1 for reading").arg(lFile.fileName()), QMessageBox::Ok);
    }
}

void MainWindow::slotSaveFale()
{
    if(!isWindowModified())
        return;

    QString lFilename = QFileDialog::getSaveFileName(this, tr("Save file.."), QDir::homePath(), tr("Text files (*.txt);;Allfiles(*.*)"));
    if(lFilename.isEmpty())
        return;

    QFile lFile(lFilename);

    if(lFile.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        mFileName = lFilename;
        QByteArray lData;

        lData.append(ui->plainTextEdit->toPlainText());
        lFile.write(lData);
        lFile.close();
        setWindowModified(false);
    }
    else {
        QMessageBox::warning(this, "ERROR", QString("Could not open file %1 for writing").arg(lFile.fileName()), QMessageBox::Ok);
    }
}

bool MainWindow::askForFileSaveAndClose()
{
    if(isWindowModified()){
        int lResult = QMessageBox::question(this, tr("Save chamges&?"),
                                            QString(tr("File %1 is modified. Do you want to save your changes?")).arg(mFile.fileName()),
                                            QMessageBox::Yes, QMessageBox::No, QMessageBox::Cancel);
        if(QMessageBox::Yes == lResult){
            slotSaveFale();
        }
        else {
            if(QMessageBox::Cancel == lResult){
                return false;
            }

        }

    }
    return true;
}

void MainWindow::slotAboutProgram()
{
    QMessageBox::about(this, tr("About"), QString("%1 v.%2").arg(qApp->applicationName()).arg(qApp->applicationVersion()));
}

void MainWindow::slotAboutQt()
{
    QMessageBox::aboutQt(this);
}
