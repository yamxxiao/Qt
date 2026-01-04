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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QRadioButton *radioButton_male;
    QRadioButton *radioButton_female;
    QRadioButton *radioButton_LGBT;
    QLabel *label;
    QLabel *label_2;
    QRadioButton *radioButton_han;
    QRadioButton *radioButton_other;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        radioButton_male = new QRadioButton(Widget);
        radioButton_male->setObjectName("radioButton_male");
        radioButton_male->setGeometry(QRect(290, 150, 119, 24));
        radioButton_female = new QRadioButton(Widget);
        radioButton_female->setObjectName("radioButton_female");
        radioButton_female->setGeometry(QRect(290, 200, 119, 24));
        radioButton_LGBT = new QRadioButton(Widget);
        radioButton_LGBT->setObjectName("radioButton_LGBT");
        radioButton_LGBT->setGeometry(QRect(290, 250, 119, 24));
        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(290, 90, 141, 19));
        label_2 = new QLabel(Widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(510, 90, 171, 19));
        radioButton_han = new QRadioButton(Widget);
        radioButton_han->setObjectName("radioButton_han");
        radioButton_han->setGeometry(QRect(510, 150, 119, 24));
        radioButton_other = new QRadioButton(Widget);
        radioButton_other->setObjectName("radioButton_other");
        radioButton_other->setGeometry(QRect(510, 200, 119, 24));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        radioButton_male->setText(QCoreApplication::translate("Widget", "\347\224\267", nullptr));
        radioButton_female->setText(QCoreApplication::translate("Widget", "\345\245\263", nullptr));
        radioButton_LGBT->setText(QCoreApplication::translate("Widget", "LGBT", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\346\202\250\351\200\211\346\213\251\347\232\204\346\200\247\345\210\253\344\270\272\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\346\202\250\351\200\211\346\213\251\347\232\204\347\261\215\350\264\257\344\270\272\357\274\232", nullptr));
        radioButton_han->setText(QCoreApplication::translate("Widget", "\346\261\211", nullptr));
        radioButton_other->setText(QCoreApplication::translate("Widget", "\345\205\266\344\273\226\345\260\221\346\225\260\345\220\215\346\227\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
