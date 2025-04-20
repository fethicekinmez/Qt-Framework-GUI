#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_checkBox_1_stateChanged(int arg1){
    if(arg1 == 2){
        qInfo() << "User checked me";
    }
    else{
        qInfo() << "User unchecked me";
    }
}


void MainWindow::on_checkBox_toggled(bool checked){
    if(checked){
        qInfo() << "User checked me";
    }
    else{
        qInfo() << "User unchecked me";
    }
}

