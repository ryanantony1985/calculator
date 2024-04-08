# level 1.1.1.4 : CMakeLearn_calculator_project/src/arithmetic/subtract

add_library(subtract subtract.c)
target_include_directories(subtract PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
