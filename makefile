CC = g++
FLAGS = -Wall -Wextra -Wundef -Werror -Wuninitialized -Winit-self
DEPENDENCIAS = main.o node.o io.o ui.o validar.o check.o chess.o
COMUNISTAS = *.o
SOCIALISTAS = ajedrez

ajedrez: $(DEPENDENCIAS)
	$(CC) $(FLAGS) -o ajedrez $(DEPENDENCIAS)
	
main.o: main.cpp node.h
	$(CC) -c main.cpp

node.o: node.cpp node.h
	$(CC) -c node.cpp
	
ui.o: ui.cpp node.h
	$(CC) -c ui.cpp

io.o: io.cpp
	$(CC) -c io.cpp

chess.o: chess.cpp node.h
	$(CC) -c chess.cpp

validar.o: validar.cpp node.h
	$(CC) -c validar.cpp

check.o: check.cpp node.h
	$(CC) -c check.cpp

pinochet:
	rm $(COMUNISTAS)
	rm $(SOCIALISTAS)

