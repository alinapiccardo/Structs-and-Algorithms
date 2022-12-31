#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct tiponodo{
    int dato;
    struct tiponodo *sig;
}nodo;

nodo* crearNodo(int dato);
nodo desapilar(nodo **p);
void apilar(nodo **p, nodo *u);
void mostrar(nodo datos);

int main(){
    int i, num;
    nodo *p = NULL;

    for (i=0;i<4;i++){
        printf("Ingrese un numero: ");
        scanf("%d",&num);
        apilar(&p, crearNodo(num));
    }

    printf("\nDESAPILAR\n");
    while (p!=NULL){
        mostrar(desapilar(&p));
    }

    getchar();
    return 0;
}

nodo* crearNodo(int dato){
    nodo* u;
    u = (nodo*)malloc(sizeof(nodo));
    u->dato = dato;
    u->sig = NULL;
    return u;
}

void apilar(nodo **p, nodo *u){
    printf("Apilando\n");
    u->sig = *p;
    printf("%d, p=%p, u=%p\n",u->dato,*p,u);
    *p = u;
}

nodo desapilar(nodo **p){
    nodo* aux;
    nodo datos;
    datos = **p;
    aux = *p;
    *p = (*p)->sig;
    free(aux);
    return datos;
}

void mostrar(nodo datos){
    printf("Dato: %d\n",datos.dato);
}