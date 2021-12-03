#ifndef CIRCULARPROGRESS_H
#define CIRCULARPROGRESS_H

#include <QWidget>
#include <QPainter>
#include <QGraphicsDropShadowEffect>
#include <QTimer>

class CircularProgress: public QWidget
{
public:
    CircularProgress(QWidget *parent = nullptr);
    void set_value(int value);
    void add_shadow(bool enable);

    int value = 0;
    int width = 200;
    int height = 200;
    int progress_width = 10;
    bool progress_rounded_cap = true;
    bool enable_bg = true;
    QString bg_color = "#44475a";
    QString progress_color = "#498BD1";
    bool enable_text = true;
    int max_value = 100;
    QString font_family = "Segoe UI";
    int font_size = 12;
    QString suffix = "%";
    QString text_color = "#498BD1";

public slots:
    void change_value(int value){
        set_value(value);
    }

protected:
    void paintEvent(QPaintEvent *event);
};

#endif // CIRCULARPROGRESS_H
