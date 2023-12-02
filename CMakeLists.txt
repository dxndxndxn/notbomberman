cmake_minimum_required(VERSION 3.5)
project(notbomberman VERSION 1.0)
set(CMAKE_CXX_STANDARD 20)

set(SOURCES /Users/dxn/Desktop/notbomberman/src/main.cpp)
include_directories(/Users/dxn/Desktop/notbomberman/headers)

find_package(OpenGL REQUIRED)

add_executable(notbomberman ${SOURCES})

target_include_directories(notbomberman PRIVATE /Users/dxn/Desktop/notbomberman/Libraries/SFML/include)
target_link_libraries(notbomberman PRIVATE
    /Users/dxn/Desktop/notbomberman/Libraries/SFML/lib/libsfml-system.2.6.0.dylib
    /Users/dxn/Desktop/notbomberman/Libraries/SFML/lib/libsfml-window.2.6.0.dylib
    /Users/dxn/Desktop/notbomberman/Libraries/SFML/lib/libsfml-graphics.2.6.0.dylib
    /Users/dxn/Desktop/notbomberman/Libraries/SFML/lib/libsfml-audio.2.6.0.dylib
    /Users/dxn/Desktop/notbomberman/Libraries/SFML/lib/libsfml-network.2.6.0.dylib
    ${OPENGL_LIBRARIES}
)