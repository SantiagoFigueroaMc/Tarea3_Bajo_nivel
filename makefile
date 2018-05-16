CC = g++
FLAGS = -Wall -Wextra -Wundef -Werror -Wuninitialized -Winit-self

ajedrez: main.o io.o
	$(CC) $(FLAGS) -o ajedrez main.o io.o
	
main.o: main.cpp io.h node.h
	$(CC) -c -o main.o main.cpp

io.o: io.cpp io.h
	$(CC) -c -o io.o io.cpp
	
ui.o: ui.cpp ui.h
	$(CC) -c -o ui.o ui.cpp

node.o: node.cpp node.h
	$(CC) -c -o node.o node.cpp
	
clear:
	rm *.o
	rm ajedrez
