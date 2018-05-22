CC = g++
FLAGS = -Wall -Wextra -Wundef -Werror -Wuninitialized -Winit-self

ajedrez: main.o node.o io.o ui.o chess.o
	$(CC) $(FLAGS) -o ajedrez main.o node.o io.o ui.o chess.o
	
main.o: main.cpp node.o
	$(CC) -c main.cpp

node.o: node.cpp node.h
	$(CC) -c node.cpp
	
ui.o: ui.cpp node.o ui.h node.h
	$(CC) -c ui.cpp

io.o: io.cpp
	$(CC) -c io.cpp

chess.o: chess.cpp
	$(CC) -c chess.cpp

clear:
	rm *.o
	rm ajedrez
