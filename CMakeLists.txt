cmake_minimum_required(VERSION 3.20)
project(demo)

add_subdirectory(modules/demo_depend_lib)

add_executable(${PROJECT_NAME}
    src/main.cpp
)
target_include_directories(${PROJECT_NAME} PUBLIC
    modules/demo_depend_lib/include
)
target_link_libraries(${PROJECT_NAME} PUBLIC
    demo_depend_lib
)
