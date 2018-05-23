CC = g++
FLAGS = -Wall -Wextra -Wundef -Werror -Wuninitialized -Winit-self
DEPENDENCIAS = main.o node.o io.o ui.o chess.o validar.o check.o
COMUNISTAS = *.o
SOCIALISTAS = ajedrez

ajedrez: $(DEPENDENCIAS)
	$(CC) $(FLAGS) -o ajedrez $(DEPENDENCIAS)
	
main.o: main.cpp
	$(CC) -c main.cpp

node.o: node.cpp
	$(CC) -c node.cpp
	
ui.o: ui.cpp
	$(CC) -c ui.cpp

io.o: io.cpp
	$(CC) -c io.cpp

chess.o: chess.cpp
	$(CC) -c chess.cpp

validar.o: validar.cpp
	$(CC) -c validar.cpp

check.o: check.cpp
	$(CC) -c check.cpp

pinochet:
	rm $(COMUNISTAS)
	rm $(SOCIALISTAS)

