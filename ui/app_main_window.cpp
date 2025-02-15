//
// Created by ronan on 25-2-16.
//

// You may need to build the project (run Qt uic code generator) to get "ui_app_main_window.h" resolved

#include "app_main_window.h"
#include "ui_app_main_window.h"


AppMainWindow::AppMainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::AppMainWindow) {
    ui->setupUi(this);
}

AppMainWindow::~AppMainWindow() {
    delete ui;
}
