#include "widget.h"
#include <QApplication>
#include<QSplashScreen>
#include<chrono>
#include<thread>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QPixmap pixmap(":/prefix1/pic/logo1.png");
    QSplashScreen splash(pixmap);
    splash.show();
    a.processEvents();
    std::chrono::seconds dura(2);
    std::this_thread::sleep_for(dura);

    Widget w;
    w.show();

    splash.finish(&w);
    return a.exec();
}
