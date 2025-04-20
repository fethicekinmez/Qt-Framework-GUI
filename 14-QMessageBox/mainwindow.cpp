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

void MainWindow::on_pushButtonCancel_clicked(){
    QMessageBox::information(this, "This is the title", "This is the message");
}


void MainWindow::on_pushButton_clicked()
{
    QMessageBox::warning(this, "This the warning message", "This is the warning");
}


void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::critical(this, "This the critical message", "This is the critical message");
}


void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "The question", "Are you sure?", QMessageBox::Yes | QMessageBox::No);
    if(reply == QMessageBox::Yes){
        qDebug() << "Answer is yes";
    }
}

