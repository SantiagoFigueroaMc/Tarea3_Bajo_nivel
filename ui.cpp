#include "ui.h"
#include "node.h"


string cargar_tablero(node headA, node headB, node headC, node headD, node headE, node headF, node headG, node headH){
	string tablero = "";
	node tempA = headA;
	node tempB = headB;
	node tempC = headC;
	node tempD = headD;
	node tempE = headE;
	node tempF = headF;
	node tempG = headG;
	node tempH = headH;
	
	for (int i = 0; i < 10; i++){
		if (i == 0){
			tablero += "   a   b   c   d   e   f   g   h   "
		}
		if (i == 9){}
		else{
			tablero += " tb cb ab rb rb ..." + "\n" + tablero;
			tempA = GetNext(&tempA);
			tempB = GetNext(&tempB);
			tempC = GetNext(&tempC);
			tempD = GetNext(&tempD);
			tempE = GetNext(&tempE);
			tempF = GetNext(&tempF);
			tempG = GetNext(&tempG);
			tempH = GetNext(&tempH);
		}
	}
	
	return tablero;
}
