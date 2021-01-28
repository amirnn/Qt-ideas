cmake_minimum_required(VERSION 3.15)

# This to set up the vcpkg from https://github.com/microsoft/vcpkg#visual-studio-code-with-cmake-tools and https://vcpkg.readthedocs.io/en/latest/users/integration/
if(DEFINED ENV{VCPKG_ROOT} AND NOT DEFINED CMAKE_TOOLCHAIN_FILE)
  set(CMAKE_TOOLCHAIN_FILE "C:/Library/vcpkg/scripts/buildsystems/vcpkg.cmake" CACHE STRING "Vcpkg toolchain file")
endif()
project(Qt-Ideas)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
include_directories(include)
# Find includes in corresponding build directories for Qt
set(CMAKE_PREFIX_PATH "/Users/amirnourinia/Qt/5.15.2/clang_64/;C:/Library/Qt/5.15.2/msvc2019_64;C:/Library/vcpkg/installed/x64-windows/share/opencv;")

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