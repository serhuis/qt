#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication application(argc, argv);
    QLabel label;
    label.setText("I am widget!");
    label.setGeometry(200,200,300,185);
    label.setAlignment(Qt::AlignHCenter|Qt::AlignVCenter);

    QFont lBlackFont("Arial Black", 12);

    label.setFont(lBlackFont);
    label.show();

    return application.exec();
}
