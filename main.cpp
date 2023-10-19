#include "mainwindow.h"

#include <QApplication>
#include "Service.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    QCoreApplication::setApplicationName("Movie Rental");
    Service service;
    MainWindow w(service);
    w.show();
    return a.exec();
}

