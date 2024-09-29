cmake_minimum_required(VERSION 3.23 FATAL_ERROR)

project(MyQtApp VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "-static -static-libgcc -static-libstdc++")

set(Qt6_DIR "D:/Qt/6.5.2/mingw_64/lib")
set(CMAKE_FIND_LIBRARY_SUFFIXES ".a")

find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets)

set(SOURCES
    main.cpp
    src/mainwindow.cpp
)

set(HEADERS
    include/mainwindow.h
)

# set(UI
#     mainwindow.ui
# )

qt_standard_project_setup()

add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS} ${UI})

target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/include)

target_link_libraries(${PROJECT_NAME} PRIVATE Qt6::Core Qt6::Gui Qt6::Widgets)

add_definitions(-DQT_STATIC)