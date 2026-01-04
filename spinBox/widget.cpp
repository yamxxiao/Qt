#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //微调按钮
    //设置取值范围
    ui->spinBox->setRange(1,5);
    //设置初始值
    ui->spinBox->setValue(1);
}

Widget::~Widget()
{
    delete ui;
}
