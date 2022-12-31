/*Crear una pila con la siguiente información:
num: numero entero
siguiente: puntero al próximo elemento de la pila
Escribir la función necesaria para calcular la cantidad de elementos múltiplos del último número ingresado a la pila. Si no hubiera ningún número mostrar una leyenda*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct pila{
    int num;
    struct pila *sig;
}pila;

pila* crearNodo(int num);
void apilar(pila **p, pila *u);
void calcularElementosMultiplos(pila *p, int *cant);

int main(){
    int i, num, cant=0;
    pila *p = NULL;

    for (i=0;i<4;i++){
        printf("Ingrese un numero: ");
        scanf("%d",&num);
        apilar(&p, crearNodo(num));
    }

    calcularElementosMultiplos(p, &cant);
    printf("Cantidad de elementos multiplos: %d", cant);

    getchar();
    return 0;
}

pila* crearNodo(int num){
    pila* u;
    u = (pila*)malloc(sizeof(pila));
    u->num = num;
    u->sig = NULL;
    return u;
}

void apilar(pila **p, pila *u){
    u->sig = *p;
    *p = u;
}

void calcularElementosMultiplos(pila *p, int *cant){
    int ultimoElemento = p->num;
    pila *aux = p;
    while (aux!=NULL){
        if (aux->num % ultimoElemento == 0){
            (*cant)++;
        }
        aux = aux->sig;
    }
}