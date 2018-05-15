CC = g++
FLAGS = -Wall -Wextra -Wundef -Werror -Wuninitialized -Winit-self

ajedrez: main.o io.o
	$(CC) -$(FLAGS) -o ajedrez main.o functions.o
	
main.o: main.cpp io.h
	$(CC) -c -o main.o main.cpp

io.o: io.cpp
	$(CC) -c -o io.o io.cpp
	
clear:
	rm *.o
	rm ajedrez
