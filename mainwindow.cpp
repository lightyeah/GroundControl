#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    _media(0)
{
    TabMode = TABMODE_CAR;
    UdpCom = new UDPCOM(this);
    _instance = new VlcInstance(VlcCommon::args(),this);
    _player = new VlcMediaPlayer(_instance);
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
    QString time = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss#");
    m = time+m;
    switch (sendtype)
    {
    case SENDTYPE_GROUND:
        ui->MessageBrowser->setTextColor(QColor(255,0,0,127));
        ui->MessageBrowser->insertPlainText(tr("Ground==>"));
        switch (TabMode)
        {
        case TABMODE_CAR:
            ui->MessageBrowser->setTextColor(QColor(0,255,0,127));
            ui->MessageBrowser->insertPlainText(tr("Car:\r\n"));
            ui->MessageBrowser->setTextColor(QColor(255,255,255,127));
            ui->MessageBrowser->insertPlainText(m);
            break;
        case TABMODE_SATELLITE:
            ui->MessageBrowser->setTextColor(QColor(255,255,0,127));
            ui->MessageBrowser->insertPlainText(tr("Satellite:\r\n"));
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
        ui->MessageBrowser->insertPlainText("Ground:\r\n");
        ui->MessageBrowser->setTextColor(QColor(255,255,255,127));
        ui->MessageBrowser->insertPlainText(m);
        break;
    case SENDTYPE_SATELLITE:
        ui->MessageBrowser->setTextColor(QColor(255,255,0,127));
        ui->MessageBrowser->insertPlainText(tr("Satellite==>"));
        ui->MessageBrowser->setTextColor(QColor(255,0,0,127));
        ui->MessageBrowser->insertPlainText("Ground:\r\n");
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
    if(m=="")return;
    m = m + "\r\n";
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
    ui->MessageBrowser->setReadOnly(true);
    _player->setVideoWidget(ui->video);
    ui->video->setMediaPlayer(_player);
}

void MainWindow::SSConnect()
{
    QObject::connect(ui->sendButton,SIGNAL(clicked(bool)),this,SLOT(commandSend()));
    QObject::connect(UdpCom,SIGNAL(backMessage(QString,int)),this,SLOT(messageBrowerPrint(QString,int)));
    QObject::connect(ui->connectButton,SIGNAL(clicked(bool)),this,SLOT(openUrl()));
}

void MainWindow::openUrl()
{
    QString url = FIXEDCARURL;

    if (url.isEmpty())
        return;

    _media = new VlcMedia(url, _instance);

    _player->open(_media);
}
