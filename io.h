#ifndef _IO
#define _IO
using namespace std;
#include <iostream>
#include "node.h"
#include <fstream>
#include <string>
#include "validar.h"
#include "chess.h"

void mostrar_tablero(string tablero);

bool string_a_nodo(int color, string pos_i, string pos_f, node2 AA, node headA, node headB, node headC, node headD, node headE, node headF, node headG, node headH);

// Para leer un archivo
bool string_a_nodo_archivo(string nombre_archivo, int linea, int color, string pos_i, string pos_f, node2 AA, node headA, node headB, node headC, node headD, node headE, node headF, node headG, node headH);
#endif
