cmake_minimum_required(VERSION 3.30.1)
project(top-trader)

set(CMAKE_CXX_STANDARD 20)


set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(fmt CONFIG REQUIRED)
find_package(QuantLib CONFIG REQUIRED)
find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED
)

#find_package(PkgConfig REQUIRED)
#pkg_check_modules(GTKMM REQUIRED IMPORTED_TARGET gtkmm-4.0)

add_executable(${PROJECT_NAME} main.cpp
        ui/app_main_window.cpp
        ui/app_main_window.h
        ui/app_main_window.ui
)

target_link_libraries(${PROJECT_NAME} PRIVATE
        fmt::fmt
        QuantLib::QuantLib
        Qt::Core
        Qt::Gui
        Qt::Widgets
)