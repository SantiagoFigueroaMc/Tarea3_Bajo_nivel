#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#include "io.h"
#include "chess.h"
#include "ui.h"
#include "node.h"

// Estructura de un nodo (casilla), contenido (KB, PW, " ")
// y un puntero al proximo nodo.
typedef struct node {string contenido; struct node *nextNode;} node;

//Metodo que inserta un contenido i en un nodo n
void SetValue(node *n, string i);

//Metodo que retorna el valor de un nodo n.
string GetValue(node *n);

//Metodo que setea a un nodo n como nodo siguiente de un nodo h.
void SetNext(node *h,node *n);

//Metodo que retorna un puntero del nodo proximo al nodo n.
node *GetNext(node *n);





int main(int argc, char**argv){
	node a1;
	node a2;
	node a3;
	node a4;
	node a5;
	node a6;
	node a7;
	node a8;
	SetValue(&a1, "TD");
	SetValue(&a2, "PD");
	SetValue(&a3, "  ");
	SetValue(&a4, "  ");
	SetValue(&a5, "  ");
	SetValue(&a6, "  ");
	SetValue(&a7, "PW");
	SetValue(&a8, "TW");
	SetNext(&a1, &a2);
	SetNext(&a2, &a3);
	SetNext(&a3, &a4);
	SetNext(&a4, &a5);
	SetNext(&a5, &a6);
	SetNext(&a6, &a7);
	SetNext(&a7, &a8);
	
	node b1;
	node b2;
	node b3;
	node b4;
	node b5;
	node b6;
	node b7;
	node b8;
	SetValue(&b1, "ND");
	SetValue(&b2, "PD");
	SetValue(&b3, "  ");
	SetValue(&b4, "  ");
	SetValue(&b5, "  ");
	SetValue(&b6, "  ");
	SetValue(&b7, "PW");
	SetValue(&b8, "NW");
	SetNext(&b1, &b2);
	SetNext(&b2, &b3);
	SetNext(&b3, &b4);
	SetNext(&b4, &b5);
	SetNext(&b5, &b6);
	SetNext(&b6, &b7);
	SetNext(&b7, &b8);
	
	node c1;
	node c2;
	node c3;
	node c4;
	node c5;
	node c6;
	node c7;
	node c8;
	SetValue(&c1, "BD");
	SetValue(&c2, "PD");
	SetValue(&c3, "  ");
	SetValue(&c4, "  ");
	SetValue(&c5, "  ");
	SetValue(&c6, "  ");
	SetValue(&c7, "PW");
	SetValue(&c8, "BW");
	SetNext(&c1, &c2);
	SetNext(&c2, &c3);
	SetNext(&c3, &c4);
	SetNext(&c4, &c5);
	SetNext(&c5, &c6);
	SetNext(&c6, &c7);
	SetNext(&c7, &c8);
	
	node d1;
	node d2;
	node d3;
	node d4;
	node d5;
	node d6;
	node d7;
	node d8;
	SetValue(&d1, "KD");
	SetValue(&d2, "PD");
	SetValue(&d3, "  ");
	SetValue(&d4, "  ");
	SetValue(&d5, "  ");
	SetValue(&d6, "  ");
	SetValue(&d7, "PW");
	SetValue(&d8, "KW");
	SetNext(&a1, &a2);
	SetNext(&a2, &a3);
	SetNext(&a3, &a4);
	SetNext(&a4, &a5);
	SetNext(&a5, &a6);
	SetNext(&a6, &a7);
	SetNext(&a7, &a8);
	
	node a1;
	node a2;
	node a3;
	node a4;
	node a5;
	node a6;
	node a7;
	node a8;
	SetValue(&a1, "QD");
	SetValue(&a2, "PD");
	SetValue(&a3, "  ");
	SetValue(&a4, "  ");
	SetValue(&a5, "  ");
	SetValue(&a6, "  ");
	SetValue(&a7, "PW");
	SetValue(&a8, "QW");
	SetNext(&a1, &a2);
	SetNext(&a2, &a3);
	SetNext(&a3, &a4);
	SetNext(&a4, &a5);
	SetNext(&a5, &a6);
	SetNext(&a6, &a7);
	SetNext(&a7, &a8);
	
	node a1;
	node a2;
	node a3;
	node a4;
	node a5;
	node a6;
	node a7;
	node a8;
	SetValue(&a1, "BD");
	SetValue(&a2, "PD");
	SetValue(&a3, "  ");
	SetValue(&a4, "  ");
	SetValue(&a5, "  ");
	SetValue(&a6, "  ");
	SetValue(&a7, "PW");
	SetValue(&a8, "BW");
	SetNext(&a1, &a2);
	SetNext(&a2, &a3);
	SetNext(&a3, &a4);
	SetNext(&a4, &a5);
	SetNext(&a5, &a6);
	SetNext(&a6, &a7);
	SetNext(&a7, &a8);
	
	node a1;
	node a2;
	node a3;
	node a4;
	node a5;
	node a6;
	node a7;
	node a8;
	SetValue(&a1, "ND");
	SetValue(&a2, "PD");
	SetValue(&a3, "  ");
	SetValue(&a4, "  ");
	SetValue(&a5, "  ");
	SetValue(&a6, "  ");
	SetValue(&a7, "PW");
	SetValue(&a8, "NW");
	SetNext(&a1, &a2);
	SetNext(&a2, &a3);
	SetNext(&a3, &a4);
	SetNext(&a4, &a5);
	SetNext(&a5, &a6);
	SetNext(&a6, &a7);
	SetNext(&a7, &a8);
	
	node a1;
	node a2;
	node a3;
	node a4;
	node a5;
	node a6;
	node a7;
	node a8;
	SetValue(&a1, "TD");
	SetValue(&a2, "PD");
	SetValue(&a3, "  ");
	SetValue(&a4, "  ");
	SetValue(&a5, "  ");
	SetValue(&a6, "  ");
	SetValue(&a7, "PW");
	SetValue(&a8, "TW");
	SetNext(&a1, &a2);
	SetNext(&a2, &a3);
	SetNext(&a3, &a4);
	SetNext(&a4, &a5);
	SetNext(&a5, &a6);
	SetNext(&a6, &a7);
	SetNext(&a7, &a8);
	
	
	cout << GetValue(&a1) << endl;
	cout << GetValue(GetNext(&a1)) << endl;
	cout << GetValue(GetNext(&a2)) << endl;
	cout << GetValue(GetNext(&a3)) << endl;
	cout << GetValue(GetNext(&a4)) << endl;
	cout << GetValue(GetNext(&a5)) << endl;
	cout << GetValue(GetNext(&a6)) << endl;
	cout << GetValue(GetNext(&a7)) << endl;
	
	
	/*
	if (argc>1 && argv[1]=="-t"){
		ifstream instruc;
		instruc.open(argv[2]);}
		//recibir codigo para instrucciones en archivo
	else{
		//recibir instrucciones por consola
	}
	*/
	return 0;
}
