#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
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
    qDebug() << "------------------------------------------------";
    Animation_1->setStartValue(ui->pushButton_1->geometry());
    Animation_1->setEndValue(ui->pushButton_2->geometry());
    qDebug() << "Button-1 " << ui->pushButton_1->geometry() << " to " << ui->pushButton_2->geometry();
    Animation_1->setEasingCurve(QEasingCurve::Type::OutBounce);
    Animation_1->start();

    Animation_2->setStartValue(ui->pushButton_2->geometry());
    Animation_2->setEndValue(ui->pushButton_3->geometry());
    qDebug() << "Button-2 " << ui->pushButton_2->geometry() << " to " << ui->pushButton_3->geometry();
    Animation_2->setEasingCurve(QEasingCurve::Type::OutBounce);
    Animation_2->start();

    Animation_3->setStartValue(ui->pushButton_3->geometry());
    Animation_3->setEndValue(ui->pushButton_4->geometry());
    qDebug() << "Button-3 " << ui->pushButton_3->geometry() << " to " << ui->pushButton_4->geometry();
    Animation_3->setEasingCurve(QEasingCurve::Type::OutBounce);
    Animation_3->start();

    Animation_4->setStartValue(ui->pushButton_4->geometry());
    Animation_4->setEndValue(ui->pushButton_1->geometry());
    qDebug() << "Button-4 " << ui->pushButton_4->geometry() << " to " << ui->pushButton_1->geometry();
    Animation_4->setEasingCurve(QEasingCurve::Type::OutBounce);
    Animation_4->start();
}

