#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QBrush Red(Qt::red);
    QBrush Green(Qt::green);
    QPen pen(Qt::black);

    rectItem = new QGraphicsRectItem(10,10,150,150);
    rectItem->setBrush(Red);
    rectItem->setPen(pen);
    rectItem->setFlags(QGraphicsItem::GraphicsItemFlag::ItemIsMovable);

    ellipseItem = new QGraphicsEllipseItem(50,50,150,150);
    ellipseItem->setBrush(Green);
    ellipseItem->setPen(pen);
    ellipseItem->setFlags(QGraphicsItem::GraphicsItemFlag::ItemIsMovable);


    scene = new QGraphicsScene(this);
    scene->addItem(rectItem);
    scene->addItem(ellipseItem);
    ui->graphicsView->setScene(scene);
}

MainWindow::~MainWindow()
{
    delete ui;
}
