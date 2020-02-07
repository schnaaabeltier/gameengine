cmake_minimum_required (VERSION 3.5)
project (GameEngine)

find_package(glm REQUIRED)
find_package(glfw3 REQUIRED)
find_package(glbinding REQUIRED)

add_subdirectory(apps)
add_subdirectory(components)