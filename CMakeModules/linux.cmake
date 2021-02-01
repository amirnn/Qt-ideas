message("Running on a Linux platform.")

project(Qt-Ideas CXX CUDA)

set(OPENCV_HOME "/home/amir/Library/OpenCV4.5")
set(Qt_HOME "/home/amir/Library/Qt/5.15.2/gcc_64")
# Find includes in corresponding build directories for Qt
set(CMAKE_PREFIX_PATH "${OPENCV_HOME};${Qt_HOME}")

# Find the needed Qt5 modules
# (Qt5Widgets finds its own dependencies (QtGui and QtCore)).
find_package(Qt5 COMPONENTS Widgets REQUIRED)
# Tell CMake to run the Meta-Object-Compiler (MOC) when necessary:
# (You will learn about this in a minute)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(OpenCV REQUIRED)

add_subdirectory(TUM)
add_subdirectory(Book)