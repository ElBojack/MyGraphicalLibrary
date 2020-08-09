project(MGL)
cmake_minimum_required(VERSION 3.0)
add_definitions("-W -Wall -Wextra")

set(CMAKE_CXX_STANDARD 17)

set(SRC
    src/main.cpp
#Vector
    src/maths/vector3d.cpp
    )

set(MGLIncludes
    src/maths
)

add_executable(MGL ${SRC})
target_include_directories(MGL PRIVATE ${MGLIncludes})