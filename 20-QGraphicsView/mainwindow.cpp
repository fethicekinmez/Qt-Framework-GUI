#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow){
    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    scene->addPixmap(QPixmap(":/images.jpeg"));
    ui->graphicsView->setScene(scene);

}

MainWindow::~MainWindow(){
    delete ui;

}

void MainWindow::on_pushButton_clicked(){
    ui->graphicsView->rotate(-2);
}


void MainWindow::on_pushButton_2_clicked(){
    ui->graphicsView->rotate(2);
}

