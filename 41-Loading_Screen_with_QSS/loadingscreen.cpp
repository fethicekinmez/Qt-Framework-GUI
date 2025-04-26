#include "loadingscreen.h"
#include "ui_loadingscreen.h"

LoadingScreen::LoadingScreen(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoadingScreen)
{
    ui->setupUi(this);
    setWindowFlag(Qt::FramelessWindowHint);
    ui->progressBar->setMinimum(0);
    ui->progressBar->setMaximum(100);
    ui->progressBar->setRange(0,100);
}

LoadingScreen::~LoadingScreen()
{
    delete ui;
}

void LoadingScreen::startLoading()
{
    for(int value=ui->progressBar->minimum(); value<=ui->progressBar->maximum(); value++){
        QThread::msleep(50);
        ui->progressBar->setValue(value);
        ui->label_percentile->setText("%" + QString::number(value));
        qApp->processEvents(QEventLoop::AllEvents);
    }
}
