#include <iostream>
#include <fstream>
#include <string>
#include "io.h"
#include "chess.h"
#include "validar.h"
#include "ui.h"
#include "node.h"
using namespace std;

int main(int argc, char**argv){
	cout << "Ajedrez de bajo nivel." << endl;
	string jugador1 = "";
	string jugador2 = "";
	string casilla_inicial_string;
	string casilla_final_string;
	node casilla_inicial_node;
	node casilla_final_node;
	string delimiter = " ";
	int turno_numero = 0;
	int linea;
	
	cout << "Ingrese el nombre del jugador 1: ";
	cin >> jugador1;
	if (!cin){
		jugador1 = "J1";
		cin.clear();
		cin.ignore(10000, '\n');
	}
	cin.ignore(1000, '\n');
	cout << "Ingrese el nombre del jugador 2: ";
	cin >> jugador2;
	if (!cin){
		jugador2 = "J2";
		cin.clear();
		cin.ignore(10000, '\n');
	}
	cin.ignore(1000, '\n');
	
	node headA;
	node a1;
	node a2;
	node a3;
	node a4;
	node a5;
	node a6;
	node a7;
	node a8;
	SetValue(&a1, "TW");
	SetValue(&a2, "PW");
	SetValue(&a3, "  ");
	SetValue(&a4, "  ");
	SetValue(&a5, "  ");
	SetValue(&a6, "  ");
	SetValue(&a7, "PD");
	SetValue(&a8, "TD");
	SetNext(&headA, &a1);
	SetNext(&a1, &a2);
	SetNext(&a2, &a3);
	SetNext(&a3, &a4);
	SetNext(&a4, &a5);
	SetNext(&a5, &a6);
	SetNext(&a6, &a7);
	SetNext(&a7, &a8);
	
	node headB;
	node b1;
	node b2;
	node b3;
	node b4;
	node b5;
	node b6;
	node b7;
	node b8;
	SetValue(&b1, "NW");
	SetValue(&b2, "PW");
	SetValue(&b3, "  ");
	SetValue(&b4, "  ");
	SetValue(&b5, "  ");
	SetValue(&b6, "  ");
	SetValue(&b7, "PD");
	SetValue(&b8, "ND");
	SetNext(&headB, &b1);
	SetNext(&b1, &b2);
	SetNext(&b2, &b3);
	SetNext(&b3, &b4);
	SetNext(&b4, &b5);
	SetNext(&b5, &b6);
	SetNext(&b6, &b7);
	SetNext(&b7, &b8);
	
	node headC;
	node c1;
	node c2;
	node c3;
	node c4;
	node c5;
	node c6;
	node c7;
	node c8;
	SetValue(&c1, "BW");
	SetValue(&c2, "PW");
	SetValue(&c3, "  ");
	SetValue(&c4, "  ");
	SetValue(&c5, "  ");
	SetValue(&c6, "  ");
	SetValue(&c7, "PD");
	SetValue(&c8, "BD");
	SetNext(&headC, &c1);
	SetNext(&c1, &c2);
	SetNext(&c2, &c3);
	SetNext(&c3, &c4);
	SetNext(&c4, &c5);
	SetNext(&c5, &c6);
	SetNext(&c6, &c7);
	SetNext(&c7, &c8);
	
	node headD;
	node d1;
	node d2;
	node d3;
	node d4;
	node d5;
	node d6;
	node d7;
	node d8;
	SetValue(&d1, "QW");
	SetValue(&d2, "PW");
	SetValue(&d3, "  ");
	SetValue(&d4, "  ");
	SetValue(&d5, "  ");
	SetValue(&d6, "  ");
	SetValue(&d7, "PD");
	SetValue(&d8, "QD");
	SetNext(&headD, &d1);
	SetNext(&d1, &d2);
	SetNext(&d2, &d3);
	SetNext(&d3, &d4);
	SetNext(&d4, &d5);
	SetNext(&d5, &d6);
	SetNext(&d6, &d7);
	SetNext(&d7, &d8);
	
	node headE;
	node e1;
	node e2;
	node e3;
	node e4;
	node e5;
	node e6;
	node e7;
	node e8;
	SetValue(&e1, "KW");
	SetValue(&e2, "PW");
	SetValue(&e3, "  ");
	SetValue(&e4, "  ");
	SetValue(&e5, "  ");
	SetValue(&e6, "  ");
	SetValue(&e7, "PD");
	SetValue(&e8, "KD");
	SetNext(&headE, &e1);
	SetNext(&e1, &e2);
	SetNext(&e2, &e3);
	SetNext(&e3, &e4);
	SetNext(&e4, &e5);
	SetNext(&e5, &e6);
	SetNext(&e6, &e7);
	SetNext(&e7, &e8);
	
	node headF;
	node f1;
	node f2;
	node f3;
	node f4;
	node f5;
	node f6;
	node f7;
	node f8;
	SetValue(&f1, "BW");
	SetValue(&f2, "PW");
	SetValue(&f3, "  ");
	SetValue(&f4, "  ");
	SetValue(&f5, "  ");
	SetValue(&f6, "  ");
	SetValue(&f7, "PD");
	SetValue(&f8, "BD");
	SetNext(&headF, &f1);
	SetNext(&f1, &f2);
	SetNext(&f2, &f3);
	SetNext(&f3, &f4);
	SetNext(&f4, &f5);
	SetNext(&f5, &f6);
	SetNext(&f6, &f7);
	SetNext(&f7, &f8);
	
	node headG;
	node g1;
	node g2;
	node g3;
	node g4;
	node g5;
	node g6;
	node g7;
	node g8;
	SetValue(&g1, "NW");
	SetValue(&g2, "PW");
	SetValue(&g3, "  ");
	SetValue(&g4, "  ");
	SetValue(&g5, "  ");
	SetValue(&g6, "  ");
	SetValue(&g7, "PD");
	SetValue(&g8, "ND");
	SetNext(&headG, &g1);
	SetNext(&g1, &g2);
	SetNext(&g2, &g3);
	SetNext(&g3, &g4);
	SetNext(&g4, &g5);
	SetNext(&g5, &g6);
	SetNext(&g6, &g7);
	SetNext(&g7, &g8);

	node headH;
	node h1;
	node h2;
	node h3;
	node h4;
	node h5;
	node h6;
	node h7;
	node h8;
	SetValue(&h1, "TW");
	SetValue(&h2, "PW");
	SetValue(&h3, "  ");
	SetValue(&h4, "  ");
	SetValue(&h5, "  ");
	SetValue(&h6, "  ");
	SetValue(&h7, "PD");
	SetValue(&h8, "TD");
	SetNext(&headH, &h1);
	SetNext(&h1, &h2);
	SetNext(&h2, &h3);
	SetNext(&h3, &h4);
	SetNext(&h4, &h5);
	SetNext(&h5, &h6);
	SetNext(&h6, &h7);
	SetNext(&h7, &h8);
	
	node2 AA;
	node2 A;
	node2 B;
	node2 C;
	node2 D;
	node2 E;
	node2 F;
	node2 G;
	node2 H;
	SetUp2(&A, &headA);
	SetUp2(&B, &headB);
	SetUp2(&C, &headC);
	SetUp2(&D, &headD);
	SetUp2(&E, &headE);
	SetUp2(&F, &headF);
	SetUp2(&G, &headG);
	SetUp2(&H, &headH);
	SetNext2(&AA, &A);
	SetNext2(&A, &B);
	SetNext2(&B, &C);
	SetNext2(&C, &D);
	SetNext2(&D, &E);
	SetNext2(&E, &F);
	SetNext2(&F, &G);
	SetNext2(&G, &H);
	
	string Tablero = cargar_tablero(&headA,&headB,&headC,&headD,&headE,&headF,&headG,&headH);
	mostrar_tablero(Tablero); // Primera vez que se muestra el tablero
	turno_numero = 0;
	if (argc > 2){
	//recibir codigo para instrucciones en archivo
		ifstream instruc;
		instruc.open(argv[2]);
		
		string jugador_actual = "";
		linea = 0;
		
		while (instruc >> casilla_inicial_string){
			linea++;
			instruc >> casilla_final_string;
			// Revisar la primera casilla.
			if ((casilla_inicial_string[0] < 'a') || (casilla_inicial_string[0] > 'h') || (casilla_inicial_string[1] < '1') || (casilla_inicial_string[1] > '8')){
				cout << "Instruccion invalida en la linea " << linea << endl;
				break;
			}
			// Revisar la segunda casilla.
			if ((casilla_final_string[0] < 'a') || (casilla_final_string[0] > 'h') || (casilla_final_string[1] < '1') || (casilla_final_string[1] > '8')){
				cout << "Instruccion invalida en la linea " << linea << endl;
				break;
			}
			if (!string_a_nodo(turno_numero % 2, casilla_inicial_string, casilla_final_string, AA, headA,headB,headC,headD,headE,headF,headG,headH)){
				cout << "Instruccion invalida en la linea " << linea << endl;
				break;
			}
			if (turno_numero % 2 == 0) {jugador_actual = jugador1;}
			else {jugador_actual = jugador2;}
			cout << "\nTurno del jugador: " << jugador_actual << endl;
			cout << casilla_inicial_string << " - " << casilla_final_string << endl;
			
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n" << endl;
			Tablero = cargar_tablero(&headA,&headB,&headC,&headD,&headE,&headF,&headG,&headH);
			mostrar_tablero(Tablero);
			turno_numero++;
		}
		instruc.close();
	}
	if (argc < 2){
	//recibir instrucciones por consola
		string jugador_actual = "";
		
		int jugar = 1; // Mientras vale 1, se juega. 0 para salir.
		
		while (jugar == 1){
			
			if (turno_numero % 2 == 0) {jugador_actual = jugador1;}
			else {jugador_actual = jugador2;}
			cout << "Turno del jugador: " << jugador_actual << endl;
			cout << "Ingrese movida (0 para salir): ";
			cin >> casilla_inicial_string;
			if (casilla_inicial_string == "0"){jugar = 0; break;}
			cin >> casilla_final_string;
			// Revisar la primera casilla.
			while ((casilla_inicial_string[0] < 'a') || (casilla_inicial_string[0] > 'h') || (casilla_inicial_string[1] < '1') || (casilla_inicial_string[1] > '8')){
				cin.clear();
				cin.ignore(10000, '\n');
				cout << "Seleccion de pieza invalida (fuera del tablero)\nIngrese nuevamente: ";
				cin >> casilla_inicial_string;
				if (casilla_inicial_string == "0"){jugar = 0; break;}
				cin >> casilla_final_string;
			}
			// Revisar la segunda casilla.
			while ((casilla_final_string[0] < 'a') || (casilla_final_string[0] > 'h') || (casilla_final_string[1] < '1') || (casilla_final_string[1] > '8')){
				cin.clear();
				cin.ignore(10000, '\n');
				cout << "Movimiento invalido (fuera del tablero)\nIngrese nuevamente: ";
				cin >> casilla_inicial_string;
				if (casilla_inicial_string == "0"){jugar = 0; break;}
				cin >> casilla_final_string;
			}

			node2* temp2 = GetNext2(&AA);
			for (char fila_actual = 'a'; fila_actual < casilla_final_string[0]; (int)fila_actual++){
				temp2 = GetNext2(temp2);
			}// bien
			node* temp = GetUp2(temp2);
			temp = GetNext(temp);
			for (int columna_actual = 1; columna_actual < (int)casilla_final_string[1]-48; columna_actual++){
				temp = GetNext(temp);
			}
			string Val = GetValue(temp);
			if (Val[0] == 'K'){jugar = 0;}

			while (!string_a_nodo(turno_numero % 2, casilla_inicial_string, casilla_final_string, AA, headA,headB,headC,headD,headE,headF,headG,headH)){
				cin.clear();
				cin.ignore(10000, '\n');
				cout << "Ingrese nuevamente: ";
				cin >> casilla_inicial_string;
				if (casilla_inicial_string == "0"){jugar = 0; break;}
				cin >> casilla_final_string;
			}
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n" << endl;
			
			Tablero = cargar_tablero(&headA,&headB,&headC,&headD,&headE,&headF,&headG,&headH);
			mostrar_tablero(Tablero);
			
			
			turno_numero++;
		}
	
	}
	cout << "Fin de la partida." << endl;
	return 0;
}
