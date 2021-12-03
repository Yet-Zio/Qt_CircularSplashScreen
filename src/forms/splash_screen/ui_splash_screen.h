/********************************************************************************
** Form generated from reading UI file 'splash_screenzhsQPN.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef SPLASH_SCREENZHSQPN_H
#define SPLASH_SCREENZHSQPN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SplashScreen
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *container;
    QVBoxLayout *verticalLayout_2;
    QFrame *circle_bg;
    QVBoxLayout *verticalLayout_3;
    QFrame *texts;
    QVBoxLayout *verticalLayout_4;
    QGridLayout *gridLayout;
    QLabel *title;
    QFrame *empty;
    QLabel *loading;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *version;

    void setupUi(QMainWindow *SplashScreen)
    {
        if (SplashScreen->objectName().isEmpty())
            SplashScreen->setObjectName(QString::fromUtf8("SplashScreen"));
        SplashScreen->resize(300, 300);
        SplashScreen->setMinimumSize(QSize(300, 300));
        SplashScreen->setMaximumSize(QSize(300, 300));
        centralwidget = new QWidget(SplashScreen);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(10, 10, 10, 10);
        container = new QFrame(centralwidget);
        container->setObjectName(QString::fromUtf8("container"));
        container->setFrameShape(QFrame::NoFrame);
        container->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(container);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(20, 20, 20, 20);
        circle_bg = new QFrame(container);
        circle_bg->setObjectName(QString::fromUtf8("circle_bg"));
        circle_bg->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	background-color: #282a36;\n"
"	color: #f8f8f2;\n"
"	border-radius: 120px;\n"
"	font: 9pt \"Segoe UI\";\n"
"}"));
        circle_bg->setFrameShape(QFrame::NoFrame);
        circle_bg->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(circle_bg);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        texts = new QFrame(circle_bg);
        texts->setObjectName(QString::fromUtf8("texts"));
        texts->setMinimumSize(QSize(0, 90));
        texts->setMaximumSize(QSize(16777215, 200));
        texts->setStyleSheet(QString::fromUtf8("background: none;"));
        texts->setFrameShape(QFrame::NoFrame);
        texts->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(texts);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, 25, -1, -1);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        title = new QLabel(texts);
        title->setObjectName(QString::fromUtf8("title"));
        title->setMinimumSize(QSize(0, 30));
        title->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(title, 0, 0, 1, 1);

        empty = new QFrame(texts);
        empty->setObjectName(QString::fromUtf8("empty"));
        empty->setMinimumSize(QSize(0, 80));
        empty->setFrameShape(QFrame::NoFrame);
        empty->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(empty, 1, 0, 1, 1);

        loading = new QLabel(texts);
        loading->setObjectName(QString::fromUtf8("loading"));
        loading->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(loading, 3, 0, 1, 1);

        frame_2 = new QFrame(texts);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_2);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        version = new QLabel(frame_2);
        version->setObjectName(QString::fromUtf8("version"));
        version->setMinimumSize(QSize(100, 24));
        version->setMaximumSize(QSize(100, 24));
        version->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: rgb(151, 159, 200);\n"
"	background-color: rgb(68,71,90);\n"
"	border-radius: 12px;\n"
"}"));
        version->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(version, 0, Qt::AlignHCenter);


        gridLayout->addWidget(frame_2, 2, 0, 1, 1);


        verticalLayout_4->addLayout(gridLayout);


        verticalLayout_3->addWidget(texts);


        verticalLayout_2->addWidget(circle_bg);


        verticalLayout->addWidget(container);

        SplashScreen->setCentralWidget(centralwidget);

        retranslateUi(SplashScreen);

        QMetaObject::connectSlotsByName(SplashScreen);
    } // setupUi

    void retranslateUi(QMainWindow *SplashScreen)
    {
        SplashScreen->setWindowTitle(QCoreApplication::translate("SplashScreen", "Loading...", nullptr));
        title->setText(QCoreApplication::translate("SplashScreen", "Sample App", nullptr));
        loading->setText(QCoreApplication::translate("SplashScreen", "loading...", nullptr));
        version->setText(QCoreApplication::translate("SplashScreen", "v1.0.0 - Beta", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SplashScreen: public Ui_SplashScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SPLASH_SCREENZHSQPN_H
