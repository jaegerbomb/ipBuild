#include "MainWindow.h"
#include "ui_mainwindow.h"

#include <QStringListModel>

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
      QString lb = QString("load-balancing-mode %1 ").arg(ui->comboBox->currentText());
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
