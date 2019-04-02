#include "lista.h"

n aux = NULL;
n nodop = NULL;

void insertar(token ele){//recibe la lista donde inserta y el token.
	n nuevo = (nodo*) malloc(sizeof(nodo));
    
	if (nuevo == NULL) exit(1);
	nuevo->sgte = NULL;
	nuevo->t = ele;
    
	if(nodop == NULL) nodop = nuevo;
	else{
		aux = nodop;
		while(aux->sgte != NULL) aux = aux->sgte;
		aux->sgte = nuevo;
	}
	//printf(
}

token extraer(){
	aux = nodop;
	nodop = nodop->sgte;
	return aux->t;
}

int esta_vacia(){
    if (nodop == NULL) return 1;
    else return 0;
}

void listar(){
    if (esta_vacia()) printf("esta vacia la lista");
    n aux = nodop;
    while(aux != NULL){
        printf("comlexico:%d,lexema:%s ,direccion: %p\n",aux->t.complexico,aux->t.lexema,aux->sgte);
        aux = aux->sgte;
    }
}
