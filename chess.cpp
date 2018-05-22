#include "chess.h"
#include "node.h"


using namespace std;

void validarPos_i (node nodei,int colorJugador){
	if (GetValue(*nodei)=="  "){cout<<"no hay piezas en esta casilla del tablero"<<endl;return false;}
	if (colorJugador==0){
		if (GetValue(*nodei)=="PD"){cout<<"la pieza seleccionada no corresponde al jugador de turno"<<endl; return false;}
		if (GetValue(*nodei)=="TD"){cout<<"la pieza seleccionada no corresponde al jugador de turno"<<endl; return false;}
		if (GetValue(*nodei)=="ND"){cout<<"la pieza seleccionada no corresponde al jugador de turno"<<endl; return false;}
		if (GetValue(*nodei)=="BD"){cout<<"la pieza seleccionada no corresponde al jugador de turno"<<endl; return false;}
		if (GetValue(*nodei)=="KD"){cout<<"la pieza seleccionada no corresponde al jugador de turno"<<endl; return false;}
		if (GetValue(*nodei)=="QD"){cout<<"la pieza seleccionada no corresponde al jugador de turno"<<endl; return false;}
		else {return true;}
	if (colorJugador==1){
		if (GetValue(*nodei)=="PW"){cout<<"la pieza seleccionada no corresponde al jugador de turno"<<endl; return false;}
		if (GetValue(*nodei)=="TW"){cout<<"la pieza seleccionada no corresponde al jugador de turno"<<endl; return false;}
		if (GetValue(*nodei)=="NW"){cout<<"la pieza seleccionada no corresponde al jugador de turno"<<endl; return false;}
		if (GetValue(*nodei)=="BW"){cout<<"la pieza seleccionada no corresponde al jugador de turno"<<endl; return false;}
		if (GetValue(*nodei)=="KW"){cout<<"la pieza seleccionada no corresponde al jugador de turno"<<endl; return false;}
		if (GetValue(*nodei)=="QW"){cout<<"la pieza seleccionada no corresponde al jugador de turno"<<endl; return false;}
		else {return true;}
	}

void validarPos_f (node nodei, int colorJugador){
	if (GetValue(*nodei)=="  "){return true;}
	if (colorJugador==1){
		if (GetValue(*nodei)=="PD"){cout<<"la casilla ya contiene una pieza del jugador"<<endl; return false;}
		if (GetValue(*nodei)=="TD"){cout<<"la casilla ya contiene una pieza del jugador"<<endl; return false;}
		if (GetValue(*nodei)=="ND"){cout<<"la casilla ya contiene una pieza del jugador"<<endl; return false;}
		if (GetValue(*nodei)=="BD"){cout<<"la casilla ya contiene una pieza del jugador"<<endl; return false;}
		if (GetValue(*nodei)=="KD"){cout<<"la casilla ya contiene una pieza del jugador"<<endl; return false;}
		if (GetValue(*nodei)=="QD"){cout<<"la casilla ya contiene una pieza del jugador"<<endl; return false;}
		else {return true;}
	if (colorJugador==0){
		if (GetValue(*nodei)=="PW"){cout<<"la casilla ya contiene una pieza del jugador"<<endl; return false;}
		if (GetValue(*nodei)=="TW"){cout<<"la casilla ya contiene una pieza del jugador"<<endl; return false;}
		if (GetValue(*nodei)=="NW"){cout<<"la casilla ya contiene una pieza del jugador"<<endl; return false;}
		if (GetValue(*nodei)=="BW"){cout<<"la casilla ya contiene una pieza del jugador"<<endl; return false;}
		if (GetValue(*nodei)=="KW"){cout<<"la casilla ya contiene una pieza del jugador"<<endl; return false;}
		if (GetValue(*nodei)=="QW"){cout<<"la casilla ya contiene una pieza del jugador"<<endl; return false;}
		else {return true;}
	}
