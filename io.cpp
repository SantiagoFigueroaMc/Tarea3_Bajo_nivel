#include "io.h"

void mostrar_tablero(string tablero){
	cout << tablero << endl;
}

// Verificar aqui que la instruccion sea correcta.
// 1. Hay una pieza en el cuadrado inicial.
// 2. La pieza corresponde al jugador que esta jugando.
// 3. La posicion final debe ser válida.	
bool string_a_nodo(int color, string pos_i, string pos_f, node2 AA, node headA, node headB, node headC, node headD, node headE, node headF, node headG, node headH){
	node* nodo_i;
	if (pos_i[0] == 'a'){nodo_i = GetNext(&headA);}
	if (pos_i[0] == 'b'){nodo_i = GetNext(&headB);}
	if (pos_i[0] == 'c'){nodo_i = GetNext(&headC);}
	if (pos_i[0] == 'd'){nodo_i = GetNext(&headD);}
	if (pos_i[0] == 'e'){nodo_i = GetNext(&headE);}
	if (pos_i[0] == 'f'){nodo_i = GetNext(&headF);}
	if (pos_i[0] == 'g'){nodo_i = GetNext(&headG);}
	if (pos_i[0] == 'h'){nodo_i = GetNext(&headH);}
	
	for (int k = 0; k < (int)(pos_i[1])-49; k++){
		nodo_i = GetNext(nodo_i);
	}
	if (!validarPos_i(*nodo_i, color)){
		return false;
	}
	string valor = GetValue(nodo_i);
	
	node* nodo_f;
	if (pos_f[0] == 'a'){nodo_f = GetNext(&headA);}
	if (pos_f[0] == 'b'){nodo_f = GetNext(&headB);}
	if (pos_f[0] == 'c'){nodo_f = GetNext(&headC);}
	if (pos_f[0] == 'd'){nodo_f = GetNext(&headD);}
	if (pos_f[0] == 'e'){nodo_f = GetNext(&headE);}
	if (pos_f[0] == 'f'){nodo_f = GetNext(&headF);}
	if (pos_f[0] == 'g'){nodo_f = GetNext(&headG);}
	if (pos_f[0] == 'h'){nodo_f = GetNext(&headH);}
	
	for (int k = 0; k < (int)(pos_f[1])-49; k++){
		nodo_f = GetNext(nodo_f);
	}
	if (!validarPos_f(*nodo_f, color)){
		return false;
	}
	
	char pieza = valor[0];
	int color2;
	if (valor[1] == 'W'){color2 = 0;}
	if (valor[1] == 'D'){color2 = 1;}
	string coordenada_i = "00";
	coordenada_i[0] = (int)pos_i[0]-48;
	coordenada_i[1] = pos_i[1];
	string coordenada_f = "00";
	coordenada_f[0] = (int)pos_f[0]-48;
	coordenada_f[1] = pos_f[1];
	if (!movimiento_permitido(pieza, color2, coordenada_i, coordenada_f, AA)){
		return false;
	}
	
	if ((valor[0] == 'P') && ((coordenada_f[1] == '1') || (coordenada_f[1] == '8'))){
		string eleccion;
		cout << "Que pieza desea. (Reina: Q | Alfil: B | Caballo: N | Torre: T): ";
		cin >> eleccion;
		while ((eleccion != "Q") && (eleccion != "B") && (eleccion != "N") && (eleccion != "T")){
			cin.clear();
			cin.ignore(10000, '\n');
			cout << "Pieza invalida. Ingrese nuevamente: ";
			cin >> eleccion;
		}
		
		valor[0] = eleccion[0];
	}
	
	if (GetValue(nodo_f)[0] == 'K'){cout << "Fin del juego" << endl;}
	SetValue(nodo_i, "  ");
	SetValue(nodo_f, valor);
	return true;
}

// string a nodo para archivos
bool string_a_nodo_archivo(string nombre_archivo, int linea, int color, string pos_i, string pos_f, node2 AA, node headA, node headB, node headC, node headD, node headE, node headF, node headG, node headH){
	node* nodo_i;
	if (pos_i[0] == 'a'){nodo_i = GetNext(&headA);}
	if (pos_i[0] == 'b'){nodo_i = GetNext(&headB);}
	if (pos_i[0] == 'c'){nodo_i = GetNext(&headC);}
	if (pos_i[0] == 'd'){nodo_i = GetNext(&headD);}
	if (pos_i[0] == 'e'){nodo_i = GetNext(&headE);}
	if (pos_i[0] == 'f'){nodo_i = GetNext(&headF);}
	if (pos_i[0] == 'g'){nodo_i = GetNext(&headG);}
	if (pos_i[0] == 'h'){nodo_i = GetNext(&headH);}
	
	for (int k = 0; k < (int)(pos_i[1])-49; k++){
		nodo_i = GetNext(nodo_i);
	}
	if (!validarPos_i(*nodo_i, color)){
		return false;
	}
	cout << "Valor nodo_i: " << GetValue(nodo_i) << "\n" << color << endl;
	string valor = GetValue(nodo_i);
	
	node* nodo_f;
	if (pos_f[0] == 'a'){nodo_f = GetNext(&headA);}
	if (pos_f[0] == 'b'){nodo_f = GetNext(&headB);}
	if (pos_f[0] == 'c'){nodo_f = GetNext(&headC);}
	if (pos_f[0] == 'd'){nodo_f = GetNext(&headD);}
	if (pos_f[0] == 'e'){nodo_f = GetNext(&headE);}
	if (pos_f[0] == 'f'){nodo_f = GetNext(&headF);}
	if (pos_f[0] == 'g'){nodo_f = GetNext(&headG);}
	if (pos_f[0] == 'h'){nodo_f = GetNext(&headH);}
	
	for (int k = 0; k < (int)(pos_f[1])-49; k++){
		nodo_f = GetNext(nodo_f);
	}
	if (!validarPos_f(*nodo_f, color)){
		return false;
	}
	
	char pieza = valor[0];
	int color2;
	if (valor[1] == 'W'){color2 = 0;}
	if (valor[1] == 'D'){color2 = 1;}
	string coordenada_i = "00";
	coordenada_i[0] = (int)pos_i[0]-48;
	coordenada_i[1] = pos_i[1];
	string coordenada_f = "00";
	coordenada_f[0] = (int)pos_f[0]-48;
	coordenada_f[1] = pos_f[1];
	if (!movimiento_permitido(pieza, color2, coordenada_i, coordenada_f, AA)){
		return false;
	}
	
	//Abrir archivo y avanzar hasta la instruccion
	ifstream instruc;
	instruc.open(nombre_archivo);
	string eleccion;
	
	int linea_actual = 0;
	while (linea_actual < linea){
		instruc >> eleccion;
		instruc >> eleccion;
		linea_actual++;
	}
	instruc >> eleccion;//Toma la eleccion
	
	if ((valor[0] == 'P') && ((coordenada_f[1] == '1') || (coordenada_f[1] == '8'))){
		if ((eleccion != "Q") && (eleccion != "B") && (eleccion != "N") && (eleccion != "T")){
			cout << "Pieza invalida. Eleccion: " << eleccion << endl;
			return false;
		cout << "Peon alcanzo el otro borde. Pieza seleccionada: " << eleccion << endl;
		}
		valor[0] = eleccion[0];
	}
	
	if (GetValue(nodo_f)[0] == 'K'){cout << "Fin del juego" << endl;}
	SetValue(nodo_i, "  ");
	SetValue(nodo_f, valor);
	return true;
}
