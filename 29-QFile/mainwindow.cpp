#include "mainwindow.h"
#include "./ui_mainwindow.h"

QString path;

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QDir dir(QCoreApplication::applicationDirPath());
    dir.cdUp(); // Contents
    dir.cdUp(); // .app
    dir.cdUp(); // build/
    dir.cdUp(); // 29-QFile (your actual project folder)
    path = dir.absolutePath();
    QFile File(path + "/Qt-Test.txt");
    if(File.open(QIODevice::Append | QIODevice::ReadWrite)){
        QTextStream stream(&File);
        stream << "Hello WORLD This is a test Line 1\n";
        stream << "Hello WORLD This is a test Line 2\n";
        stream << "Hello WORLD This is a test Line 3\n";
    }
    File.close();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_read_clicked()
{
    QFile File(path + "/Qt-Test.txt");
    if(File.open(QIODevice::ReadOnly)){
        QTextStream stream(&File);
        QString fileData;
        while(!stream.atEnd()){
            fileData += stream.readLine() + '\n';
        }
        ui->textEdit->setText(fileData);
    }
    File.close();
}


void MainWindow::on_pushButton_write_clicked()
{
    QFile File(path + "/Qt-Test.txt");
    if(File.open(QIODevice::Truncate | QIODevice::WriteOnly)){
        QTextStream stream(&File);
        stream << ui->textEdit->toPlainText();
    }
    File.close();
}

