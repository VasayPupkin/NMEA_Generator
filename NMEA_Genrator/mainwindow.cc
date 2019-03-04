#include "mainwindow.h"
#include "ui_mainwindow.h"

<<<<<<< ours
=======
#include "NMEA_Creator.h"

>>>>>>> theirs
MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);

  QString str = NMEA_Creator::checksumCalculator("$GPGLL,4916.45,N,12311.12,W,225444,A,*");
  int i = 0;
  ++i;
}

MainWindow::~MainWindow()
{
  delete ui;
}
