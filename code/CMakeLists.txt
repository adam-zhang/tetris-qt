cmake_minimum_required(VERSION 2.8)
project (qt4-test)
set(CMAKE_BUILD_TYPE Release)
find_package (Qt4 REQUIRED)
#include_directories($ENV{QT4}/include/ $ENV{QT4}/include/QtGui)
link_directories($ENV{QT4}/lib)
set(sources main.cpp
	MainWindow.cpp
	MainWidget.cpp
	GameWidget.cpp
	InformationWidget.cpp
	WindowAssistant.cpp
	logicLayer/GameShape.cpp
	logicLayer/Producer.cpp
	)
set(moc_headers MainWindow.h
	MainWidget.h
	GameWidget.h
	InformationWidget.h
	)
set(headers ${moc_headers})
QT4_WRAP_CPP (mocs ${project_HEADERS})
ADD_EXECUTABLE (${PROJECT_NAME} ${sources} ${mocs})
TARGET_LINK_LIBRARIES (${PROJECT_NAME} Qt4::QtCore Qt4::QtGui winmm imm32 ws2_32)

