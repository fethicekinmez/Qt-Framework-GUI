#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //ui->progressBar->setRange(1,300);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Start_clicked()
{
    for(int i=0; i<=100; i++){
        QThread::msleep(50);
        ui->progressBar->setValue(i);
        ui->label->setText("%" + QString::number(i));
        qApp->processEvents(QEventLoop::AllEvents);
    }
}

