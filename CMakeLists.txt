cmake_minimum_required(VERSION 3.10)

project(hello-world)

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Tell CMake to run the Meta-Object-Compiler (MOC) when necessary:
# (You will learn about the in a minute)
set(CMAKE_AUTOMOC ON)
# Find the needed Qt5 modules
# (Qt5Widgets finds its own dependencies (QtGui and QtCore)).
find_package(Qt5Widgets REQUIRED)
# You should know this line:
add_executable(hello_world src/main.cpp src/mainwindow.cpp)
# Link against your Qt5 libraries
target_link_libraries(hello_world Qt5::Widgets)