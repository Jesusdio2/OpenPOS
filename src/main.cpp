// main.cpp
#include <QApplication>
#include "PosWindow.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    PosWindow window;
    window.show();
    return app.exec();
}
