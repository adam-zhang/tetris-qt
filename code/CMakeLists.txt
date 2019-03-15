cmake_minimum_required(VERSION 3.0.2)
project (qt4-test)
set(CMAKE_BUILD_TYPE Release)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
find_package (Qt4 REQUIRED)
set(sources main.cpp
	MainWindow.cpp
	MainWidget.cpp
	GameWidget.cpp
	InformationWidget.cpp
	WindowAssistant.cpp
	AboutDialog.cpp
	Painter.cpp
	Next.cpp
	Score.cpp
	LogicalLayer/GameShape.cpp
	LogicalLayer/Producer.cpp
	LogicalLayer/Game.cpp
	)
set(moc_headers 
	MainWindow.h
	MainWidget.h
	GameWidget.h
	InformationWidget.h
	AboutDialog.h
	)
set(headers ${moc_headers})
QT4_WRAP_CPP(mocs ${moc_headers})
ADD_EXECUTABLE (${PROJECT_NAME} ${sources} ${mocs} )
TARGET_LINK_LIBRARIES (${PROJECT_NAME} Qt4::QtCore Qt4::QtGui winmm imm32 ws2_32)
