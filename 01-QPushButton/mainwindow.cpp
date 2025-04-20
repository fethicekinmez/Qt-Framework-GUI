#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow){
    ui->setupUi(this);

    QObject::connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(on_pushButton_2_clicked()));

    QObject::connect(ui->pushButton_3, &QPushButton::clicked, this, &MainWindow::on_pushButton_3_clicked );

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_1_clicked(){
    qDebug() << "Clicked on button 1";
}

void MainWindow::on_pushButton_2_clicked(){
    qDebug() << "Clicked on button 2";
}
void MainWindow::on_pushButton_3_clicked(){
    qDebug() << "Clicked on button 3";
}


