all: main.exe

main.exe: main.o hello.o goodbye.o message.o
	g++ main.o hello.o goodbye.o message.o -o main.exe

main.o: main.cpp hello.h goodbye.h
	g++ -c main.cpp -o main.o

hello.o: hello.cpp hello.h message.h
	g++ -c hello.cpp -o hello.o

goodbye.o: goodbye.cpp goodbye.h message.h
	g++ -c goodbye.cpp -o goodbye.o

message.o: message.cpp message.h
	g++ -c message.cpp -o message.o