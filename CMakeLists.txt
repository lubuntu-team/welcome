find_package(Qt5Core REQUIRED)
find_package(Qt5Network REQUIRD)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")

set (SOURCES
	main.cpp
	mainwindow.cpp
	window.cpp
)

include_directory(.)

add_executable(test ${SOURCES} )
qt5_use_modules(test Core Network)

# Should not be necessary
#CONFIG += console
#CONFIG -= app_bundle
#TEMPLATE = app
