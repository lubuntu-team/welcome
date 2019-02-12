cmake_minimum_required(VERSION 3.1.0)
 
project(lubuntuWelcomeCenter)
 
# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Instruct CMake to run moc automatically when needed
set(CMAKE_AUTOMOC ON)
# Create code from a list of Qt designer ui files
set(CMAKE_AUTOUIC ON)
# Auto add resource files
set(CMAKE_AUTORCC ON)
# C++12
set(CMAKE_CXX_STANDARD 11)
 
# Find the QtWidgets library
find_package(Qt5Widgets CONFIG REQUIRED)
 
add_definitions(-DQT_DEPRECATED_WARNINGS)
 
# Populate a CMake variable with the sources
set(lubuntuWelcomeCenter_SRCS
    mainwindow.ui
    mainwindow.cpp
    main.cpp
    welcomecenterresource.qrc
)
# Tell CMake to create the helloworld executable
add_executable(lubuntuWelcomeCenter WIN32 ${lubuntuWelcomeCenter_SRCS})

# Use the Widgets module from Qt 5
target_link_libraries(lubuntuWelcomeCenter Qt5::Widgets)
