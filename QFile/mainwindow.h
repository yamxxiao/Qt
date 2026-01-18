#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include"QPlainTextEdit"
#include <QMainWindow>
#include"QMenuBar"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void openFile();
    void saveFile();
private:
    Ui::MainWindow *ui;
    QMenuBar* menubar;
    QPlainTextEdit* edit;
};

#endif // MAINWINDOW_H
