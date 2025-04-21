#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow){

    ui->setupUi(this);
    setWindowFlag(Qt::FramelessWindowHint);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Login_clicked(){
    QString userName = ui->lineEdit_Username->text();
    QString password = ui->lineEdit_Password->text();

    if(userName == "admin" && password == "admin"){
        QMessageBox::information(this, "Login Page", "Login successful");
        this->hide();
        MainPage* mainPage = new MainPage();
        mainPage->show();
    }
    else{
        QMessageBox::warning(this, "Warning", "Please Enter Valid Username or Password");
    }
}


void MainWindow::on_pushButton_Cancel_clicked(){
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Close the App", "Are you sure to exit?", QMessageBox::Yes | QMessageBox::No);
    if(reply == QMessageBox::Yes){
        QApplication::quit();
    }
}

