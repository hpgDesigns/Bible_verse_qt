/********************************************************************************
** Form generated from reading UI file 'daily_verse.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DAILY_VERSE_H
#define UI_DAILY_VERSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Daily_verse
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *Romans_12;
    QTextEdit *textEdit_5;
    QPushButton *pushButton;
    QTextEdit *textEdit_3;
    QPushButton *Proverbs_12;
    QTextEdit *textEdit_4;
    QPushButton *pushButton_5;
    QPushButton *goto_page2;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QTextEdit *textEdit_6;
    QPushButton *Romans_14;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QPushButton *Romans_13;
    QPushButton *Proverbs_7;
    QPushButton *pushButton_10;
    QPushButton *pushButton_9;
    QPushButton *pushButton_11;
    QPushButton *pushButton_quit;
    QPushButton *pushButton_12;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Daily_verse)
    {
        if (Daily_verse->objectName().isEmpty())
            Daily_verse->setObjectName("Daily_verse");
        Daily_verse->resize(1280, 664);
        Daily_verse->setMaximumSize(QSize(1280, 720));
        Daily_verse->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(100, 111, 110, 255), stop:1 rgba(0, 0, 0, 255));\n"
"\n"
"\n"
"\n"
""));
        centralwidget = new QWidget(Daily_verse);
        centralwidget->setObjectName("centralwidget");
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(650, 70, 601, 471));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Romans_12 = new QPushButton(gridLayoutWidget);
        Romans_12->setObjectName("Romans_12");
        Romans_12->setStyleSheet(QString::fromUtf8("background-color: rgb(129, 61, 156);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 11pt \"Comfortaa\";"));

        gridLayout->addWidget(Romans_12, 5, 0, 1, 1);

        textEdit_5 = new QTextEdit(gridLayoutWidget);
        textEdit_5->setObjectName("textEdit_5");
        textEdit_5->setStyleSheet(QString::fromUtf8("color: rgb(153, 193, 241);\n"
"font: 700 11pt \"Comfortaa\";\n"
"background-image: url(:/resources/sky-space-dark-galaxy.jpg);\n"
""));
        textEdit_5->setReadOnly(true);

        gridLayout->addWidget(textEdit_5, 4, 0, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName("pushButton");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(129, 61, 156);\n"
"color: rgb(255, 255, 255);\n"
"\n"
"font: 700 11pt \"Comfortaa\";"));

        gridLayout->addWidget(pushButton, 3, 0, 1, 1);

        textEdit_3 = new QTextEdit(gridLayoutWidget);
        textEdit_3->setObjectName("textEdit_3");
        textEdit_3->setStyleSheet(QString::fromUtf8("color: rgb(153, 193, 241);\n"
"background-image: url(:/resources/pexels-photo-3214110.jpeg);\n"
"font: 700 13pt \"Comfortaa\";"));
        textEdit_3->setReadOnly(true);

        gridLayout->addWidget(textEdit_3, 2, 0, 1, 1);

        Proverbs_12 = new QPushButton(gridLayoutWidget);
        Proverbs_12->setObjectName("Proverbs_12");
        Proverbs_12->setStyleSheet(QString::fromUtf8("background-color: rgb(129, 61, 156);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 11pt \"Comfortaa\";"));

        gridLayout->addWidget(Proverbs_12, 1, 0, 1, 1);

        textEdit_4 = new QTextEdit(gridLayoutWidget);
        textEdit_4->setObjectName("textEdit_4");
        textEdit_4->setStyleSheet(QString::fromUtf8("color: rgb(51, 209, 122);\n"
"font: 700 11pt \"Comfortaa\";\n"
"background-image: url(:/resources/pexels-photo-461940.jpeg);"));
        textEdit_4->setReadOnly(true);

        gridLayout->addWidget(textEdit_4, 0, 0, 1, 1);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(1080, 10, 80, 41));
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(129, 61, 156);\n"
"color: rgb(246, 245, 244);\n"
"font: 700 15pt \"Comfortaa\";"));
        goto_page2 = new QPushButton(centralwidget);
        goto_page2->setObjectName("goto_page2");
        goto_page2->setGeometry(QRect(880, 10, 80, 41));
        goto_page2->setStyleSheet(QString::fromUtf8("background-color: rgb(129, 61, 156);\n"
"color: rgb(248, 228, 92);\n"
"font: 700 15pt \"Comfortaa\";"));
        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(30, 70, 611, 471));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        textEdit_6 = new QTextEdit(gridLayoutWidget_2);
        textEdit_6->setObjectName("textEdit_6");
        textEdit_6->setStyleSheet(QString::fromUtf8("color: rgb(51, 209, 122);\n"
"font: 700 13pt \"Comfortaa\";\n"
"background-image: url(:/resources/pexels-photo-461940.jpeg);"));
        textEdit_6->setReadOnly(true);

        gridLayout_2->addWidget(textEdit_6, 4, 1, 1, 1);

        Romans_14 = new QPushButton(gridLayoutWidget_2);
        Romans_14->setObjectName("Romans_14");
        Romans_14->setStyleSheet(QString::fromUtf8("background-color: rgb(129, 61, 156);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 11pt \"Comfortaa\";"));

        gridLayout_2->addWidget(Romans_14, 5, 1, 1, 1);

        textEdit = new QTextEdit(gridLayoutWidget_2);
        textEdit->setObjectName("textEdit");
        textEdit->setStyleSheet(QString::fromUtf8("background-image: url(:/resources/pexels-photo-268533.jpeg);\n"
"color: rgb(51, 209, 122);\n"
"font: 700 14pt \"Comfortaa\";"));
        textEdit->setReadOnly(true);

        gridLayout_2->addWidget(textEdit, 0, 1, 1, 1);

        textEdit_2 = new QTextEdit(gridLayoutWidget_2);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setBaseSize(QSize(0, 0));
        textEdit_2->setAutoFillBackground(true);
        textEdit_2->setStyleSheet(QString::fromUtf8("color: rgb(249, 240, 107);\n"
"font: 700 11pt \"Comfortaa\";\n"
"background-image: url(:/resources/pexels-photo-1114690.jpeg);"));
        textEdit_2->setReadOnly(true);

        gridLayout_2->addWidget(textEdit_2, 2, 1, 1, 1);

        Romans_13 = new QPushButton(gridLayoutWidget_2);
        Romans_13->setObjectName("Romans_13");
        Romans_13->setStyleSheet(QString::fromUtf8("background-color: rgb(129, 61, 156);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 11pt \"Comfortaa\";"));

        gridLayout_2->addWidget(Romans_13, 1, 1, 1, 1);

        Proverbs_7 = new QPushButton(gridLayoutWidget_2);
        Proverbs_7->setObjectName("Proverbs_7");
        Proverbs_7->setStyleSheet(QString::fromUtf8("background-color: rgb(129, 61, 156);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 11pt \"Comfortaa\";"));

        gridLayout_2->addWidget(Proverbs_7, 3, 1, 1, 1);

        pushButton_10 = new QPushButton(centralwidget);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(660, 570, 131, 41));
        pushButton_10->setStyleSheet(QString::fromUtf8("background-color: rgb(181, 131, 90);\n"
"color: rgb(246, 245, 244);\n"
"font: 700 15pt \"Comfortaa\";"));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(500, 570, 131, 41));
        pushButton_9->setStyleSheet(QString::fromUtf8("background-color: rgb(181, 131, 90);\n"
"color: rgb(246, 245, 244);\n"
"\n"
"selection-color: rgb(51, 209, 122);\n"
"font: 700 15pt \"Comfortaa\";"));
        pushButton_11 = new QPushButton(centralwidget);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setGeometry(QRect(340, 570, 131, 41));
        pushButton_11->setStyleSheet(QString::fromUtf8("background-color: rgb(181, 131, 90);\n"
"color: rgb(246, 245, 244);\n"
"\n"
"selection-color: rgb(51, 209, 122);\n"
"font: 700 15pt \"Comfortaa\";"));
        pushButton_quit = new QPushButton(centralwidget);
        pushButton_quit->setObjectName("pushButton_quit");
        pushButton_quit->setGeometry(QRect(980, 10, 80, 41));
        pushButton_quit->setStyleSheet(QString::fromUtf8("background-color: rgb(129, 61, 156);\n"
"color: rgb(246, 97, 161);\n"
"font: 700 15pt \"Comfortaa\";"));
        pushButton_12 = new QPushButton(centralwidget);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setGeometry(QRect(820, 570, 131, 41));
        pushButton_12->setStyleSheet(QString::fromUtf8("background-color: rgb(181, 131, 90);\n"
"color: rgb(246, 245, 244);\n"
"font: 700 15pt \"Comfortaa\";"));
        Daily_verse->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Daily_verse);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1280, 23));
        Daily_verse->setMenuBar(menubar);
        statusbar = new QStatusBar(Daily_verse);
        statusbar->setObjectName("statusbar");
        Daily_verse->setStatusBar(statusbar);

        retranslateUi(Daily_verse);

        QMetaObject::connectSlotsByName(Daily_verse);
    } // setupUi

    void retranslateUi(QMainWindow *Daily_verse)
    {
        Daily_verse->setWindowTitle(QCoreApplication::translate("Daily_verse", "Daily_verse", nullptr));
        Romans_12->setText(QCoreApplication::translate("Daily_verse", "Read Romans Chapter 12", nullptr));
        pushButton->setText(QCoreApplication::translate("Daily_verse", "Read Psalm Chapter 143", nullptr));
        textEdit_3->setHtml(QCoreApplication::translate("Daily_verse", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Comfortaa'; font-size:13pt; font-weight:700; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        Proverbs_12->setText(QCoreApplication::translate("Daily_verse", "Read Proverbs Chapter 12", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Daily_verse", "About", nullptr));
        goto_page2->setText(QCoreApplication::translate("Daily_verse", "Next", nullptr));
        Romans_14->setText(QCoreApplication::translate("Daily_verse", "Read Full Text", nullptr));
        Romans_13->setText(QCoreApplication::translate("Daily_verse", "Read Isiah Chapter 65", nullptr));
        Proverbs_7->setText(QCoreApplication::translate("Daily_verse", "Read Proverbs Chapter 7", nullptr));
        pushButton_10->setText(QCoreApplication::translate("Daily_verse", "Devotions", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Daily_verse", "Prayers", nullptr));
        pushButton_11->setText(QCoreApplication::translate("Daily_verse", "Faith", nullptr));
        pushButton_quit->setText(QCoreApplication::translate("Daily_verse", "Quit", nullptr));
        pushButton_12->setText(QCoreApplication::translate("Daily_verse", "Topics", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Daily_verse: public Ui_Daily_verse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DAILY_VERSE_H
