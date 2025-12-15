#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QIcon icon(":/file.png");
    ui->pushButton->setIcon(icon);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    //设置窗口样式
    this->setStyleSheet("background-color:white;");
    //设置输入框样式
    ui->plainTextEdit->setStyleSheet("background-color:white;color:black;");
    //设置按钮样式
    ui->pushButton->setStyleSheet("color:black");
    ui->pushButton_2->setStyleSheet("color:black");
}


void Widget::on_pushButton_2_clicked()
{
    //设置窗口样式
    this->setStyleSheet("background-color:black;");
    //设置输入框样式
    ui->plainTextEdit->setStyleSheet("background-color:black;color:white;");
    //设置按钮样式
    ui->pushButton->setStyleSheet("color:white");
    ui->pushButton_2->setStyleSheet("color:white");
}

