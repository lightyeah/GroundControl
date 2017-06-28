#ifndef MAINWINDOW_H
#define MAINWINDOW_H

//ifdef test  for testmode
#define _TEST

#include <QMainWindow>
#include <common.h>
#include <udpcom.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void messageBrowerPrint(QString m, int sendtype);//输出类型决定输出颜色
    void commandSend();//命令行输入

private:
    Ui::MainWindow *ui;
    //class
    UDPCOM *UdpCom;
    //variable
    int TabMode = 1;//标签栏状态，默认为Car

    //function
    void UISet();
    void SSConnect();//信号与槽的连接
};

#endif // MAINWINDOW_H
