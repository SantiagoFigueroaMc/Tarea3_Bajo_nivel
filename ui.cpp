#include "ui.h"
#include "node.h"
#include <string>
using namespace std;
string cargar_tablero(node *headA, node *headB, node *headC, node *headD, node *headE, node *headF, node *headG, node *headH){
	string tablero = "";
	string linea;
	node tempA = *GetNext(headA);
	node tempB = *GetNext(headB);
	node tempC = *GetNext(headC);
	node tempD = *GetNext(headD);
	node tempE = *GetNext(headE);
	node tempF = *GetNext(headF);
	node tempG = *GetNext(headG);
	node tempH = *GetNext(headH);
	for (int i = 0; i < 10; i++){
		if (i == 0){
			linea = "     a    b    c    d    e    f    g    h";
			tablero = linea;
		}
		if (i == 9){
			tablero = (string)"  -----------------------------------------\n" + tablero;
			tablero = (string)"     a    b    c    d    e    f    g    h" + "\n" + tablero;
		}
		if ((i > 0) && (i < 9)){
			string i_string = to_string(i);
			tablero = (string)"  -----------------------------------------\n" + tablero;
			tablero = i_string + " | " + GetValue(&tempA) + " | " + GetValue(&tempB) + " | " + GetValue(&tempC) + " | " + GetValue(&tempD) + " | " + GetValue(&tempE) + " | " + GetValue(&tempF) + " | " + GetValue(&tempG) + " | " + GetValue(&tempH) + " | " + i_string + "\n" + tablero;
			if (i < 8){
				tempA = *GetNext(&tempA);
				tempB = *GetNext(&tempB);
				tempC = *GetNext(&tempC);
				tempD = *GetNext(&tempD);
				tempE = *GetNext(&tempE);
				tempF = *GetNext(&tempF);
				tempG = *GetNext(&tempG);
				tempH = *GetNext(&tempH);
			}
		}
	}
	return tablero;
}
