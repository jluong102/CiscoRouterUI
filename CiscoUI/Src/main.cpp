//Last Updated 8/24/18
#include "mainwindow.h"
#include <QApplication>
#include <QSplashScreen>
#include <QThread>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QPixmap pixmap("D:\\Other\\QT\\Projects\\build-CiscoRouter-Desktop_Qt_5_9_5_MinGW_32bit-Release\\splash.png");
    QSplashScreen splash(pixmap);
    splash.show();
    a.thread()->sleep(3);

    MainWindow w;
    w.show();
    splash.finish(&w);

    return a.exec();
}
