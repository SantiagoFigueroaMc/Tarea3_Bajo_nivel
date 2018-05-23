#include "node.h"

//Metodo que inserta un contenido i en un nodo n
void SetValue(node *n,string i){
	n -> contenido = i;
}

//Metodo que retorna el contenido de un nodo n.
string GetValue(node *n){
	return n -> contenido;
}

//Metodo que setea a un nodo n como nodo siguiente de un nodo h.
void SetNext(node *h,node *n){
	h -> nextNode = n;
}

//Metodo que retorna un puntero del nodo proximo al nodo n.
node *GetNext(node *n){
	return n -> nextNode;
}

//Metodo que setea el nodo n como siguiente al nodo h
void SetNext2(node *h,  node *n){
	h -> nextNode = n;
}

//Metodo que define el nodo n como el inicio de una lista en un nodo h
void SetUp2(node2 *h, node *n){
	h -> upNode = n;
}

//Metodo que retorna un puntero al siguiente nodo
node2 *GetNext2(node2 *n){
	return n -> nextNode;
}

//Metodo que devuelve la cabeza de la lista
node *GetUp2(node2 *n){
	return n -> upNode;
}
