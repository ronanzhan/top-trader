//
// Created by ronan on 25-2-16.
//

#ifndef APP_MAIN_WINDOW_H
#define APP_MAIN_WINDOW_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class AppMainWindow; }
QT_END_NAMESPACE

class AppMainWindow : public QMainWindow {
Q_OBJECT

public:
    explicit AppMainWindow(QWidget *parent = nullptr);
    ~AppMainWindow() override;

private:
    Ui::AppMainWindow *ui;
};


#endif //APP_MAIN_WINDOW_H
