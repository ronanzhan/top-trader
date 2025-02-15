#include <iostream>
#include <fmt/core.h>

#include <QApplication>

#include "ui/app_main_window.h"


int initUI(int argc, char *argv[]) {
    fmt::println("start initializing ui...");

    QApplication a(argc, argv);
    //
    AppMainWindow app_main_window;
    app_main_window.show();


    return a.exec();
}

int init(int argc, char *argv[]) {
    return initUI(argc, argv);
}


int main(int argc, char *argv[]) {
    return init(argc, argv);


    // return EXIT_SUCCESS;
}
