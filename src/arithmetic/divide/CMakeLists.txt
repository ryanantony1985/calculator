# level 1.1.1.2 : CMakeLearn_calculator_project/src/arithmetic/divide

add_library(divide divide.c)
target_include_directories(divide PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
