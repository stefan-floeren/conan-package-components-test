cmake_minimum_required(VERSION 3.15)
project(game-engine CXX)

find_package(Boost REQUIRED)

add_library(ai src/ai.cpp)
add_library(rendering src/rendering.cpp)
add_library(algorithms src/algorithms.cpp)

target_include_directories(ai PUBLIC include)
target_include_directories(rendering PUBLIC include)
target_include_directories(algorithms PUBLIC include)

set_target_properties(ai PROPERTIES PUBLIC_HEADER "include/ai.h")
set_target_properties(rendering PROPERTIES PUBLIC_HEADER "include/rendering.h")
set_target_properties(algorithms PROPERTIES PUBLIC_HEADER "include/algorithms.h")

target_link_libraries(ai PRIVATE algorithms Boost::container)
target_link_libraries(rendering PRIVATE algorithms)

install(TARGETS ai rendering algorithms)
