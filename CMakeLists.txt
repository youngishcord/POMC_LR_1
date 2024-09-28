cmake_minimum_required(VERSION 3.23 FATAL_ERROR)

# Установка проекта
project(MyQtApp VERSION 1.0 LANGUAGES CXX)

# Указание стандарта C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "-static -static-libgcc -static-libstdc++")

set(Qt6_DIR "D:/Qt/6.5.2/mingw_64/lib")
set(CMAKE_FIND_LIBRARY_SUFFIXES ".a")

# Найти пакеты Qt6
find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets)

# Указать исходные файлы
set(SOURCES
    main.cpp
    # mainwindow.cpp
)

# set(HEADERS
#     mainwindow.h
# )

# set(UI
#     mainwindow.ui
# )

# Установка MOC, UIC и RCC для обработки файлов Qt
qt_standard_project_setup()

# Добавление исполняемого файла
add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS} ${UI})

# Линковка библиотек Qt
target_link_libraries(${PROJECT_NAME} PRIVATE Qt6::Core Qt6::Gui Qt6::Widgets)

add_definitions(-DQT_STATIC)