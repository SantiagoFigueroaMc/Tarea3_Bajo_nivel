#ifndef NODE
#define NODE

#include <iostream>
#include <string>	
using namespace std;

// Estructura de un nodo (casilla), contenido (KB, PW, " ")
// y un puntero al proximo nodo.
typedef struct node {
	string contenido; 
	struct node *nextNode;
} node;

typedef struct node2 {
	struct node2 *nextNode;//Para pasar entre las cabezas
	struct node *upNode;//Para entrar a una lista
} node2;

//Metodo que inserta un contenido i en un nodo n
void SetValue(node *n, string i);

//Metodo que retorna el valor de un nodo n.
string GetValue(node *n);

//Metodo que setea a un nodo n como nodo siguiente de un nodo h.
void SetNext(node *h, node *n);

//Metodo que retorna un puntero del nodo proximo al nodo n.
node *GetNext(node *n);

//Metodo que setea el nodo n como siguiente al nodo h
void SetNext2(node2 *h,  node2 *n);
//Metodo que define el nodo n como el inicio de una lista en un nodo h
void SetUp2(node2 *h, node *n);
//Metodo que retorna un puntero del nodo proximo
node2 *GetNext2(node2 *n);
//Metodo que devuelve la cabeza de la lista
node *GetUp2(node2 *n);

#endif
