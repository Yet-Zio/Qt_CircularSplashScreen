#include <forms/splash_screen/splashscreen.h>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SplashScreen w;
    w.show();

    return a.exec();
}
