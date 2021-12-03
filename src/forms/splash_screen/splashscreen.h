#ifndef SPLASHSCREEN_H
#define SPLASHSCREEN_H

#include <QMainWindow>
#include <forms/splash_screen/ui_splash_screen.h>
#include <forms/splash_screen/circularprogress.h>
#include <mainwindow.h>

class SplashScreen : public QMainWindow
{
    Q_OBJECT

public:
    explicit SplashScreen(QWidget *parent = nullptr);
    ~SplashScreen();

public slots:
    void update();

private:
    int counter = 0;
    Ui_SplashScreen *ui;
    CircularProgress *mprogress;
    QTimer *mtimer;
};

#endif // SPLASHSCREEN_H
