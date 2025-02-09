#include <iostream>
#include <gtkmm.h>


class MyWindow : public Gtk::Window {
public:
    MyWindow();
};

MyWindow::MyWindow() {
    set_title("Top Trader");
    set_default_size(600, 400);
}


int initUI(int argc, char *argv[]) {
    auto app = Gtk::Application::create("org.gtkmm.examples.base");

    return app->make_window_and_run<MyWindow>(argc, argv);
}

int init(int argc, char *argv[]) {
    initUI(argc, argv);
    return 0;
}

int main(int argc, char *argv[]) {
    init(argc, argv);


    return EXIT_SUCCESS;
}
