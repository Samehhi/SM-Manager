cmake_minimum_required(VERSION 3.12)
project(MyProject)

set(CMAKE_CXX_STANDARD 11)


set(SOURCES
        src/init.cpp
        main.cpp
        src/commands.cpp
        src/cmd.cpp
)


add_executable(MyProject ${SOURCES})


target_include_directories(MyProject PRIVATE include)


# target_link_libraries(MyProject other_library)
