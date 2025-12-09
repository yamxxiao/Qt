#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //使用随机种子来控制伪随机
    srand(time(0));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_up_clicked()
{
    //通过日志查看button更新后的位置信息
    QRect rect=ui->pushButton->geometry();
    qDebug()<<rect;

    //使用setgeometry()函数来改变pushbutton的坐标
    ui->pushButton->setGeometry(rect.x(),rect.y()-5,rect.width(),rect.height());
}


void Widget::on_pushButton_right_clicked()
{

    QRect rect=ui->pushButton->geometry();
    qDebug()<<rect;

    ui->pushButton->setGeometry(rect.x()+5,rect.y(),rect.width(),rect.height());
}


void Widget::on_pushButton_down_clicked()
{
    QRect rect=ui->pushButton->geometry();
    qDebug()<<rect;

    ui->pushButton->setGeometry(rect.x(),rect.y()+5,rect.width(),rect.height());
}


void Widget::on_pushButton_left_clicked()
{
    QRect rect=ui->pushButton->geometry();
    qDebug()<<rect;

    ui->pushButton->setGeometry(rect.x()-5,rect.y(),rect.width(),rect.height());
}

void Widget::on_pushButton_clicked()
{
    qDebug()<<"开飞机的舒克被打了！";
}


void Widget::on_pushButton_2_clicked()
{

    qDebug()<<"正在下载原神中，请稍候...";
}


void Widget::on_pushButton_3_clicked()
{

 //先不使用
}


void Widget::on_pushButton_3_pressed()
{
    //先·获取整个窗口的尺寸防止生成的随机值跑出范围

    int width=this->geometry().width();
    int height=this->geometry().height();

    int x=rand()%width;
    int y=rand()%height;

    //移动位置使用clicked()信号时，需要响应鼠标点击然后放松进行传输信号，如果使用pressed()函数就只需要响应点击即可
    ui->pushButton_3->move(x,y);
    qDebug()<<"だまされたよ,ボダンを押ったのもダウンロードしてね！";
}
