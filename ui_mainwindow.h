/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <VLCQtWidgets/WidgetVideo.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *leftVerticalLayout;
    QTextBrowser *MessageBrowser;
    QHBoxLayout *leftHorizontalLayout;
    QLineEdit *commandEdit;
    QPushButton *sendButton;
    QTabWidget *tabWidget;
    QWidget *carTab;
    QGridLayout *gridLayout_2;
    QVBoxLayout *rightVerticalLayout;
    VlcWidgetVideo *video;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *vlccontrolVerticalLayout;
    QPushButton *connectButton;
    QPushButton *pauseButton;
    QPushButton *saveButton;
    QGridLayout *gridLayout;
    QPushButton *forwardButton;
    QPushButton *turnleftButton;
    QPushButton *turnrightButton;
    QPushButton *backButton;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *stepRadioButton;
    QRadioButton *sustainRadioButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *distanceLineEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *angleLineEdit;
    QWidget *satelliteTab;
    QGridLayout *gridLayout_6;
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_8;
    QGridLayout *gridLayout_4;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_3;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QGridLayout *gridLayout_5;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLabel *label_6;
    QSpinBox *spinBox;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(907, 518);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setStyleSheet(QStringLiteral("background:rgb(170, 170, 255)"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        leftVerticalLayout = new QVBoxLayout();
        leftVerticalLayout->setSpacing(6);
        leftVerticalLayout->setObjectName(QStringLiteral("leftVerticalLayout"));
        MessageBrowser = new QTextBrowser(centralWidget);
        MessageBrowser->setObjectName(QStringLiteral("MessageBrowser"));

        leftVerticalLayout->addWidget(MessageBrowser);

        leftHorizontalLayout = new QHBoxLayout();
        leftHorizontalLayout->setSpacing(6);
        leftHorizontalLayout->setObjectName(QStringLiteral("leftHorizontalLayout"));
        commandEdit = new QLineEdit(centralWidget);
        commandEdit->setObjectName(QStringLiteral("commandEdit"));
        sizePolicy.setHeightForWidth(commandEdit->sizePolicy().hasHeightForWidth());
        commandEdit->setSizePolicy(sizePolicy);
        commandEdit->setStyleSheet(QStringLiteral("font: 25 12pt \"3ds Light\";"));

        leftHorizontalLayout->addWidget(commandEdit);

        sendButton = new QPushButton(centralWidget);
        sendButton->setObjectName(QStringLiteral("sendButton"));
        sizePolicy.setHeightForWidth(sendButton->sizePolicy().hasHeightForWidth());
        sendButton->setSizePolicy(sizePolicy);
        sendButton->setStyleSheet(QLatin1String("\n"
"font: 12pt \"Bernard MT Condensed\";"));

        leftHorizontalLayout->addWidget(sendButton);

        leftHorizontalLayout->setStretch(0, 3);
        leftHorizontalLayout->setStretch(1, 1);

        leftVerticalLayout->addLayout(leftHorizontalLayout);

        leftVerticalLayout->setStretch(0, 10);
        leftVerticalLayout->setStretch(1, 1);

        horizontalLayout_4->addLayout(leftVerticalLayout);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setIconSize(QSize(42, 42));
        carTab = new QWidget();
        carTab->setObjectName(QStringLiteral("carTab"));
        carTab->setAutoFillBackground(false);
        gridLayout_2 = new QGridLayout(carTab);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        rightVerticalLayout = new QVBoxLayout();
        rightVerticalLayout->setSpacing(6);
        rightVerticalLayout->setObjectName(QStringLiteral("rightVerticalLayout"));
        video = new VlcWidgetVideo(carTab);
        video->setObjectName(QStringLiteral("video"));
        sizePolicy.setHeightForWidth(video->sizePolicy().hasHeightForWidth());
        video->setSizePolicy(sizePolicy);

        rightVerticalLayout->addWidget(video);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        vlccontrolVerticalLayout = new QVBoxLayout();
        vlccontrolVerticalLayout->setSpacing(6);
        vlccontrolVerticalLayout->setObjectName(QStringLiteral("vlccontrolVerticalLayout"));
        connectButton = new QPushButton(carTab);
        connectButton->setObjectName(QStringLiteral("connectButton"));
        sizePolicy.setHeightForWidth(connectButton->sizePolicy().hasHeightForWidth());
        connectButton->setSizePolicy(sizePolicy);
        connectButton->setStyleSheet(QStringLiteral("font: 12pt \"Bernard MT Condensed\";"));

        vlccontrolVerticalLayout->addWidget(connectButton);

        pauseButton = new QPushButton(carTab);
        pauseButton->setObjectName(QStringLiteral("pauseButton"));
        sizePolicy.setHeightForWidth(pauseButton->sizePolicy().hasHeightForWidth());
        pauseButton->setSizePolicy(sizePolicy);
        pauseButton->setStyleSheet(QStringLiteral("font: 12pt \"Bernard MT Condensed\";"));

        vlccontrolVerticalLayout->addWidget(pauseButton);

        saveButton = new QPushButton(carTab);
        saveButton->setObjectName(QStringLiteral("saveButton"));
        sizePolicy.setHeightForWidth(saveButton->sizePolicy().hasHeightForWidth());
        saveButton->setSizePolicy(sizePolicy);
        saveButton->setStyleSheet(QStringLiteral("font: 12pt \"Bernard MT Condensed\";"));

        vlccontrolVerticalLayout->addWidget(saveButton);

        vlccontrolVerticalLayout->setStretch(0, 1);
        vlccontrolVerticalLayout->setStretch(1, 1);
        vlccontrolVerticalLayout->setStretch(2, 1);

        horizontalLayout_3->addLayout(vlccontrolVerticalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        forwardButton = new QPushButton(carTab);
        forwardButton->setObjectName(QStringLiteral("forwardButton"));
        sizePolicy.setHeightForWidth(forwardButton->sizePolicy().hasHeightForWidth());
        forwardButton->setSizePolicy(sizePolicy);
        forwardButton->setStyleSheet(QStringLiteral("font: 12pt \"Bernard MT Condensed\";"));

        gridLayout->addWidget(forwardButton, 0, 0, 1, 2);

        turnleftButton = new QPushButton(carTab);
        turnleftButton->setObjectName(QStringLiteral("turnleftButton"));
        sizePolicy.setHeightForWidth(turnleftButton->sizePolicy().hasHeightForWidth());
        turnleftButton->setSizePolicy(sizePolicy);
        turnleftButton->setStyleSheet(QStringLiteral("font: 12pt \"Bernard MT Condensed\";"));

        gridLayout->addWidget(turnleftButton, 1, 0, 1, 1);

        turnrightButton = new QPushButton(carTab);
        turnrightButton->setObjectName(QStringLiteral("turnrightButton"));
        sizePolicy.setHeightForWidth(turnrightButton->sizePolicy().hasHeightForWidth());
        turnrightButton->setSizePolicy(sizePolicy);
        turnrightButton->setStyleSheet(QStringLiteral("font: 12pt \"Bernard MT Condensed\";"));

        gridLayout->addWidget(turnrightButton, 1, 1, 1, 1);

        backButton = new QPushButton(carTab);
        backButton->setObjectName(QStringLiteral("backButton"));
        sizePolicy.setHeightForWidth(backButton->sizePolicy().hasHeightForWidth());
        backButton->setSizePolicy(sizePolicy);
        backButton->setStyleSheet(QStringLiteral("font: 12pt \"Bernard MT Condensed\";"));

        gridLayout->addWidget(backButton, 2, 0, 1, 2);


        horizontalLayout_3->addLayout(gridLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        stepRadioButton = new QRadioButton(carTab);
        stepRadioButton->setObjectName(QStringLiteral("stepRadioButton"));
        sizePolicy.setHeightForWidth(stepRadioButton->sizePolicy().hasHeightForWidth());
        stepRadioButton->setSizePolicy(sizePolicy);
        stepRadioButton->setStyleSheet(QStringLiteral("font: 12pt \"Bernard MT Condensed\";"));

        verticalLayout_2->addWidget(stepRadioButton);

        sustainRadioButton = new QRadioButton(carTab);
        sustainRadioButton->setObjectName(QStringLiteral("sustainRadioButton"));
        sizePolicy.setHeightForWidth(sustainRadioButton->sizePolicy().hasHeightForWidth());
        sustainRadioButton->setSizePolicy(sizePolicy);
        sustainRadioButton->setStyleSheet(QStringLiteral("font: 12pt \"Bernard MT Condensed\";"));

        verticalLayout_2->addWidget(sustainRadioButton);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(carTab);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setStyleSheet(QStringLiteral("font: 12pt \"Bernard MT Condensed\";"));

        horizontalLayout_2->addWidget(label);

        distanceLineEdit = new QLineEdit(carTab);
        distanceLineEdit->setObjectName(QStringLiteral("distanceLineEdit"));
        sizePolicy.setHeightForWidth(distanceLineEdit->sizePolicy().hasHeightForWidth());
        distanceLineEdit->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(distanceLineEdit);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 2);

        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(carTab);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setStyleSheet(QStringLiteral("font: 12pt \"Bernard MT Condensed\";"));

        horizontalLayout->addWidget(label_2);

        angleLineEdit = new QLineEdit(carTab);
        angleLineEdit->setObjectName(QStringLiteral("angleLineEdit"));
        sizePolicy.setHeightForWidth(angleLineEdit->sizePolicy().hasHeightForWidth());
        angleLineEdit->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(angleLineEdit);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 2);

        verticalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 1);
        horizontalLayout_3->setStretch(2, 1);

        rightVerticalLayout->addLayout(horizontalLayout_3);

        rightVerticalLayout->setStretch(0, 3);
        rightVerticalLayout->setStretch(1, 2);

        gridLayout_2->addLayout(rightVerticalLayout, 0, 0, 1, 1);

        tabWidget->addTab(carTab, QString());
        satelliteTab = new QWidget();
        satelliteTab->setObjectName(QStringLiteral("satelliteTab"));
        gridLayout_6 = new QGridLayout(satelliteTab);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget_2 = new QWidget(satelliteTab);
        widget_2->setObjectName(QStringLiteral("widget_2"));

        verticalLayout->addWidget(widget_2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        pushButton = new QPushButton(satelliteTab);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_4 = new QPushButton(satelliteTab);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(pushButton_4, 0, 1, 1, 1);

        pushButton_5 = new QPushButton(satelliteTab);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(pushButton_5, 0, 2, 1, 1);

        pushButton_2 = new QPushButton(satelliteTab);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(pushButton_2, 1, 0, 1, 1);

        pushButton_6 = new QPushButton(satelliteTab);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(pushButton_6, 1, 1, 1, 1);

        pushButton_7 = new QPushButton(satelliteTab);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(pushButton_7, 1, 2, 1, 1);

        pushButton_3 = new QPushButton(satelliteTab);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(pushButton_3, 2, 0, 1, 1);

        pushButton_8 = new QPushButton(satelliteTab);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(pushButton_8, 2, 1, 1, 1);

        pushButton_9 = new QPushButton(satelliteTab);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(pushButton_9, 2, 2, 1, 1);


        horizontalLayout_8->addLayout(gridLayout_4);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        radioButton = new QRadioButton(satelliteTab);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        sizePolicy.setHeightForWidth(radioButton->sizePolicy().hasHeightForWidth());
        radioButton->setSizePolicy(sizePolicy);

        gridLayout_5->addWidget(radioButton, 0, 0, 1, 2);

        radioButton_2 = new QRadioButton(satelliteTab);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        sizePolicy.setHeightForWidth(radioButton_2->sizePolicy().hasHeightForWidth());
        radioButton_2->setSizePolicy(sizePolicy);

        gridLayout_5->addWidget(radioButton_2, 1, 0, 1, 2);

        label_6 = new QLabel(satelliteTab);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        gridLayout_5->addWidget(label_6, 2, 0, 1, 1);

        spinBox = new QSpinBox(satelliteTab);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        sizePolicy.setHeightForWidth(spinBox->sizePolicy().hasHeightForWidth());
        spinBox->setSizePolicy(sizePolicy);

        gridLayout_5->addWidget(spinBox, 2, 1, 1, 1);


        horizontalLayout_8->addLayout(gridLayout_5);

        horizontalLayout_8->setStretch(0, 2);
        horizontalLayout_8->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_8);

        verticalLayout->setStretch(0, 4);
        verticalLayout->setStretch(1, 3);

        gridLayout_6->addLayout(verticalLayout, 0, 0, 1, 1);

        tabWidget->addTab(satelliteTab, QString());

        horizontalLayout_4->addWidget(tabWidget);

        horizontalLayout_4->setStretch(0, 2);
        horizontalLayout_4->setStretch(1, 3);

        gridLayout_3->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 907, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        sendButton->setText(QApplication::translate("MainWindow", "send", 0));
        connectButton->setText(QApplication::translate("MainWindow", "connect", 0));
        pauseButton->setText(QApplication::translate("MainWindow", "pause", 0));
        saveButton->setText(QApplication::translate("MainWindow", "save", 0));
        forwardButton->setText(QApplication::translate("MainWindow", "forward", 0));
        turnleftButton->setText(QApplication::translate("MainWindow", "turnleft", 0));
        turnrightButton->setText(QApplication::translate("MainWindow", "turnright", 0));
        backButton->setText(QApplication::translate("MainWindow", "backward", 0));
        stepRadioButton->setText(QApplication::translate("MainWindow", "step mode", 0));
        sustainRadioButton->setText(QApplication::translate("MainWindow", "sustain mode", 0));
        label->setText(QApplication::translate("MainWindow", "Distance", 0));
        label_2->setText(QApplication::translate("MainWindow", "angle", 0));
        tabWidget->setTabText(tabWidget->indexOf(carTab), QApplication::translate("MainWindow", "car", 0));
        pushButton->setText(QApplication::translate("MainWindow", "connect", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "X+", 0));
        pushButton_5->setText(QApplication::translate("MainWindow", "X-", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "pause", 0));
        pushButton_6->setText(QApplication::translate("MainWindow", "Y+", 0));
        pushButton_7->setText(QApplication::translate("MainWindow", "Y-", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "save", 0));
        pushButton_8->setText(QApplication::translate("MainWindow", "Z+", 0));
        pushButton_9->setText(QApplication::translate("MainWindow", " Z-", 0));
        radioButton->setText(QApplication::translate("MainWindow", "RadioButton", 0));
        radioButton_2->setText(QApplication::translate("MainWindow", "RadioButton", 0));
        label_6->setText(QApplication::translate("MainWindow", "angle", 0));
        tabWidget->setTabText(tabWidget->indexOf(satelliteTab), QApplication::translate("MainWindow", "satellite", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
