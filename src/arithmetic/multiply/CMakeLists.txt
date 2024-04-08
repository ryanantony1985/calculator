# level 1.1.1.3 : CMakeLearn_calculator_project/src/arithmetic/multiply

add_library(multiply multiply.c)
target_include_directories(multiply PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
