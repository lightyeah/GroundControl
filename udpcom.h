#ifndef UDPCOM_H
#define UDPCOM_H

#include <QObject>
#include <common.h>
#include <QUdpSocket>
#include <QHostInfo>
#include <QProcess>
#include <QNetworkInterface>
#include <QString>
#include <QDebug>

class QUdpSocket;

enum MessageType{Message,NewParticipant,ParticipantLeft,FileName,Refuse};


class UDPCOM : public QObject
{
    Q_OBJECT
public:
    explicit UDPCOM(QObject *parent = 0);

    QString commandMessage;
   // QString backMessage;

signals:
    void backMessage(QString,int);
public slots:
    void sendMessage(QString m,int tabmode);
    void setCarIpAddress(QString ip);
    void setSatelliteIpAddress(QString ip);

protected:    
    QHostAddress CarIpAddress;//小车ip地址
    QHostAddress SatelliteIpAddress;

private:
    QUdpSocket *UdpSocket;
    qint16 Port;



private slots:
    void processPendingDatagrams();

};

#endif // UDPCOM_H
