##################################################################
##  Makefile for the Logger and the simple server
##  Created By: Oussama Lakhneche
##################################################################



main_objects = src/LogVerbosity.o src/LogWarning.o src/LogError.o src/Logger.o src/ClientSocket.o src/Socket.o main.o
simple_server_objects = src/ServerSocket.o src/Socket.o simple_server_main.o

all : main simple_server

main: $(main_objects)
	g++ -o main $(main_objects)

simple_server: $(simple_server_objects)
	g++ -o simple_server $(simple_server_objects)


Socket: Socket.cpp
ServerSocket: ServerSocket.cpp
ClientSocket: ClientSocket.cpp
simple_server_main: simple_server_main.cpp
LogVerbosity: LogVerbosity.cpp
LogWarning: LogWarning.cpp
LogError: LogError.cpp
Logger: Logger.cpp
main: main.cpp




clean:
	rm -f *.o main simple_server



