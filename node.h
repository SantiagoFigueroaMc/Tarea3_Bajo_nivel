#ifndef NODE
#define NODE

//Estructura de un nodo, con su valor y un puntero al proximo nodo.
typedef struct node {
	int value;
	struct node *nextNode;
} node;

//Metodo que inserta un valor i en un nodo n
void SetValue(node *n,int i);

//Metodo que retorna el valor de un nodo n.
int GetValue(node *n);

//Metodo que setea a un nodo n como nodo siguiente de un nodo h.
void SetNext(node *h,node *n);

//Metodo que retorna un puntero del nodo proximo al nodo n.
node *GetNext(node *n);

#endif
