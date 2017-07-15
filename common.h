#ifndef COMMON_H
#define COMMON_H

//for MainWindow messagebrowser
#define SENDTYPE_GROUND            0
#define SENDTYPE_CAR               1
#define SENDTYPE_SATELLITE         2


//for tab switch
#define TABMODE_CAR                1
#define TABMODE_SATELLITE          2
#endif // COMMON_H

//for udp
#define UDP_PORT                   45454
#define CAR_ADDRESS                "10.2.10.228"//锁定ip地址
#define SATELLITE_ADDRESS          "1.1.1.1"

//for vlc
#include <VLCQtCore/Common.h>
#include <VLCQtCore/Instance.h>
#include <VLCQtCore/Media.h>
#include <VLCQtCore/MediaPlayer.h>
#define FIXEDCARURL                "udp://@:34511"//锁定视频流地址
#define FIXEDSATELLITEURL          "udp://@:44444"

//for control mode
/*
 * 单步控制模式  1
 * 连续控制模式  2
*/
#define CARSTEPMODE                  1
#define CARSUSTAINMODE               2

//for tab switch
#define CARTAB                       0
#define SATELLITETAB                 1
