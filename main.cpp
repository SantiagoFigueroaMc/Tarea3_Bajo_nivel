#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#include "io.h"
#include "chess.h"
#include "ui.h"
#include "node.h"


int main(int argc, char**argv){
	node a1;
	node a2;
	node a3;
	node a4;
	SetValue(&a1, "TB");
	SetValue(&a2, "PB");
	SetValue(&a3, "  ");
	SetValue(&a4, "  ");
	SetNext(&a1, &a2);
	SetNext(&a2, &a3);
	SetNext(&a3, &a4);
	printf("%d\n", GetValue(&a1));
	printf("%d\n", GetValue(GetNext(&a2)));
	printf("%d\n", GetValue(GetNext(&a3)));
	printf("%d\n", GetValue(GetNext(&a4)));

	if (argc>1 && argv[1]=="-t"){
		ifstream instruc;
		instruc.open(argv[2]);}
		//recibir codigo para instrucciones en archivo
	else{
		//recibir instrucciones por consola
	}
	return 0;
}
