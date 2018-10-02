/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QLineEdit *tcpProfileName;
    QLineEdit *frontsidePort;
    QLabel *label;
    QLineEdit *monitor;
    QLabel *label_3;
    QLineEdit *backsidePort;
    QLabel *label_2;
    QCheckBox *cbLoadBalance;
    QLineEdit *pool;
    QComboBox *comboBox;
    QPlainTextEdit *teBacksideServers;
    QLabel *label_6;
    QLineEdit *httpProfileName;
    QLabel *label_8;
    QLineEdit *vipIP;
    QLabel *label_7;
    QLabel *label_4;
    QCheckBox *checkPersist;
    QComboBox *cbPersist;
    QLabel *label_9;
    QLineEdit *snatPool;
    QListView *listView;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(645, 555);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 0, 2, 1, 1);

        tcpProfileName = new QLineEdit(centralWidget);
        tcpProfileName->setObjectName(QStringLiteral("tcpProfileName"));

        gridLayout->addWidget(tcpProfileName, 0, 3, 1, 1);

        frontsidePort = new QLineEdit(centralWidget);
        frontsidePort->setObjectName(QStringLiteral("frontsidePort"));

        gridLayout->addWidget(frontsidePort, 2, 3, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        monitor = new QLineEdit(centralWidget);
        monitor->setObjectName(QStringLiteral("monitor"));

        gridLayout->addWidget(monitor, 0, 1, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        backsidePort = new QLineEdit(centralWidget);
        backsidePort->setObjectName(QStringLiteral("backsidePort"));

        gridLayout->addWidget(backsidePort, 1, 1, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        cbLoadBalance = new QCheckBox(centralWidget);
        cbLoadBalance->setObjectName(QStringLiteral("cbLoadBalance"));

        gridLayout->addWidget(cbLoadBalance, 3, 0, 1, 1);

        pool = new QLineEdit(centralWidget);
        pool->setObjectName(QStringLiteral("pool"));

        gridLayout->addWidget(pool, 2, 1, 1, 1);

        comboBox = new QComboBox(centralWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 3, 1, 1, 1);

        teBacksideServers = new QPlainTextEdit(centralWidget);
        teBacksideServers->setObjectName(QStringLiteral("teBacksideServers"));
        teBacksideServers->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        teBacksideServers->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        gridLayout->addWidget(teBacksideServers, 5, 1, 1, 1);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 1, 2, 1, 1);

        httpProfileName = new QLineEdit(centralWidget);
        httpProfileName->setObjectName(QStringLiteral("httpProfileName"));

        gridLayout->addWidget(httpProfileName, 1, 3, 1, 1);

        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 3, 2, 1, 1);

        vipIP = new QLineEdit(centralWidget);
        vipIP->setObjectName(QStringLiteral("vipIP"));

        gridLayout->addWidget(vipIP, 3, 3, 1, 1);

        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 2, 2, 1, 1);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 5, 0, 1, 1);

        checkPersist = new QCheckBox(centralWidget);
        checkPersist->setObjectName(QStringLiteral("checkPersist"));

        gridLayout->addWidget(checkPersist, 4, 0, 1, 1);

        cbPersist = new QComboBox(centralWidget);
        cbPersist->addItem(QString());
        cbPersist->addItem(QString());
        cbPersist->addItem(QString());
        cbPersist->addItem(QString());
        cbPersist->addItem(QString());
        cbPersist->addItem(QString());
        cbPersist->addItem(QString());
        cbPersist->addItem(QString());
        cbPersist->setObjectName(QStringLiteral("cbPersist"));

        gridLayout->addWidget(cbPersist, 4, 1, 1, 1);

        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 4, 2, 1, 1);

        snatPool = new QLineEdit(centralWidget);
        snatPool->setObjectName(QStringLiteral("snatPool"));

        gridLayout->addWidget(snatPool, 4, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);

        listView = new QListView(centralWidget);
        listView->setObjectName(QStringLiteral("listView"));

        verticalLayout->addWidget(listView);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 645, 21));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(monitor, backsidePort);
        QWidget::setTabOrder(backsidePort, pool);
        QWidget::setTabOrder(pool, cbLoadBalance);
        QWidget::setTabOrder(cbLoadBalance, comboBox);
        QWidget::setTabOrder(comboBox, checkPersist);
        QWidget::setTabOrder(checkPersist, cbPersist);
        QWidget::setTabOrder(cbPersist, teBacksideServers);
        QWidget::setTabOrder(teBacksideServers, tcpProfileName);
        QWidget::setTabOrder(tcpProfileName, httpProfileName);
        QWidget::setTabOrder(httpProfileName, frontsidePort);
        QWidget::setTabOrder(frontsidePort, vipIP);
        QWidget::setTabOrder(vipIP, listView);

        retranslateUi(MainWindow);

        cbPersist->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "ipBuild", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "TCP Profile Name:", nullptr));
        tcpProfileName->setText(QString());
        tcpProfileName->setPlaceholderText(QApplication::translate("MainWindow", "<tcp_profile_name>", nullptr));
        frontsidePort->setPlaceholderText(QApplication::translate("MainWindow", "<frontside_port>", nullptr));
        label->setText(QApplication::translate("MainWindow", "Monitor:", nullptr));
        monitor->setText(QString());
        monitor->setPlaceholderText(QApplication::translate("MainWindow", "<monitor_name>", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Pool:", nullptr));
        backsidePort->setPlaceholderText(QApplication::translate("MainWindow", "<backside_port>", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Backside Port:", nullptr));
        cbLoadBalance->setText(QApplication::translate("MainWindow", "Load Balancing", nullptr));
        pool->setPlaceholderText(QApplication::translate("MainWindow", "<pool>", nullptr));
        comboBox->setItemText(0, QApplication::translate("MainWindow", "Round Robin", nullptr));
        comboBox->setItemText(1, QApplication::translate("MainWindow", "Ratio (member)", nullptr));
        comboBox->setItemText(2, QApplication::translate("MainWindow", "Least Connections (member)", nullptr));
        comboBox->setItemText(3, QApplication::translate("MainWindow", "Observed (member)", nullptr));
        comboBox->setItemText(4, QApplication::translate("MainWindow", "Predictive (member)", nullptr));
        comboBox->setItemText(5, QApplication::translate("MainWindow", "Ratio (node)", nullptr));
        comboBox->setItemText(6, QApplication::translate("MainWindow", "Least Connections (node)", nullptr));
        comboBox->setItemText(7, QApplication::translate("MainWindow", "Fastest (node)", nullptr));
        comboBox->setItemText(8, QApplication::translate("MainWindow", "Observed (node)", nullptr));
        comboBox->setItemText(9, QApplication::translate("MainWindow", "Predictive (node)", nullptr));
        comboBox->setItemText(10, QApplication::translate("MainWindow", "Dynamic Ratio (node)", nullptr));
        comboBox->setItemText(11, QApplication::translate("MainWindow", "Fastest (application)", nullptr));
        comboBox->setItemText(12, QApplication::translate("MainWindow", "Least Sessions", nullptr));
        comboBox->setItemText(13, QApplication::translate("MainWindow", "Dynamic Ratio (member)", nullptr));
        comboBox->setItemText(14, QApplication::translate("MainWindow", "Weighted Least Connections (member)", nullptr));
        comboBox->setItemText(15, QApplication::translate("MainWindow", "Weighted Least Connections (node)", nullptr));
        comboBox->setItemText(16, QApplication::translate("MainWindow", "Ratio (session)", nullptr));
        comboBox->setItemText(17, QApplication::translate("MainWindow", "Ratio Least Connections (member)", nullptr));
        comboBox->setItemText(18, QApplication::translate("MainWindow", "Ratio Least Connections (node)", nullptr));

        teBacksideServers->setPlaceholderText(QApplication::translate("MainWindow", "<XXX.XXX.XXX:XXXX>", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "HTTP Profile Name:", nullptr));
        httpProfileName->setText(QString());
        httpProfileName->setPlaceholderText(QApplication::translate("MainWindow", "<http_profile_name>", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "VIP IP:", nullptr));
        vipIP->setPlaceholderText(QApplication::translate("MainWindow", "<XXX.XXX.XXX.XXX>", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Frontside Port:", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Backside Server Members:", nullptr));
        checkPersist->setText(QApplication::translate("MainWindow", "Persist Replace", nullptr));
        cbPersist->setItemText(0, QApplication::translate("MainWindow", "Cookie", nullptr));
        cbPersist->setItemText(1, QApplication::translate("MainWindow", "Destination Address Affinity", nullptr));
        cbPersist->setItemText(2, QApplication::translate("MainWindow", "Hash", nullptr));
        cbPersist->setItemText(3, QApplication::translate("MainWindow", "Microsoft Remote Desktop", nullptr));
        cbPersist->setItemText(4, QApplication::translate("MainWindow", "SIP", nullptr));
        cbPersist->setItemText(5, QApplication::translate("MainWindow", "Source Address Affinity", nullptr));
        cbPersist->setItemText(6, QApplication::translate("MainWindow", "SSL", nullptr));
        cbPersist->setItemText(7, QApplication::translate("MainWindow", "Universal", nullptr));

        label_9->setText(QApplication::translate("MainWindow", "SNAT Pool:", nullptr));
        snatPool->setPlaceholderText(QApplication::translate("MainWindow", "<snat_pool>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
