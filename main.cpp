#include <iostream>
#include <fstream>
#include <string>
#include "io.h"
#include "chess.h"
#include "ui.h"
#include "node.h"

using namespace std;

int main(int argc, char**argv){
	cout << "Ajedrez de bajo nivel." << endl;
	string jugador1 = "";
	string jugador2 = "";
	cout << "Ingrese el nombre del jugador 1:";
	cin >> jugador1;
	if (!cin){
		jugador1 = "J1";
		cin.clear();
		cin.ignore(10000, '\n');
	}
	cout << "Ingrese el nombre del jugador 2:";
	cin >> jugador2;
	if (!cin){
		jugador2 = "J2";
		cin.clear();
		cin.ignore(10000, '\n');
	}

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
	SetNext(&d1, &d2);
	SetNext(&d2, &d3);
	SetNext(&d3, &d4);
	SetNext(&d4, &d5);
	SetNext(&d5, &d6);
	SetNext(&d6, &d7);
	SetNext(&d7, &d8);
	
	node e1;
	node e2;
	node e3;
	node e4;
	node e5;
	node e6;
	node e7;
	node e8;
	SetValue(&e1, "QD");
	SetValue(&e2, "PD");
	SetValue(&e3, "  ");
	SetValue(&e4, "  ");
	SetValue(&e5, "  ");
	SetValue(&e6, "  ");
	SetValue(&e7, "PW");
	SetValue(&e8, "QW");
	SetNext(&e1, &e2);
	SetNext(&e2, &e3);
	SetNext(&e3, &e4);
	SetNext(&e4, &e5);
	SetNext(&e5, &e6);
	SetNext(&e6, &e7);
	SetNext(&e7, &e8);
	
	node f1;
	node f2;
	node f3;
	node f4;
	node f5;
	node f6;
	node f7;
	node f8;
	SetValue(&f1, "BD");
	SetValue(&f2, "PD");
	SetValue(&f3, "  ");
	SetValue(&f4, "  ");
	SetValue(&f5, "  ");
	SetValue(&f6, "  ");
	SetValue(&f7, "PW");
	SetValue(&f8, "BW");
	SetNext(&f1, &f2);
	SetNext(&f2, &f3);
	SetNext(&f3, &f4);
	SetNext(&f4, &f5);
	SetNext(&f5, &f6);
	SetNext(&f6, &f7);
	SetNext(&f7, &f8);
	
	node g1;
	node g2;
	node g3;
	node g4;
	node g5;
	node g6;
	node g7;
	node g8;
	SetValue(&g1, "ND");
	SetValue(&g2, "PD");
	SetValue(&g3, "  ");
	SetValue(&g4, "  ");
	SetValue(&g5, "  ");
	SetValue(&g6, "  ");
	SetValue(&g7, "PW");
	SetValue(&g8, "NW");
	SetNext(&g1, &g2);
	SetNext(&g2, &g3);
	SetNext(&g3, &g4);
	SetNext(&g4, &g5);
	SetNext(&g5, &g6);
	SetNext(&g6, &g7);
	SetNext(&g7, &g8);

	node h1;
	node h2;
	node h3;
	node h4;
	node h5;
	node h6;
	node h7;
	node h8;
	SetValue(&h1, "TD");
	SetValue(&h2, "PD");
	SetValue(&h3, "  ");
	SetValue(&h4, "  ");
	SetValue(&h5, "  ");
	SetValue(&h6, "  ");
	SetValue(&h7, "PW");
	SetValue(&h8, "TW");
	SetNext(&h1, &h2);
	SetNext(&h2, &h3);
	SetNext(&h3, &h4);
	SetNext(&h4, &h5);
	SetNext(&h5, &h6);
	SetNext(&h6, &h7);
	SetNext(&h7, &h8);
	
	string Tablero = cargar_tablero(a1,b1,c1,d1,e1,f1,g1,h1);
	mostrar_tablero(Tablero);
	
	int jugar = 1; // Mientras vale 1, se juega. 0 para salir.
	while (jugar == 1){
		if (turno_numero % 2 == 0){
			jugador_actual = jugador1;
		}
		else{
			jugador_actual = jugador2;
		}
		cout << "Turno del jugador:" << jugador_actual << endl;
	}
	
	/*
	cout << GetValue(&a1) << endl;
	cout << GetValue(GetNext(&a1)) << endl;
	cout << GetValue(GetNext(&a2)) << endl;
	cout << GetValue(GetNext(&a3)) << endl;
	cout << GetValue(GetNext(&a4)) << endl;
	cout << GetValue(GetNext(&a5)) << endl;
	cout << GetValue(GetNext(&a6)) << endl;
	cout << GetValue(GetNext(&a7)) << endl;
	*/
	
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
