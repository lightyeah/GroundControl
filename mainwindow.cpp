#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>
#include <QScrollArea>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    TabMode = TABMODE_CAR;
    UdpCom = new UDPCOM(this);
    ui->setupUi(this);
    UISet();
    SSConnect();


}

MainWindow::~MainWindow()
{
    delete ui;
}
/**
 * @brief MainWindow::messageBrowerPrint
 * @param m
 * @param sendtype
 */
void MainWindow::messageBrowerPrint(QString m, int sendtype)
{
    switch (sendtype)
    {
    case SENDTYPE_GROUND:
        ui->MessageBrowser->setTextColor(QColor(255,0,0,127));
        ui->MessageBrowser->insertPlainText(tr("Ground==>"));
        switch (TabMode)
        {
        case TABMODE_CAR:
            ui->MessageBrowser->setTextColor(QColor(0,255,0,127));
            ui->MessageBrowser->insertPlainText(tr("Car:#"));
            ui->MessageBrowser->setTextColor(QColor(255,255,255,127));
            ui->MessageBrowser->insertPlainText(m);
            break;
        case TABMODE_SATELLITE:
            ui->MessageBrowser->setTextColor(QColor(255,255,0,127));
            ui->MessageBrowser->insertPlainText(tr("Satellite:#"));
            ui->MessageBrowser->setTextColor(QColor(255,255,255,127));
            ui->MessageBrowser->insertPlainText(m);
            break;
        default:
            break;
        }
        break;
    case SENDTYPE_CAR:
        ui->MessageBrowser->setTextColor(QColor(0,255,0,127));
        ui->MessageBrowser->insertPlainText(tr("Car==>"));
        ui->MessageBrowser->setTextColor(QColor(255,0,0,127));
        ui->MessageBrowser->insertPlainText("Ground:#");
        ui->MessageBrowser->setTextColor(QColor(255,255,255,127));
        ui->MessageBrowser->insertPlainText(m);
        break;
    case SENDTYPE_SATELLITE:
        ui->MessageBrowser->setTextColor(QColor(255,255,0,127));
        ui->MessageBrowser->insertPlainText(tr("Satellite==>"));
        ui->MessageBrowser->setTextColor(QColor(255,0,0,127));
        ui->MessageBrowser->insertPlainText("Ground:#");
        ui->MessageBrowser->setTextColor(QColor(255,255,255,127));
        ui->MessageBrowser->insertPlainText(m);
        break;
    default:
        break;
    }
    return;
}
/**
 * @brief MainWindow::commandEditInput
 */
void MainWindow::commandSend()
{
    QString m = NULL;
    m = ui->commandEdit->text();
    m = m + "\r\n";
    if(m=="")return;
    ui->MessageBrowser->verticalScrollBar();
    UdpCom->sendMessage(m,TabMode);
    ui->commandEdit->clear();

    //echo
    messageBrowerPrint(m,SENDTYPE_GROUND);
}

void MainWindow::UISet()
{
    setWindowTitle(tr("GroundControl"));
    ui->MessageBrowser->setStyleSheet("background:black;");
    //ui->MessageBrowser->setReadOnly(true);
}

void MainWindow::SSConnect()
{
    QObject::connect(ui->sendButton,SIGNAL(clicked(bool)),this,SLOT(commandSend()));
    QObject::connect(UdpCom,SIGNAL(backMessage(QString,int)),this,SLOT(messageBrowerPrint(QString,int)));
}
