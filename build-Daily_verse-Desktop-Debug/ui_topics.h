/********************************************************************************
** Form generated from reading UI file 'topics.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOPICS_H
#define UI_TOPICS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_topics
{
public:
    QTextBrowser *textBrowser;
    QComboBox *comboBox;
    QPushButton *backButton_main_2;

    void setupUi(QWidget *topics)
    {
        if (topics->objectName().isEmpty())
            topics->setObjectName("topics");
        topics->resize(800, 427);
        topics->setStyleSheet(QString::fromUtf8("background-color: rgb(222, 221, 218);"));
        textBrowser = new QTextBrowser(topics);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(40, 140, 461, 171));
        textBrowser->setStyleSheet(QString::fromUtf8("background-color: rgb(233, 223, 236);\n"
"color: rgb(36, 31, 49);\n"
""));
        comboBox = new QComboBox(topics);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(40, 90, 171, 31));
        comboBox->setStyleSheet(QString::fromUtf8("color: rgb(99, 69, 44);"));
        backButton_main_2 = new QPushButton(topics);
        backButton_main_2->setObjectName("backButton_main_2");
        backButton_main_2->setGeometry(QRect(410, 370, 91, 41));
        backButton_main_2->setStyleSheet(QString::fromUtf8("background-color: rgb(129, 61, 156);\n"
"color: rgb(51, 209, 122);\n"
"font: 700 15pt \"Comfortaa\";"));

        retranslateUi(topics);

        QMetaObject::connectSlotsByName(topics);
    } // setupUi

    void retranslateUi(QWidget *topics)
    {
        topics->setWindowTitle(QCoreApplication::translate("topics", "Form", nullptr));
        backButton_main_2->setText(QCoreApplication::translate("topics", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class topics: public Ui_topics {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOPICS_H
