#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDebug>

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

void MainWindow::on_pushButton_test_1_clicked(){

    ui->groupBox_1->setVisible(true);
    ui->groupBox_2->setVisible(false);
}


void MainWindow::on_pushButton_test_2_clicked(){
    ui->groupBox_1->setVisible(false);
    ui->groupBox_2->setVisible(true);
}




void MainWindow::on_groupBox_3_toggled(bool arg1)
{
    qDebug() << arg1;
    if(arg1 == true){
        ui->checkBox_1->setChecked(true);
        ui->checkBox_2->setChecked(true);
        ui->checkBox_3->setChecked(true);
    }
    else{
        ui->checkBox_1->setChecked(false);
        ui->checkBox_2->setChecked(false);
        ui->checkBox_3->setChecked(false);
    }
}

