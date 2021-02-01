find_package(CUDA REQUIRED)


add_executable(vec_sum vec_sum.cc)
target_link_libraries(vec_sum ${CU})