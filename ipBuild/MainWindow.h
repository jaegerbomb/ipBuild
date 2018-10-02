#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMap>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
   Q_OBJECT

public:
   explicit MainWindow(QWidget *parent = nullptr);
   ~MainWindow();

public slots:
   void updateStringList();
   void slotCopyOutputToClipboard();

private:
   void setupMappings();
   QStringList stringListFromValues();
   Ui::MainWindow *ui;
   // key is readable text, value is command to use
   QMap<QString, QString> mLoadBalanceMap;
};

#endif // MAINWINDOW_H
