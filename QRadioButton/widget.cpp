#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //也可以添加一个默认选项
    ui->radioButton_male->setChecked(true);
    //也可以禁用其他选项
    //checkable 只是能够让按钮·不被选中，但是任然可以响应点击事件
    // ui->radioButton_LGBT->setCheckable(false);
    // ui->radioButton_LGBT->setEnabled(true);
    //使用这个就可以完全实现禁止使用选项
    ui->radioButton_LGBT->setEnabled(false);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_radioButton_male_clicked()
{
    //跟新label的内容
    ui->label->setText("您选择的性别为：男");
}


void Widget::on_radioButton_female_clicked()
{
     ui->label->setText("您选择的性别为：女");
}


void Widget::on_radioButton_LGBT_clicked()
{
     ui->label->setText("您选择的性别为：LGBT");
}

