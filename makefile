CC = g++

ajedrez: main.o io.o
	$(CC) -o ajedrez main.o functions.o
	
main.o: main.cpp io.h
	$(CC) -c -o main.o main.cpp

io.o: io.cpp io.h
	$(CC) -c -o io.o io.cpp
	
clear:
	rm *.o
	rm ajedrez
