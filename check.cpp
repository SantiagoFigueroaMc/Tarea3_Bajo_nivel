#include "check.h"

bool casilla_ocupada(int x, int y, node2 AA){
	node2* temp_node2 = GetNext2(&AA);
	for (int fila_actual = 1; fila_actual < x; fila_actual++){
		temp_node2 = GetNext2(temp_node2);
	}
	node* temp_node = GetUp2(temp_node2);
	temp_node = GetNext(temp_node);
	for (int columna_actual = 1; columna_actual < y; columna_actual++){
		temp_node = GetNext(temp_node);
	}
	string Val = GetValue(temp_node);
	if (Val == "  "){return false;}
	else {return true;}
}

