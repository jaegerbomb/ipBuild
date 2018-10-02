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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
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
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbCopyToClipboard;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(645, 555);
        MainWindow->setStyleSheet(QLatin1String("QToolTip\n"
"{\n"
"     border: 1px solid #000000;\n"
"     background-color: #212121;\n"
"     color: #ffffff;\n"
"     opacity: 200;\n"
"}\n"
"\n"
"QWidget\n"
"{\n"
"	color:  rgb(255, 255, 255);\n"
"    background-color: #212121;\n"
"}\n"
"QWidget::disabled\n"
"{\n"
"	color: #616161;\n"
"	background-color: #212121;\n"
"}\n"
"\n"
"/* Table Views*/\n"
"/*\n"
"QWidget:item:hover\n"
"{\n"
"    background-color: #414141;\n"
"    color: #ffffff;\n"
"}\n"
"*/\n"
"QWidget:item:selected\n"
"{\n"
"    background-color: #008b8b;\n"
"}\n"
"\n"
"QMenuBar::item\n"
"{\n"
"    background: transparent;\n"
"}\n"
"QMenuBar::item:selected\n"
"{\n"
"    background:  #008b8b;\n"
"    border: 1px solid #414141;\n"
"}\n"
"\n"
"QMenuBar::item:pressed\n"
"{\n"
"    border: 1px solid #000000;\n"
"    background-color: #414141;\n"
"    margin-bottom:-1px;\n"
"    padding-bottom:1px;\n"
"}\n"
"QAbstractItemView\n"
"{\n"
"    background-color:  #313131;\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"    background-color: #414141;\n"
"    padding: 1p"
                        "x;\n"
"    border: none\n"
"}\n"
"\n"
"QToolBar \n"
"{\n"
"    border:  none\n"
"}\n"
"QComboBox\n"
"{\n"
"    selection-background-color: #414141;\n"
"    background-color: #313131;\n"
"	border: 1px solid #414141;\n"
"}\n"
"QComboBox:hover\n"
"{\n"
"    border: 2px solid #414141;\n"
"}\n"
"QComboBox:on\n"
"{\n"
"	background-color:  #212121;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView\n"
"{\n"
"    border: none;\n"
"    selection-background-color:  #008b8b;\n"
"}\n"
"QScrollBar:horizontal \n"
"{\n"
"     border: 1px solid #222222;\n"
"     background: #212121;\n"
"     height: 20px;\n"
"     margin: 0px 16px 0 16px;\n"
"}\n"
"\n"
"QScrollBar:vertical\n"
"{\n"
"     border: 1px solid #222222;\n"
"     background: #212121;\n"
"     width: 20px;\n"
"     margin: 16px 0 16px 0;\n"
"}\n"
"\n"
"\n"
"QScrollBar::handle:horizontal\n"
"{\n"
"      background:  #414141;\n"
"      min-height: 20px;\n"
"      border-radius: 2px;\n"
"}\n"
"QScrollBar::add-line:horizontal {\n"
"      border: 1px solid #1b1b19;\n"
"      bord"
                        "er-radius: 2px;\n"
"      background:  #414141;\n"
"      width: 14px;\n"
"      subcontrol-position: right;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:horizontal {\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: #414141;;\n"
"      width: 14px;\n"
"     subcontrol-position: left;\n"
"     subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::right-arrow:horizontal, QScrollBar::left-arrow:horizontal\n"
"{\n"
"      border: 3px solid black;\n"
"      width: 3px;\n"
"      height: 3px;\n"
"      background: white;\n"
"}\n"
"\n"
"QScrollBar::add-page:horizontal, QScrollBar::sub-page:horizontal\n"
"{\n"
"      background: none;\n"
"}\n"
"\n"
"\n"
"QScrollBar::handle:vertical\n"
"{\n"
"      background:  #414141;\n"
"      min-height: 20px;\n"
"      border-radius: 2px;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical\n"
"{\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background:  #414141;\n"
"      height: 14px;\n"
""
                        "      subcontrol-position: bottom;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:vertical\n"
"{\n"
"      border: 1px solid #222222;\n"
"      border-radius: 2px;\n"
"      background: #414141;;\n"
"      height: 14px;\n"
"      subcontrol-position: top;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::up-arrow:vertical, QScrollBar::down-arrow:vertical\n"
"{\n"
"      border: 3px solid black;\n"
"      width: 3px;\n"
"      height: 3px;\n"
"      background: white;\n"
"}\n"
"\n"
"\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical\n"
"{\n"
"      background: none;\n"
"}\n"
"QHeaderView::section\n"
"{\n"
"    background-color: #313131;\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #6c6c6c;\n"
"}\n"
"\n"
"QDockWidget::title\n"
"{\n"
"    text-align: center;\n"
"    spacing: 3px; /* spacing between items in the tool bar */\n"
"    background-color: #313131;\n"
"}\n"
"\n"
"QDockWidget::close-button, QDockWidget::float-button\n"
"{"
                        "\n"
"    text-align: center;\n"
"    spacing: 1px; /* spacing between items in the tool bar */\n"
"    background-color: #505050;\n"
"}\n"
"QToolButton::checked\n"
"{\n"
"	border-style: solid;\n"
"	border: 2px solid #008b8b;\n"
"}\n"
"\n"
"QToolButton::hover\n"
"{	\n"
"	background: #414141;\n"
"}\n"
"\n"
"QTabBar\n"
"{\n"
"	color: rgb(255,255,255);\n"
"	background-color: #414141;\n"
"}\n"
"QPushButton::hover\n"
"{\n"
"	background: #008b8b;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"	color: rgb(255,255,255);\n"
"	background-color: #414141;\n"
"}\n"
"QPushButton::checked\n"
"{\n"
"    background-color: #008b8b;\n"
"	border-style: solid;\n"
"	border: 2px solid #ffffff;\n"
"}\n"
"QSpinBox\n"
"{\n"
"	color: #008b8b;\n"
"}\n"
"\n"
""));
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
        listView->setSelectionMode(QAbstractItemView::MultiSelection);

        verticalLayout->addWidget(listView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pbCopyToClipboard = new QPushButton(centralWidget);
        pbCopyToClipboard->setObjectName(QStringLiteral("pbCopyToClipboard"));

        horizontalLayout->addWidget(pbCopyToClipboard);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

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
        pbCopyToClipboard->setText(QApplication::translate("MainWindow", "Copy to Clipboard", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
