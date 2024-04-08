# level 1.1.1.1 : CMakeLearn_calculator_project/src/arithmetic/add

add_library(add add.c)
target_include_directories(add PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

