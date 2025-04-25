#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Animation_1 = new QPropertyAnimation(ui->pushButton_1_Animation_1, "geometry");
    Animation_1->setDuration(500);


    Animation_2 = new QPropertyAnimation(ui->pushButton_2_Animation_2, "geometry");
    Animation_2->setDuration(500);


    Animation_3 = new QPropertyAnimation(ui->pushButton_3_Animation_3, "geometry");
    Animation_3->setDuration(500);


    Animation_4 = new QPropertyAnimation(ui->pushButton_4_Animation_4, "geometry");
    Animation_4->setDuration(500);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    Animation_1->setStartValue(ui->pushButton_1_Animation_1->geometry());
    Animation_1->setEndValue(ui->pushButton_2_Animation_2->geometry());
    Animation_1->start();

    Animation_2->setStartValue(ui->pushButton_2_Animation_2->geometry());
    Animation_2->setEndValue(ui->pushButton_3_Animation_3->geometry());
    Animation_2->start();

    Animation_3->setStartValue(ui->pushButton_3_Animation_3->geometry());
    Animation_3->setEndValue(ui->pushButton_4_Animation_4->geometry());
    Animation_3->start();

    Animation_4->setStartValue(ui->pushButton_4_Animation_4->geometry());
    Animation_4->setEndValue(ui->pushButton_1_Animation_1->geometry());
    Animation_4->start();
}

