#include "chess.h"
bool movimiento_permitido(char pieza, int color, string coordenada_i,string coordenada_f, node2 A){
	int x_i, y_i, x_f, y_f;	
	x_i=(int)coordenada_i[0];
	y_i=(int)coordenada_i[1];
	x_f=(int)coordenada_f[0];
	y_f=(int)coordenada_f[1];
	//reglas caballo
	if (pieza=='N'){
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
	
	int i,j;
	//reglas torre
	if (pieza=='T'){
		if ((x_f-x_i==0) && (y_f-y_i>0)){
			i=1;
			while (i<y_f-y_i){
				if casilla_ocupada(x_i,y_i+i,A){return false;}
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
		if (((x_f-x_i)==(y_f-y_i)) || ((x_f-x_i)==-(y_f-y_i))){
			if (x_f-x_i<0){i=-1;}
			else {i=1;}
			if (y_f-y_i<0){j=-1;}
			else {j=1;}
			
			int tx=x_i+1, ty=y_i+1;
			while ((tx!=x_f) && (ty!=y_f)){
				if casilla_ocupada(tx,ty){return false;}
				tx+=i;
				ty+=j;}
			return true;}
		else {return false;}}
	
	//reglas reina
	if (pieza=='Q'){
		int valor=0;
		if ((x_f-x_i==0) && (y_f-y_i>0)){
			i=1;
			while (i<y_f-y_i){
				if casilla_ocupada(x_i,y_i+i){valor=0;}
				i++;}
			valor=1;}
		if ((x_f-x_i==0) && (y_f-y_i<0)){
			i=-1;
			while (i>y_f-y_i){
				if casilla_ocupada(x_i,y_i+i){valor=0;}
				i--;}
			valor=1;}
		if ((y_f-y_i==0) && (x_f-x_i>0)){
			i=1;
			while (i<x_f-x_i){
				if casilla_ocupada(x_i+i,y_i){valor=0;}
				i++;}
			valor=1;}
		if ((y_f-y_i==0) && (x_f-x_i<0)){
			i=-1;
			while (i>x_f-x_i){
				if casilla_ocupada(x_i+i,y_i){valor=0;}
				i--;}
			valor=1;}
		if ((x_f-x_i)==(y_f-y_i)){
			if (x_f-x_i<0){i=-1;}
			else {i=1;}
			if (y_f-y_i<0){j=-1;}
			else {j=1;}
			
			int tx=x_i+1, ty=y_i+1;
			while ((tx!=x_f) && (ty!=y_f)){
				if casilla_ocupada(tx,ty){valor=0;}
				tx+=i;
				ty+=j;}
			valor=1;}
		else {valor=0;}
		if (valor=1){return true}
		if (valor=0){return false}}
	//reglas rey
	if (pieza='K'){
		if ((x_f-x_i==0) && (y_f-y_i>0)){return true;}
		if ((x_f-x_i==0) && (y_f-y_i<0)){return true;}
		if ((y_f-y_i==0) && (x_f-x_i>0)){return true;}
		if ((y_f-y_i==0) && (x_f-x_i<0)){return true;}
		if (((x_f-x_i)==(y_f-y_i)) || ((x_f-x_i)==-(y_f-y_i))){return true;}
		else {return false;}}
	//reglas peon blanco		
	if ((pieza=='P') && (color==0)){
		if (x_i==2){
			if ((y_f-y_i==0){if (x_f-x_i==1 || x_f-x_i==2)){if (!casilla_ocupada(x_f,y_i) || !casilla_ocupada(x_i+1,y_i)){return true;}}}
		if ((y_f-y_i==0) && (x_f-1==x_i)){if (!casilla_ocupada(x_f,y_i)){return true;}}
		if ((y_f+1==y_i) || (y_f-1==y_i)){if (x_f-1=x_i){return true;}}
		else {return false;}
	//reglas peon negro
	if ((pieza=='P') && (color==1)){
		if (x_i==2){
			if ((y_f-y_i==0){if (x_f-x_i==-1 || x_f-x_i==-2)){if (!casilla_ocupada(x_f,y_i) || !casilla_ocupada(x_i-1,y_i)){return true;}}}
		if ((y_f-y_i==0) && (x_f+1==x_i)){if (!casilla_ocupada(x_f,y_i)){return true;}}
		if ((y_f+1==y_i) || (y_f-1==y_i)){if (x_f+1=x_i){return true;}}
		else {return false;}
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
