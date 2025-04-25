#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowFlag(Qt::FramelessWindowHint);
    ui->progressBar->setMinimum(1);
    ui->progressBar->setMaximum(100);
    ui->progressBar->setRange(1,100);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::startLoading()
{
    for(int value=ui->progressBar->minimum(); value<=ui->progressBar->maximum(); value++){
        QThread::msleep(50);
        ui->progressBar->setValue(value);
        ui->label->setText("%" + QString::number(value));
        qApp->processEvents(QEventLoop::AllEvents);
    }
}
