CC = g++

ajedrez: main.o functions.o
	$(CC) -o ajedrez main.o functions.o
	
main.o: main.c
	$(CC) -c -o main.o main.c

functions.o: functions.c
	$(CC) -c -o functions.o functions.c
	
clear:
	rm *.o
	rm ajedrez
