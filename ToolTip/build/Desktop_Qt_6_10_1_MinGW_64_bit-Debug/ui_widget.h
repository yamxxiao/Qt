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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *button_1;
    QPushButton *button_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        button_1 = new QPushButton(Widget);
        button_1->setObjectName("button_1");
        button_1->setGeometry(QRect(150, 280, 99, 28));
        button_2 = new QPushButton(Widget);
        button_2->setObjectName("button_2");
        button_2->setGeometry(QRect(430, 280, 99, 28));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        button_1->setText(QCoreApplication::translate("Widget", "\344\270\234\345\214\227\351\233\250\345\247\220", nullptr));
        button_2->setText(QCoreApplication::translate("Widget", "\350\200\201\350\222\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
