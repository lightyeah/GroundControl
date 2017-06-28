#-------------------------------------------------
#
# Project created by QtCreator 2017-06-25T18:43:43
#
#-------------------------------------------------

QT       += core gui\
            network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = goundcontrolv1_5
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    udpcom.cpp

HEADERS  += mainwindow.h \
    common.h \
    udpcom.h

FORMS    += mainwindow.ui
