#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QTimer>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow){
    ui->setupUi(this);
    DateTime = new QTimer();
    DateTime->setInterval(1000);
    QObject::connect(DateTime, SIGNAL(timeout()), this, SLOT(Date_Time_Display()));
    DateTime->start();

}
MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::Date_Time_Display(){
    QString DateAndTime = QDateTime::currentDateTime().toString("dd:MM:yyyy HH:mm:ss");
    ui->lcdNumber->display(DateAndTime);
}
