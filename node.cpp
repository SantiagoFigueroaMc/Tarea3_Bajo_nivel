#include "node.h"

//Metodo que inserta un valor i en un nodo n
void SetValue(node *n,int i){
	n -> value = i;
}

//Metodo que retorna el valor de un nodo n.
int GetValue(node *n){
	return n -> value;
}

//Metodo que setea a un nodo n como nodo siguiente de un nodo h.
void SetNext(node *h,node *n){
	h -> nextNode = n;
}

//Metodo que retorna un puntero del nodo proximo al nodo n.
node *GetNext(node *n){
	return n -> nextNode;
}
