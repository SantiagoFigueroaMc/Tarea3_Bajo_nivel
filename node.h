#ifndef NODE
#define NODE

#include <iostream>
#include <string>

using namespace std;

// Estructura de un nodo (casilla), contenido (KB, PW, " ")
// y un puntero al proximo nodo.
typedef struct node {string contenido; struct node *nextNode;} node;

//Metodo que inserta un contenido i en un nodo n
void SetValue(node *n, string i);

//Metodo que retorna el valor de un nodo n.
string GetValue(node *n);

//Metodo que setea a un nodo n como nodo siguiente de un nodo h.
void SetNext(node *h,node *n);

//Metodo que retorna un puntero del nodo proximo al nodo n.
node *GetNext(node *n);

#endif
