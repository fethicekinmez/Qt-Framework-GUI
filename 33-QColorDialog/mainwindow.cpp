#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow){
    ui->setupUi(this);
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::on_pushButton_background_clicked(){
    QColor colorValue = QColorDialog::getColor(Qt::white, this, tr("Select Color"));
    qDebug() << colorValue;
    QPalette palette = ui->textEdit->palette();
    palette.setColor(QPalette::Base, colorValue); // Set Background Color
    ui->textEdit->setPalette(palette);
}


void MainWindow::on_pushButton_foreground_clicked(){
    QColor colorValue = QColorDialog::getColor(Qt::white, this, tr("Select Color"));
    qDebug() << colorValue;
    QPalette palette = ui->textEdit->palette();
    palette.setColor(QPalette::Text, colorValue); // Set Text Color
    ui->textEdit->setPalette(palette);
}

