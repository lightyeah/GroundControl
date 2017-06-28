#include "udpcom.h"
#include <QUdpSocket>
#include <QHostInfo>
#include <QProcess>
#include <QNetworkInterface>
#include <QString>
#include <QDebug>

UDPCOM::UDPCOM(QObject *parent) : QObject(parent)
{
    UdpSocket = new QUdpSocket(this);//创建一个socket对象
    Port = UDP_PORT;
    //此处的bind是个重载函数，连接本机的port端口，采用ShareAddress模式(即允许其它的服务连接到相同的地址和端口，特别是
    //用在多客户端监听同一个服务器端口等时特别有效)，和ReuseAddressHint模式(重新连接服务器)
    UdpSocket->bind(Port,QUdpSocket::ShareAddress | QUdpSocket::ReuseAddressHint);
    connect(UdpSocket,SIGNAL(readyRead()),this,SLOT(processPendingDatagrams()));
}

void UDPCOM::sendMessage(QString m, int tabmode)
{
    QByteArray data;    //字节数组
    QHostAddress address;
    int a;
    if(m=="")return;//空字节不发送
    data = m.toLatin1();
    //data = QByteArray("test\r\n");
    switch(tabmode)
    {
    case TABMODE_CAR:
        address = QHostAddress(CAR_ADDRESS);
        //UdpSocket->writeDatagram(data,data.length(),address,Port);
        a = UdpSocket->writeDatagram(data,data.length(),QHostAddress::Broadcast,Port);
        qDebug()<<a;
        break;
    case TABMODE_SATELLITE:
        address = QHostAddress(SATELLITE_ADDRESS);
        UdpSocket->writeDatagram(data,data.length(),address,Port);
        break;
    default:
        break;
    }
}

void UDPCOM::processPendingDatagrams()
{
    QByteArray datagram;
    while(UdpSocket->hasPendingDatagrams())
    {
        datagram.resize(UdpSocket->pendingDatagramSize());
        UdpSocket->readDatagram(datagram.data(),datagram.size());
    }
    QString m = QString(datagram);
    emit backMessage(m,1);
}


