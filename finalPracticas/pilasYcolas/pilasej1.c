//crear una pila con un entero y un puntero a siguiente
//desarrollar un programa que permita ingresar elementos a una pila y mostrarla
//invertir los elementos de la pila y mostrarlos

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct nodo {
    int dato;
    struct nodo *siguiente;
};

int main() {
    struct nodo *pila = NULL;
    struct nodo *nuevo = NULL;
    struct nodo *aux = NULL;
    int i, dato;
    for (i = 0; i < 5; i++) {
        nuevo = (struct nodo *) malloc(sizeof(struct nodo));
        printf("Ingrese un numero: ");
        scanf("%d", &dato);
        nuevo->dato = dato;
        nuevo->siguiente = pila;
        pila = nuevo;
    }
    printf("\nLa pila es: \n");
    aux = pila;
    while (aux != NULL) {
        printf("%d ", aux->dato);
        aux = aux->siguiente;
    }
    printf("\n");

    //invertir los elementos de la pila y mostrarlos
    struct nodo *pilaInvertida = NULL;
    struct nodo *nuevoInvertido = NULL;
    struct nodo *auxInvertido = NULL;
    aux = pila;
    while (aux != NULL) {
        nuevoInvertido = (struct nodo *) malloc(sizeof(struct nodo));
        nuevoInvertido->dato = aux->dato;
        nuevoInvertido->siguiente = pilaInvertida;
        pilaInvertida = nuevoInvertido;
        aux = aux->siguiente;
    }
    printf("\nLa pila invertida es: \n");
    auxInvertido = pilaInvertida;
    while (auxInvertido != NULL) {
        printf("%d ", auxInvertido->dato);
        auxInvertido = auxInvertido->siguiente;
    }
    printf("\n");
    
    return 0;
}