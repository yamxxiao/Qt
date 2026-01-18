#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"QFileDialog"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QIcon icon(":/notebook.png");
    this->setWindowIcon(icon);
    this->setWindowTitle("记事本");
    menubar=this->menuBar();
    QMenu* menu=new  QMenu("文件");
    menubar->addMenu(menu);

    QAction* save=new QAction("保存");
    QAction* open=new QAction("打开");
    menu->addAction(open);
    menu->addAction(save);

    edit=new QPlainTextEdit();
    QFont  font;
    font.setPixelSize(30);
    edit->setFont(font);
    this->setCentralWidget(edit);

    connect(open,&QAction::triggered,this,&MainWindow::openFile);
    connect(save,&QAction::triggered,this,&MainWindow::saveFile);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::openFile()
{
    //先弹出对话框
    QString path=QFileDialog::getOpenFileName(this);
    //展示
    QStatusBar* statusbar=this ->statusBar();
    statusbar->showMessage(path);
    QFile file(path);
    bool ret=file.open(QIODevice::ReadOnly);
    if(!ret)
    {
        statusbar->showMessage(path+"打开失败！");
        return;
    }
    QString text=file.readAll();
    file.close();
    edit->setPlainText(text);
}
void MainWindow::saveFile()
{
    //保存
    QString path=QFileDialog::getSaveFileName(this);
    QStatusBar* bar=this->statusBar();
    bar->showMessage(path);
    //构造file对象
    QFile file(path);
   bool ret= file.open(QFile::WriteOnly);
    if(!ret)
   {
       bar->showMessage(path+"保存失败");
        return;
    }
    //写文件
    const QString& text=edit->toPlainText();
    file.write(text.toUtf8());
    file.close();

}
