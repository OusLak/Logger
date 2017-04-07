main_objects = LogVerbosity.o LogWarning.o LogError.o Logger.o ClientSocket.o Socket.o main.o
simple_server_objects = ServerSocket.o Socket.o simple_server_main.o

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



