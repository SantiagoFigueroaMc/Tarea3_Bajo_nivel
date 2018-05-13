CC = g++

ajedrez: main.o functions.o
	$(CC) -o ajedrez main.o functions.o
	
main.o: main.cpp functions.h
	$(CC) -c -o main.o main.cpp

functions.o: functions.cpp
	$(CC) -c -o functions.o functions.cpp
	
clear:
	rm *.o
	rm ajedrez
