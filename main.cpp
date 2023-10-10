#include <QApplication>
#include <QPushButton>
#include "PackageServer.h"
#include "Windows.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    PackageServer server;
    Windows* windows = new Windows(server);
    windows->readCouriersFromFile();
    windows->openWindows();

    return QApplication::exec();
}
