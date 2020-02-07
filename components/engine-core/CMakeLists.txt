set(target engine-core)

set(sources
        application.h
        application.cpp)

add_library(${target} ${sources})

target_link_libraries(${target} glfw3)