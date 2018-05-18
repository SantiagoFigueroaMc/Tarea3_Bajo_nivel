#include "node.h"
using namespace std;


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

