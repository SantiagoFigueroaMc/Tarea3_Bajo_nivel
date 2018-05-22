#ifndef _CHESS
#define _CHESS

#include <iostream>
#include "node.h"
#include <string>
using namespace std;

//Verifica validez de la posicion inicial
bool validarPos_i (node* nodei,int colorJugador);

//Valida posicion final
bool validarPos_f (node* nodei, int colorJugador);
#endif
