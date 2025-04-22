#include "mainwindow.h"
#include "./ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow){
    ui->setupUi(this);

    QFile File("Qt-Test.txt");
    if(File.open(QIODevice::Append | QIODevice::ReadWrite)){
        QTextStream stream(&File);
        stream << "Hello World\n";
    }
    File.close();

}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::on_pushButton_read_clicked(){
    QFile File("Qt-Test.txt");
    if(File.open(QIODevice::ReadOnly)){
        QTextStream stream(&File);
        QString fileData;
        while(!stream.atEnd()){
            fileData += stream.readLine() + '\n';
        }
        ui->textEdit->setText(fileData);
      File.close();
    }
}


void MainWindow::on_pushButton_write_clicked(){
    QFile File("Qt-Test.txt");
    if(File.open(QIODevice::Truncate | QIODevice::WriteOnly)){
        QTextStream stream(&File);
        stream << ui->textEdit->toPlainText();
    }
    File.close();
}


void MainWindow::on_pushButton_delete_clicked(){

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "The question", "Are you sure?", QMessageBox::Yes | QMessageBox::No);
    if(reply == QMessageBox::Yes){
        QFile File("Qt-Test.txt");
        File.remove();
    }

}


void MainWindow::on_pushButton_copy_clicked(){
    QFile File("Qt-Test.txt");
    File.copy(ui->lineEdit_copy_filename->text() + ".txt");
}


void MainWindow::on_pushButton_rename_clicked(){
    QFile File("Qt-Test.txt");
    File.rename(ui->lineEdit_new_filename->text() + ".txt");

}

