#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"QDialog"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //弹窗
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QDialog*dailog=new QDialog(this);
    dailog->setWindowTitle("对话框标题");
    //设置对话框的尺寸
    dailog->resize(400,300);
    //通过show方法可以显示，事实上，show方法是一个非模态对话框，当对话窗弹出时，允许操作父窗口
    //exec方法则是模态对话框，作用相反
    // dailog->show();
    dailog->exec();
    //delete dailog
    //此时，如果使用delete dailog 的话。按钮点一下，窗口就会消失
    //正确的做法是把delete和关闭按钮的信号关联起来
    //在用户点击关闭时，触发delete
    //qt设置了一个属性，可以通过设置属性完成上述操作
    dailog->setAttribute(Qt::WA_DeleteOnClose);
}


void MainWindow::on_pushButton_2_clicked()
{
    //新建一个c++类
}

