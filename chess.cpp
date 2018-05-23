#include "chess.h"
bool movimiento_permitido(char pieza, int color, string coordenada_i,string coordenada_f, node2 AA){
	int x_i, y_i, x_f, y_f;	
	x_i=(int)coordenada_i[0]-48;
	y_i=(int)coordenada_i[1]-48;
	x_f=(int)coordenada_f[0]-48;
	y_f=(int)coordenada_f[1]-48;
	//reglas caballo
	if (pieza=='N'){
		if ((x_i+2==x_f) && (y_i+1==y_f)){return true;}
		if ((x_i+2==x_f) && (y_i-1==y_f)){return true;}
		if ((x_i-2==x_f) && (y_i+1==y_f)){return true;}
		if ((x_i-2==x_f) && (y_i-1==y_f)){return true;}
		if ((x_i+1==x_f) && (y_i+2==y_f)){return true;}
		if ((x_i-1==x_f) && (y_i+2==y_f)){return true;}
		if ((x_i+1==x_f) && (y_i-2==y_f)){return true;}
		if ((x_i-1==x_f) && (y_i-2==y_f)){return true;}
		else {return false;}
		}
	
	int i,j;
	//reglas torre
	if (pieza=='T'){
		if ((x_f-x_i==0) && (y_f-y_i>0)){
			i=1;
			while (i<y_f-y_i){
				if (casilla_ocupada(x_i,y_i+i,AA)){return false;}
				i++;}
			return true;}
		if ((x_f-x_i==0) && (y_f-y_i<0)){
			i=-1;
			while (i>y_f-y_i){
				if (casilla_ocupada(x_i,y_i+i,AA)){return false;}
				i--;}
			return true;}
		if ((y_f-y_i==0) && (x_f-x_i>0)){
			i=1;
			while (i<x_f-x_i){
				if (casilla_ocupada(x_i+i,y_i,AA)){return false;}
				i++;}
			return true;}
		if ((y_f-y_i==0) && (x_f-x_i<0)){
			i=-1;
			while (i>x_f-x_i){
				if (casilla_ocupada(x_i+i,y_i,AA)){return false;}
				i--;}
			return true;}
		else {return false;}}
	//reglas alfil
	if (pieza=='B'){
		if (((x_f-x_i)==(y_f-y_i)) || ((x_f-x_i)==(-1*(y_f-y_i)))){
			if (x_f-x_i<0){i=-1;}
			else {i=1;}
			if (y_f-y_i<0){j=-1;}
			else {j=1;}
			
			int tx=x_i+i, ty=y_i+j;
			while ((tx!=x_f) && (ty!=y_f)){
				if (casilla_ocupada(tx,ty,AA)){return false;}
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
				if (casilla_ocupada(x_i,y_i+i,AA)){return false;}
				i++;}
			valor=1;}
		if ((x_f-x_i==0) && (y_f-y_i<0)){
			i=-1;
			while (i>y_f-y_i){
				if (casilla_ocupada(x_i,y_i+i,AA)){return false;}
				i--;}
			valor=1;}
		if ((y_f-y_i==0) && (x_f-x_i>0)){
			i=1;
			while (i<x_f-x_i){
				if (casilla_ocupada(x_i+i,y_i,AA)){return false;}
				i++;}
			valor=1;}
		if ((y_f-y_i==0) && (x_f-x_i<0)){
			i=-1;
			while (i>x_f-x_i){
				if (casilla_ocupada(x_i+i,y_i,AA)){return false;}
				i--;}
			valor=1;}
		if (((x_f-x_i)==(y_f-y_i)) || ((x_f-x_i)==(-1*(y_f-y_i)))){
			if (x_f-x_i<0){i=-1;}
			else {i=1;}
			if (y_f-y_i<0){j=-1;}
			else {j=1;}
			
			int tx=x_i+i, ty=y_i+j;
			while ((tx!=x_f) && (ty!=y_f)){
				if (casilla_ocupada(tx,ty,AA)){return false;}
				tx+=i;
				ty+=j;}
			valor=1;}
		else {return false;}
		if (valor=1){return true;}
		if (valor=0){return false;}}
	//reglas rey
	if (pieza='K'){
		if ((x_f-x_i<=1) && (x_f-x_i>=-1)){if ((y_f-y_i<=1) && (y_f-y_i>=-1)){
			if ((x_f-x_i==0) && (y_f-y_i>0)){return true;}
			if ((x_f-x_i==0) && (y_f-y_i<0)){return true;}
			if ((y_f-y_i==0) && (x_f-x_i>0)){return true;}
			if ((y_f-y_i==0) && (x_f-x_i<0)){return true;}
			if (((x_f-x_i)==(y_f-y_i)) || ((x_f-x_i)==-(y_f-y_i))){return true;}}}
		else {return false;}}
	//reglas peon blanco		
	if ((pieza=='P') && (color==0)){
		if (x_i==2){
			if ((y_f-y_i)==0){if ((x_f-x_i==1) || (x_f-x_i==2)){if ((!casilla_ocupada(x_i+1,y_i,AA))){
										if ((!casilla_ocupada(x_i+2,y_i,AA)) && (x_i+2==x_f)){return true;}
										return true;}}}}
		if ((y_f-y_i==0) && (x_f-1==x_i)){if (!casilla_ocupada(x_f,y_i,AA)){return true;}}
		if ((y_f+1==y_i) || (y_f-1==y_i)){if (x_f-1==x_i){return true;}}
		else {return false;}}
	//reglas peon negro
	if ((pieza=='P') && (color==1)){
		if (x_i==2){
			if ((y_f-y_i)==0){if ((x_f-x_i==-1) || (x_f-x_i==-2)){if ((!casilla_ocupada(x_f,y_i,AA)) || (!casilla_ocupada(x_i-1,y_i,AA))){return true;}}}}
		if ((y_f-y_i==0) && (x_f+1==x_i)){if (!casilla_ocupada(x_f,y_i,AA)){return true;}}
		if ((y_f+1==y_i) || (y_f-1==y_i)){if (x_f+1==x_i){return true;}}
		else {return false;}}
	}



