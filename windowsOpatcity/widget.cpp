#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //用于更改窗口透明度,返回一个float类型

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_add_clicked()
{
    float opacity=this->windowOpacity();

    if(opacity>=1.0)
    {
        return;
    }
    qDebug()<<opacity;
    opacity+=0.1;
    this->setWindowOpacity(opacity);
}


void Widget::on_sub_clicked()
{
    float opacity=this->windowOpacity();

    if(opacity<=0.0)
    {
        return;
    }
    qDebug()<<opacity;
    opacity-=0.1;

    this->setWindowOpacity(opacity);
}

