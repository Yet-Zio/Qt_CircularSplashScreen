#include "circularprogress.h"

CircularProgress::CircularProgress(QWidget *parent)
{
    resize(width, height);
}

void CircularProgress::paintEvent(QPaintEvent *event){
    auto pnwidth = width - progress_width;
    auto pnheight = height - progress_width;
    auto margin = progress_width / 2;
    auto pnvalue = value * 360 / max_value;

    // painter
    auto *paint = new QPainter();
    paint->begin(this);
    paint->setRenderHint(QPainter::Antialiasing);
    paint->setFont(QFont(font_family, font_size));

    // create rect
    auto rect = QRect(0, 0, width, height);
    paint->setPen(Qt::NoPen);
    paint->drawRect(rect);

    // pen
    auto pen = QPen();
    pen.setColor(QColor(progress_color));
    pen.setWidth(progress_width);

    // bg pen
    auto penny = QPen();
    penny.setColor(QColor(bg_color));
    penny.setWidth(progress_width);

    // set round cap
    if(progress_rounded_cap){
        pen.setCapStyle(Qt::RoundCap);
        penny.setCapStyle(Qt::RoundCap);
    }

    if(enable_bg){
        paint->setPen(penny);
        paint->drawArc(margin, margin, pnwidth, pnheight, 0, 360 * 16);
    }

    // create arc/circular progress
    paint->setPen(pen);
    paint->drawArc(margin, margin, pnwidth, pnheight, -90 * 16, -pnvalue * 16);

    // create text
    if(enable_text){
        pen.setColor(QColor(text_color));
        paint->setPen(pen);
        paint->drawText(rect, Qt::AlignCenter, QString::number(value) + suffix);
    }

    // end
    paint->end();
}

void CircularProgress::set_value(int value){
    this->value = value;
    repaint(); // render progress bar after value is changed
}

void CircularProgress::add_shadow(bool enable){
    if(enable){
        auto *shadow = new QGraphicsDropShadowEffect();
        shadow->setBlurRadius(15);
        shadow->setXOffset(0);
        shadow->setYOffset(0);
        shadow->setColor(QColor(0, 0, 0, 80));
        setGraphicsEffect(shadow);
    }
}
