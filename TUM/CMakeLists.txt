# You should know this line:
add_executable(label label.cc)
# Link against your Qt5 libraries
target_link_libraries(label Qt5::Widgets)

add_executable(layouts layouts.cc)
target_link_libraries(layouts Qt5::Widgets)