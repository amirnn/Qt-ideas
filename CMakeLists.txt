cmake_minimum_required(VERSION 3.10)

project(HelloWorld)

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Tell CMake to run the Meta-Object-Compiler (MOC) when necessary:
# (You will learn about the in a minute)
set(CMAKE_AUTOMOC ON)
# Find the needed Qt5 modules
# (Qt5Widgets finds its own dependencies (QtGui and QtCore)).
find_package(Qt5Widgets REQUIRED)
# You should know this line:
add_executable(label src/label.cc)
# Link against your Qt5 libraries
target_link_libraries(label Qt5::Widgets)

add_executable(layouts src/layouts.cc)
target_link_libraries(layouts Qt5::Widgets)