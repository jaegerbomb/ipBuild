#include "MainWindow.h"
#include "ui_mainwindow.h"

#include <iostream>
#include <QStringListModel>
#include <QMessageBox>
#include <QClipboard>

MainWindow::MainWindow(QWidget *parent) :
   QMainWindow(parent),
   ui(new Ui::MainWindow)
{
   ui->setupUi(this);
   updateStringList();

   connect(ui->monitor, SIGNAL(textEdited(QString)), this, SLOT(updateStringList()));
   connect(ui->backsidePort, SIGNAL(textEdited(QString)), this, SLOT(updateStringList()));
   connect(ui->pool, SIGNAL(textEdited(QString)), this, SLOT(updateStringList()));
   connect(ui->cbLoadBalance, SIGNAL(clicked(bool)), this, SLOT(updateStringList()));
   connect(ui->comboBox, SIGNAL(currentIndexChanged(QString)), this, SLOT(updateStringList()));
   connect(ui->teBacksideServers, SIGNAL(textChanged()), this, SLOT(updateStringList()));
   connect(ui->httpProfileName, SIGNAL(textEdited(QString)), this, SLOT(updateStringList()));
   connect(ui->tcpProfileName, SIGNAL(textEdited(QString)), this, SLOT(updateStringList()));
   connect(ui->frontsidePort, SIGNAL(textEdited(QString)), this, SLOT(updateStringList()));
   connect(ui->vipIP, SIGNAL(textEdited(QString)), this, SLOT(updateStringList()));
   connect(ui->checkPersist, SIGNAL(clicked(bool)), this, SLOT(updateStringList()));
   connect(ui->cbPersist, SIGNAL(currentTextChanged(QString)), this, SLOT(updateStringList()));
   connect(ui->snatPool, SIGNAL(textEdited(QString)), this, SLOT(updateStringList()));
   connect(ui->pbCopyToClipboard, SIGNAL(clicked(bool)), this, SLOT(slotCopyOutputToClipboard()));

   setupMappings();
}

void MainWindow::setupMappings()
{
   mLoadBalanceMap.clear();
   mLoadBalanceMap.insert("Round Robin", "round-robin");
   mLoadBalanceMap.insert("Ratio (member)", "ratio-member");
   mLoadBalanceMap.insert("Least Connections (member)", "least-connections-member");
   mLoadBalanceMap.insert("Observed (member)", "observed-member");
   mLoadBalanceMap.insert("Predictive (member)", "predictive-member");
   mLoadBalanceMap.insert("Ratio (node)", "ratio-node");
   mLoadBalanceMap.insert("Least Connections (node)", "least-connections-node");
   mLoadBalanceMap.insert("Fastest (node)", "fastest-node");
   mLoadBalanceMap.insert("Observed (node)", "observed-node");
   mLoadBalanceMap.insert("Predictive (node)", "predictive-node");
   mLoadBalanceMap.insert("Dynamic Ratio (node)", "dynamic-ratio-node");
   mLoadBalanceMap.insert("Fastest (application)", "fastest-app-response");
   mLoadBalanceMap.insert("Least Sessions", "least-sessions");
   mLoadBalanceMap.insert("Dynamic Ratio (member)", "dynamic-ratio-member");
   mLoadBalanceMap.insert("Weighted Least Connections (member)", "weighted-least-connections-member");
   mLoadBalanceMap.insert("Weighted Least Connections (node)", "weighted-least-connections-node");
   mLoadBalanceMap.insert("Ratio (session)", "ratio-session");
   mLoadBalanceMap.insert("Ratio Least Connections (member)", "ratio-least-connections-node");
   mLoadBalanceMap.insert("Ratio Least Connections (node)", "ratio-least-connections-node");
}

void MainWindow::slotCopyOutputToClipboard()
{
   QApplication* app = (QApplication*)QApplication::instance();
   QClipboard* board = app->clipboard();
   if (board != nullptr) {
      QItemSelectionModel* selModel = ui->listView->selectionModel();
      QStringListModel* model = (QStringListModel*)(ui->listView->model());
      QStringList list;
      if (!selModel->selectedRows(0).isEmpty()) {
         for (QModelIndex index : selModel->selectedIndexes()) {
            list << model->data(index).toString();
         }
      }
      else {
         list = stringListFromValues();
      }

      QString final;
      for (QString string : list) {
         final += string + "\n";
      }
      board->setText(final);
      QMessageBox::information(this, "Copy", "Output copied successfully", QMessageBox::StandardButton::Ok);
   }
}

void MainWindow::updateStringList()
{
   QStringListModel* model = dynamic_cast<QStringListModel*>(ui->listView->model());
   if (model == nullptr) {
      model = new QStringListModel();
   }
   model->setStringList(stringListFromValues());
   ui->listView->setModel(model);
   ui->listView->setMinimumWidth(ui->listView->sizeHintForColumn(0) + 5);
   adjustSize();
}

QStringList MainWindow::stringListFromValues()
{
   QStringList list;
   list << QString("create ltm monitor tcp %1 destination *:%2").arg(ui->monitor->text()).arg(ui->backsidePort->text());
   QString line2 = QString("create ltm pool %1 monitor %2 ").arg(ui->pool->text()).arg(ui->monitor->text());
   if (ui->cbLoadBalance->isChecked()) {
      // get the current string
      QString lb = QString("load-balancing-mode %1 ").arg(mLoadBalanceMap.value(ui->comboBox->currentText()));
      line2 += lb;
   }
   QStringList members = ui->teBacksideServers->toPlainText().split("\n");
   line2 += "members add { ";
   for (QString string : members) {
      line2 += string + " ";
   }
   line2 += " }";
   list << line2;

   QString line3 = QString("create ltm profile tcp %1 defaults-from tcp").arg(ui->tcpProfileName->text());
   list << line3;

   QString line4 = QString("create ltm profile http %1 defaults-from http").arg(ui->httpProfileName->text());
   list << line4;

   QString line5 = QString("create ltm virtual %1 destination %2:%3 ip-protocol tcp ").arg(ui->monitor->text()).arg(ui->vipIP->text()).arg(ui->frontsidePort->text());

   if (!ui->tcpProfileName->text().isEmpty() || !ui->httpProfileName->text().isEmpty()) {
      QString profiles = QString ("profiles add { %1 %2 } ").arg(ui->tcpProfileName->text()).arg(ui->httpProfileName->text());
      line5 += profiles;
   }
   if (ui->checkPersist->isChecked()) {
      QString persist = QString("persist replace-all-with { %1 } ").arg(ui->cbPersist->currentText());
      line5 += persist;
   }
   list << line5;

   QString line6 = QString("pool %1 source-address-translation { type snat pool %2 }").arg(ui->pool->text()).arg(ui->snatPool->text());
   list << line6;

   list << "save sys config";
   return list;
}

MainWindow::~MainWindow()
{
   delete ui;
}
