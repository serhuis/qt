#include <QApplication>
#include <QSplitter>
#include "dialogex2.h"
int main(int argc, char *argv[])
{
QApplication app(argc, argv);

//1) //Отображаем форму так, как сделано в QtDesigner
	DialogEx2 * dialog1 = new DialogEx2();
	dialog1->show();


/*
2) // Отображаем две формы горизонтально с вертикальным разделителем
QSplitter * splitter = new QSplitter(Qt::Horizontal);
DialogEx2 * dialog1 = new DialogEx2();
DialogEx2 * dialog2 = new DialogEx2();
splitter->addWidget( dialog1 );
splitter->addWidget( dialog2 );
splitter->show(); // отображаем окно

*/


return app.exec(); // запускаем цикл обработки сообщений
}