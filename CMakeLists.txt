cmake_minimum_required(VERSION 3.30.1)
project(top-trader)

set(CMAKE_CXX_STANDARD 20)

find_package(fmt CONFIG REQUIRED)
find_package(QuantLib CONFIG REQUIRED)


find_package(PkgConfig REQUIRED)
pkg_check_modules(GTKMM REQUIRED IMPORTED_TARGET gtkmm-4.0)

add_executable(${PROJECT_NAME} main.cpp
)

target_link_libraries(${PROJECT_NAME} PRIVATE fmt::fmt QuantLib::QuantLib PkgConfig::GTKMM)