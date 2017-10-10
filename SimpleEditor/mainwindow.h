#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    void UpdateTitle();
    bool askForFileSaveAndClose();


private slots:
    void slotNewFile();
    void slotOpenFile();
    void slotSaveFale();
    void slotAboutProgram();
    void slotAboutQt();

private:
    QFile mFile;
    QString mFileName;
};

#endif // MAINWINDOW_H
