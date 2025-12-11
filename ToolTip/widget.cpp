#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->button_1->setToolTip("die π不！老铁!");
    ui->button_1->setToolTipDuration(3000);

    ui->button_2->setToolTip("雨啊！");
    ui->button_2->setToolTipDuration(3000);
}

Widget::~Widget()
{
    delete ui;
}
