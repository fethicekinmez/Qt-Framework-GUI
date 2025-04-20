#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) , ui(new Ui::MainWindow){

    ui->setupUi(this);
    //ui->label->setScaledContents(true);
    ui->label->setPixmap(QPixmap(":/images.jpeg"));
    ui->label->setAlignment(Qt::AlignCenter);
    ui->label->setMargin(25);
}

MainWindow::~MainWindow()
{
    delete ui;
}
