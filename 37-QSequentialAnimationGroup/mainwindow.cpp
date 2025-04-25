#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QSequentialAnimationGroup>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Animation_1 = new QPropertyAnimation(ui->pushButton_1, "geometry");
    Animation_2 = new QPropertyAnimation(ui->pushButton_2, "geometry");
    Animation_3 = new QPropertyAnimation(ui->pushButton_3, "geometry");
    Animation_4 = new QPropertyAnimation(ui->pushButton_4, "geometry");

    Animation_1->setDuration(2000);
    Animation_2->setDuration(2000);
    Animation_3->setDuration(2000);
    Animation_4->setDuration(2000);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    Animation_1->setStartValue(ui->pushButton_1->geometry());
    Animation_1->setEndValue(ui->pushButton_4->geometry());

    Animation_2->setStartValue(ui->pushButton_2->geometry());
    Animation_2->setEndValue(ui->pushButton_1->geometry());

    Animation_3->setStartValue(ui->pushButton_3->geometry());
    Animation_3->setEndValue(ui->pushButton_2->geometry());

    Animation_4->setStartValue(ui->pushButton_4->geometry());
    Animation_4->setEndValue(ui->pushButton_3->geometry());

    QSequentialAnimationGroup *AnimationGroup = new QSequentialAnimationGroup();
    AnimationGroup->addAnimation(Animation_1);
    AnimationGroup->addAnimation(Animation_2);
    AnimationGroup->addAnimation(Animation_3);
    AnimationGroup->addAnimation(Animation_4);

    qDebug() << AnimationGroup->animationCount();

    AnimationGroup->start();
}


