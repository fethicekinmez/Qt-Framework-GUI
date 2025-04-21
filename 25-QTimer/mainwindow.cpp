#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow){
    ui->setupUi(this);

    timer = new QTimer(this);
    QObject::connect(timer, SIGNAL(timeout()), this, SLOT(timer_TimeoutEvent()));
    timer->setInterval(1000);
    timer->start();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::timer_TimeoutEvent(){
    qDebug() << "Timer event called";
    ui->statusbar->showMessage(QDateTime::currentDateTime().toString());
}
