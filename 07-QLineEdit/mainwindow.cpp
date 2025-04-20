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

void MainWindow::on_pushButton_clicked(){
    qDebug() << "Your data: " << ui->lineEdit_1->text();
}


void MainWindow::on_lineEdit_1_textChanged(const QString &arg1){
    qInfo() << "Text: " << arg1;
}


void MainWindow::on_pushButton_2_clicked(){
    ui->lineEdit_1->setText("Fethi Çekinmez");
}

