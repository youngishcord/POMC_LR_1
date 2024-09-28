#include <iostream>

#include <QCoreApplication>

#include "include/mainwindow.h"

int main(int argc, char *argv[]) {
    QCoreApplication app(argc, argv);

    std::cout << "::MESSAGE ON STARTUP::" << "\n";

    return app.exec();
}
