/********************************************************************************
** Form generated from reading UI file 'page3.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE3_H
#define UI_PAGE3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_page3
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QTextEdit *display_page3_quote1_text;
    QPushButton *read_page3_quote1;
    QTextEdit *display_page3_quote2_text;
    QPushButton *read_page3_quote2;
    QPushButton *read_page3_quote3;
    QTextEdit *display_page3_quote3_text;
    QPushButton *back_to_page2;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QTextEdit *display_page3_quote5_text;
    QTextEdit *display_page3_quote4_text;
    QTextEdit *display_page3_quote6_text;
    QPushButton *read_page3_quote4;
    QPushButton *read_page3_quote5;
    QPushButton *read_page3_quote6;

    void setupUi(QWidget *page3)
    {
        if (page3->objectName().isEmpty())
            page3->setObjectName("page3");
        page3->resize(1280, 720);
        page3->setStyleSheet(QString::fromUtf8("background-color: rgb(222, 221, 218);"));
        formLayoutWidget = new QWidget(page3);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(20, 100, 611, 481));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 5, 0);
        display_page3_quote1_text = new QTextEdit(formLayoutWidget);
        display_page3_quote1_text->setObjectName("display_page3_quote1_text");
        display_page3_quote1_text->setStyleSheet(QString::fromUtf8("color: rgb(249, 240, 107);\n"
"\n"
"font: 700 12pt \"Comfortaa\";\n"
"background-image: url(:/resources/pexels-photo-2258536.jpeg);"));
        display_page3_quote1_text->setReadOnly(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, display_page3_quote1_text);

        read_page3_quote1 = new QPushButton(formLayoutWidget);
        read_page3_quote1->setObjectName("read_page3_quote1");
        read_page3_quote1->setStyleSheet(QString::fromUtf8("background-color: rgb(129, 61, 156);\n"
"color: rgb(255, 255, 255);\n"
"\n"
"font: 700 11pt \"Comfortaa\";"));

        formLayout->setWidget(1, QFormLayout::FieldRole, read_page3_quote1);

        display_page3_quote2_text = new QTextEdit(formLayoutWidget);
        display_page3_quote2_text->setObjectName("display_page3_quote2_text");
        display_page3_quote2_text->setStyleSheet(QString::fromUtf8("color: rgb(253, 193, 241);\n"
"font: 700 12pt \"Comfortaa\";\n"
"background-image: url(:/resources/sky-space-dark-galaxy.jpg);"));
        display_page3_quote2_text->setReadOnly(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, display_page3_quote2_text);

        read_page3_quote2 = new QPushButton(formLayoutWidget);
        read_page3_quote2->setObjectName("read_page3_quote2");
        read_page3_quote2->setStyleSheet(QString::fromUtf8("background-color: rgb(129, 61, 156);\n"
"color: rgb(255, 255, 255);\n"
"\n"
"font: 700 11pt \"Comfortaa\";"));

        formLayout->setWidget(3, QFormLayout::FieldRole, read_page3_quote2);

        read_page3_quote3 = new QPushButton(formLayoutWidget);
        read_page3_quote3->setObjectName("read_page3_quote3");
        read_page3_quote3->setStyleSheet(QString::fromUtf8("background-color: rgb(129, 61, 156);\n"
"color: rgb(255, 255, 255);\n"
"\n"
"font: 700 11pt \"Comfortaa\";"));

        formLayout->setWidget(5, QFormLayout::FieldRole, read_page3_quote3);

        display_page3_quote3_text = new QTextEdit(formLayoutWidget);
        display_page3_quote3_text->setObjectName("display_page3_quote3_text");
        display_page3_quote3_text->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Comfortaa\";\n"
"background-image: url(:/resources/pexels-photo-461940.jpeg);"));
        display_page3_quote3_text->setReadOnly(true);

        formLayout->setWidget(4, QFormLayout::FieldRole, display_page3_quote3_text);

        back_to_page2 = new QPushButton(page3);
        back_to_page2->setObjectName("back_to_page2");
        back_to_page2->setGeometry(QRect(590, 620, 91, 41));
        back_to_page2->setMaximumSize(QSize(1280, 720));
        back_to_page2->setStyleSheet(QString::fromUtf8("background-color: rgb(129, 61, 156);\n"
"color: rgb(51, 209, 122);\n"
"font: 700 15pt \"Comfortaa\";"));
        formLayoutWidget_2 = new QWidget(page3);
        formLayoutWidget_2->setObjectName("formLayoutWidget_2");
        formLayoutWidget_2->setGeometry(QRect(640, 100, 611, 481));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setContentsMargins(0, 0, 5, 0);
        display_page3_quote5_text = new QTextEdit(formLayoutWidget_2);
        display_page3_quote5_text->setObjectName("display_page3_quote5_text");
        display_page3_quote5_text->setStyleSheet(QString::fromUtf8("color: rgb(87, 227, 137);\n"
"font: 700 12pt \"Comfortaa\";\n"
"background-image: url(:/new/prefix1/resources/pexels-photo-172277.jpeg);"));
        display_page3_quote5_text->setReadOnly(true);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, display_page3_quote5_text);

        display_page3_quote4_text = new QTextEdit(formLayoutWidget_2);
        display_page3_quote4_text->setObjectName("display_page3_quote4_text");
        display_page3_quote4_text->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Comfortaa\";\n"
"background-image: url(:/resources/pexels-photo-235985.jpeg);"));
        display_page3_quote4_text->setReadOnly(true);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, display_page3_quote4_text);

        display_page3_quote6_text = new QTextEdit(formLayoutWidget_2);
        display_page3_quote6_text->setObjectName("display_page3_quote6_text");
        display_page3_quote6_text->setStyleSheet(QString::fromUtf8("color: rgb(98, 160, 234);\n"
"font: 700 12pt \"Comfortaa\";\n"
"background-image: url(:/resources/free-photo-of-photo-of-a-nebula-and-a-starry-sky.jpeg);"));
        display_page3_quote6_text->setReadOnly(true);

        formLayout_2->setWidget(4, QFormLayout::FieldRole, display_page3_quote6_text);

        read_page3_quote4 = new QPushButton(formLayoutWidget_2);
        read_page3_quote4->setObjectName("read_page3_quote4");
        read_page3_quote4->setStyleSheet(QString::fromUtf8("background-color: rgb(129, 61, 156);\n"
"color: rgb(255, 255, 255);\n"
"\n"
"font: 700 11pt \"Comfortaa\";"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, read_page3_quote4);

        read_page3_quote5 = new QPushButton(formLayoutWidget_2);
        read_page3_quote5->setObjectName("read_page3_quote5");
        read_page3_quote5->setStyleSheet(QString::fromUtf8("background-color: rgb(129, 61, 156);\n"
"color: rgb(255, 255, 255);\n"
"\n"
"font: 700 11pt \"Comfortaa\";"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, read_page3_quote5);

        read_page3_quote6 = new QPushButton(formLayoutWidget_2);
        read_page3_quote6->setObjectName("read_page3_quote6");
        read_page3_quote6->setStyleSheet(QString::fromUtf8("background-color: rgb(129, 61, 156);\n"
"color: rgb(255, 255, 255);\n"
"\n"
"font: 700 11pt \"Comfortaa\";"));

        formLayout_2->setWidget(5, QFormLayout::FieldRole, read_page3_quote6);


        retranslateUi(page3);

        QMetaObject::connectSlotsByName(page3);
    } // setupUi

    void retranslateUi(QWidget *page3)
    {
        page3->setWindowTitle(QCoreApplication::translate("page3", "Form", nullptr));
        read_page3_quote1->setText(QCoreApplication::translate("page3", "Read Isaiah Chapter 1", nullptr));
        read_page3_quote2->setText(QCoreApplication::translate("page3", "Read 1 Peter Chapter 1", nullptr));
        read_page3_quote3->setText(QCoreApplication::translate("page3", "Read Ruth Chapter 1", nullptr));
        back_to_page2->setText(QCoreApplication::translate("page3", "Back", nullptr));
        read_page3_quote4->setText(QCoreApplication::translate("page3", "Read James Chapter 1", nullptr));
        read_page3_quote5->setText(QCoreApplication::translate("page3", "Read Daniel Chapter 2", nullptr));
        read_page3_quote6->setText(QCoreApplication::translate("page3", "Read James Chapter 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class page3: public Ui_page3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE3_H
