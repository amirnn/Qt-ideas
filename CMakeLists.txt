cmake_minimum_required(VERSION 3.15)

project(HelloWorld)

set(CMAKE_CXX_STANDARD 20)
# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_PREFIX_PATH "/Users/amirnourinia/Qt/5.15.2/clang_64/;C:/Library/Qt/5.15.2/msvc2019_64;")
# Tell CMake to run the Meta-Object-Compiler (MOC) when necessary:
# (You will learn about this in a minute)
set(CMAKE_AUTOMOC ON)
# Find the needed Qt5 modules
# (Qt5Widgets finds its own dependencies (QtGui and QtCore)).
find_package(Qt5 COMPONENTS Widgets  REQUIRED)
# You should know this line:
add_executable(label src/label.cc)
# Link against your Qt5 libraries
target_link_libraries(label Qt5::Widgets)

add_executable(layouts src/layouts.cc)
target_link_libraries(layouts Qt5::Widgets)