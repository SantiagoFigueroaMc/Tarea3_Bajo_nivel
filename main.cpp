#include <iostream>
#include <fstream>
#include <string>

#include "io.h"
#include "chess.h"
#include "ui.h"
#include "node.h"


using namespace std;

int main(int argc, char**argv){
	if (argc>1 && argv[1]=="-t"){
		ifstream instruc;
		instruc.open(argv[2]);}
		//recibir codigo para instrucciones en archivo
	else{
		//recibir instrucciones por consola
	}
	return 0;
}
