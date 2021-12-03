#include "splashscreen.h"

SplashScreen::SplashScreen(QWidget *parent) : QMainWindow(parent)
{
    ui = new Ui_SplashScreen();
    ui->setupUi(this);

    // remove title bar and make it translucent
    setWindowFlag(Qt::FramelessWindowHint);
    setAttribute(Qt::WA_TranslucentBackground);

    auto *progress = new CircularProgress();
    mprogress = progress;
    progress->width = 270;
    progress->height = 270;
    progress->value = 0;
    progress->setFixedSize(progress->width, progress->height);
    progress->move(15, 15);
    progress->font_size = 40;
    progress->add_shadow(true);
    progress->bg_color = "#44475a";
    progress->setParent(ui->centralwidget);
    progress->show();

    // add drop shadow
    auto *shadow = new QGraphicsDropShadowEffect();
    shadow->setBlurRadius(15);
    shadow->setXOffset(0);
    shadow->setYOffset(0);
    shadow->setColor(QColor(0, 0, 0, 80));
    setGraphicsEffect(shadow);

    auto *timer = new QTimer();
    mtimer = timer;
    QObject::connect(timer, SIGNAL(timeout()), this, SLOT(update()));
    timer->start(30);

}

SplashScreen::~SplashScreen(){
    delete ui;
}

void SplashScreen::update(){
    // set value to progress bar
    mprogress->set_value(counter);

    // close splash screen and open main app
    if(counter >= 100){
        mtimer->stop();
        auto *mainw = new MainWindow();
        mainw->show();
        close();
    }

    // increase counter
    counter += 1;
}
