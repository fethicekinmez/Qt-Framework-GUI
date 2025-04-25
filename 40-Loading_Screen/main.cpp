#include "mainwindow.h"
#include "startingpage.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    StartingPage w;
    w.show();
    return a.exec();
}
