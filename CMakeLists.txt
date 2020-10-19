cmake_minimum_required(VERSION 3.17)
project(tic_tac_toe)

set(CMAKE_CXX_STANDARD 20)

add_executable(tic_tac_toe src/main.cpp)
include_directories(${SFML_INCLUDE_DIR})
#add_subdirectory(src)
target_link_libraries(tic_tac_toe ${SFML_LIBRAIES} -lsfml-window -lsfml-system -lsfml-graphics)