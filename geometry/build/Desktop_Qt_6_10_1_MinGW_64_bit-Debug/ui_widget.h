/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_up;
    QPushButton *pushButton_right;
    QPushButton *pushButton_down;
    QPushButton *pushButton_left;
    QLabel *label;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(1347, 859);
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(920, 340, 181, 91));
        pushButton_up = new QPushButton(Widget);
        pushButton_up->setObjectName("pushButton_up");
        pushButton_up->setGeometry(QRect(970, 510, 99, 61));
        pushButton_right = new QPushButton(Widget);
        pushButton_right->setObjectName("pushButton_right");
        pushButton_right->setGeometry(QRect(1070, 570, 99, 61));
        pushButton_down = new QPushButton(Widget);
        pushButton_down->setObjectName("pushButton_down");
        pushButton_down->setGeometry(QRect(970, 630, 99, 61));
        pushButton_left = new QPushButton(Widget);
        pushButton_left->setObjectName("pushButton_left");
        pushButton_left->setGeometry(QRect(870, 570, 99, 61));
        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(380, 250, 201, 101));
        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(290, 460, 99, 28));
        pushButton_3 = new QPushButton(Widget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(580, 460, 99, 28));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "\345\274\200\351\243\236\346\234\272\347\232\204\350\210\222\345\205\213", nullptr));
        pushButton_up->setText(QCoreApplication::translate("Widget", "\344\270\212", nullptr));
        pushButton_right->setText(QCoreApplication::translate("Widget", "\345\217\263", nullptr));
        pushButton_down->setText(QCoreApplication::translate("Widget", "\344\270\213", nullptr));
        pushButton_left->setText(QCoreApplication::translate("Widget", "\345\267\246", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\346\211\2431\344\270\213\350\275\275\345\216\237\347\245\236\357\274\214\346\211\2432\345\210\240\351\231\244\345\216\237\347\245\236", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Widget", "1", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Widget", "2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
