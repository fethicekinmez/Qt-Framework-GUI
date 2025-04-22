#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    qDebug() << QCoreApplication::applicationDirPath();
    QDir directory(QCoreApplication::applicationDirPath() + "/NewDirectory");
    if(!directory.exists()){
        directory.mkdir(QCoreApplication::applicationDirPath() + "/NewDirectory");
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_mkdir_clicked()
{
    QDir directory(QCoreApplication::applicationDirPath() + "/NewDirectory");
    for(int i=0; i<10; i++){
        directory.mkdir(QCoreApplication::applicationDirPath() + "/NewDirectory/" + QString::number(i+1));
    }
}


void MainWindow::on_pushButton_rmdir_clicked()
{
    QDir directory(QCoreApplication::applicationDirPath() + "/NewDirectory");
    for(int i=0; i<10; i++){
        directory.rmdir(QCoreApplication::applicationDirPath() + "/NewDirectory/" + QString::number(i+1));
    }
}

