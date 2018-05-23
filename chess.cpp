#include "chess.h"
bool movimiento_permitido(char pieza, int color, string coordenada_i,string coordenada_f){
	int x_i, y_i, x_f, y_f;	
	x_i=(int)coordenada_i[0];
	y_i=(int)coordenada_i[1];
	x_f=(int)coordenada_f[0];
	y_f=(int)coordenada_f[1];
	if (pieza=='N'){//
		if ((x_i+2==x_f) && (x_i+1==x_f)){return true;}
		if ((x_i+2==x_f) && (x_i-1==x_f)){return true;}
		if ((x_i-2==x_f) && (x_i+1==x_f)){return true;}
		if ((x_i-2==x_f) && (x_i-1==x_f)){return true;}
		if ((x_i+1==x_f) && (x_i+2==x_f)){return true;}
		if ((x_i-1==x_f) && (x_i+2==x_f)){return true;}
		if ((x_i+1==x_f) && (x_i-2==x_f)){return true;}
		if ((x_i-1==x_f) && (x_i-2==x_f)){return true;}
		else {return false;}
		}
	
	int i;
	//reglas torre
	if (pieza=='T'){
		if ((x_f-x_i==0) && (y_f-y_i>0)){
			i=1;
			while (i<y_f-y_i){
				if casilla_ocupada(x_i,y_i+i){return false;}
				i++;}
			return true;}
		if ((x_f-x_i==0) && (y_f-y_i<0)){
			i=-1;
			while (i>y_f-y_i){
				if casilla_ocupada(x_i,y_i+i){return false;}
				i--;}
			return true;}
		if ((y_f-y_i==0) && (x_f-x_i>0)){
			i=1;
			while (i<x_f-x_i){
				if casilla_ocupada(x_i+i,y_i){return false;}
				i++;}
			return true;}
		if ((y_f-y_i==0) && (x_f-x_i<0)){
			i=-1;
			while (i>x_f-x_i){
				if casilla_ocupada(x_i+i,y_i){return false;}
				i--;}
			return true;}
		else {return false;}}
	//reglas alfil
	if (pieza=='B'){
		if ((x_f-x_i)==(y_f-y_i)){
			

	}


// PARA EL ALFIN
/*
Abajo-Izquierda
inicial    3,5
final      1,3
final - inicial = -2,-2

Arriba-Derecha
i= 1,1
f= 2,2
f - i = 1,1

Abajo-Derecha
i = 3,3
f = 1,5
f-i =-2,2

Arriba-Izquierda
i = 4,8
f = 6,6
f-i = 2,-2
*/
/*
while (casilla_ocupada(x,y) || (x != pos_f_x...) || (y !=...)){x++; y++;} //x4 para alfil
while (casilla_ocupada(x,y) //torre
...

//=========================================
bool casilla_ocupada(int x, int y)

*/
