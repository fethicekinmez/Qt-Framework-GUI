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

void MainWindow::on_pushButton_clicked()
{
    if(ui->radioButton->isChecked()){
        QMessageBox::information(this, "Qt tutorial", ui->radioButton->text());
    }
    if(ui->radioButton_2->isChecked()){
        QMessageBox::information(this, "Qt tutorial", ui->radioButton_2->text());
    }
}


void MainWindow::on_radioButton_clicked()
{
    qInfo() << "Check 1";
}


void MainWindow::on_radioButton_2_clicked()
{
    qInfo() << "Check 2";
}

