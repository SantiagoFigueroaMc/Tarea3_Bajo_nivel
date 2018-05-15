#include <iostream>
#include <string>
#include "functions.h"
using namespace std;
char tablero [10][10];
tablero[0][0]<<NULL;

int main(int argc, char**argv){
	if (argc>1 && argv[1]=="-t"){
		ifstream instruc;
		instruc.open(argv[2]);}
		//recibir codigo para instrucciones en archivo
	else{
		//recibir instrucciones por consola

	return 0;
}
