//crear una cola con un entero y un puntero a siguiente
//desarrollar un programa que permita ingresar elementos a una cola y mostrarla
//ordenar en orden descendente la cola y mostrarla
//generar otra cola que contenga los elementos impares de la cola original y mostrarla
//generar otra cola que contenga los elementos pares de la cola original y mostrarla

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct nodo {
    int dato;
    struct nodo *siguiente;
};

int main() {
    struct nodo *cola = NULL;
    struct nodo *nuevo = NULL;
    struct nodo *aux = NULL;
    int i, dato;
    for (i = 0; i < 5; i++) {
        nuevo = (struct nodo *) malloc(sizeof(struct nodo));
        printf("Ingrese un numero: ");
        scanf("%d", &dato);
        nuevo->dato = dato;
        nuevo->siguiente = cola;
        cola = nuevo;
    }
    printf("\nLa cola es: \n");
    aux = cola;
    while (aux != NULL) {
        printf("%d ", aux->dato);
        aux = aux->siguiente;
    }
    printf("\n");

    //ordenar los elementos de la cola de menor a mayor y mostrarla
    struct nodo *colaOrdenada = NULL;
    struct nodo *nuevoOrdenado = NULL;
    struct nodo *auxOrdenado = NULL;
    aux = cola;
    while (aux != NULL) {
        nuevoOrdenado = (struct nodo *) malloc(sizeof(struct nodo));
        nuevoOrdenado->dato = aux->dato;
        nuevoOrdenado->siguiente = colaOrdenada;
        colaOrdenada = nuevoOrdenado;
        aux = aux->siguiente;
    }
    printf("\nLa cola ordenada es: \n");
    auxOrdenado = colaOrdenada;
    while (auxOrdenado != NULL) {
        printf("%d ", auxOrdenado->dato);
        auxOrdenado = auxOrdenado->siguiente;
    }
    printf("\n");

    //generar otra cola que contenga los elementos impares de la cola original y mostrarla
    struct nodo *colaImpares = NULL;
    struct nodo *nuevoImpar = NULL;
    struct nodo *auxImpar = NULL;
    aux = cola;
    while (aux != NULL) {
        if (aux->dato % 2 != 0) {
            nuevoImpar = (struct nodo *) malloc(sizeof(struct nodo));
            nuevoImpar->dato = aux->dato;
            nuevoImpar->siguiente = colaImpares;
            colaImpares = nuevoImpar;
        }
        aux = aux->siguiente;
    }
    printf("\nLa cola de impares es: \n");
    auxImpar = colaImpares;
    while (auxImpar != NULL) {
        printf("%d ", auxImpar->dato);
        auxImpar = auxImpar->siguiente;
    }
    printf("\n");

    //generar otra cola que contenga los elementos pares de la cola original y mostrarla
    struct nodo *colaPares = NULL;
    struct nodo *nuevoPar = NULL;
    struct nodo *auxPar = NULL;
    aux = cola;
    while (aux != NULL) {
        if (aux->dato % 2 == 0) {
            nuevoPar = (struct nodo *) malloc(sizeof(struct nodo));
            nuevoPar->dato = aux->dato;
            nuevoPar->siguiente = colaPares;
            colaPares = nuevoPar;
        }
        aux = aux->siguiente;
    }
    printf("\nLa cola de pares es: \n");
    auxPar = colaPares;
    while (auxPar != NULL) {
        printf("%d ", auxPar->dato);
        auxPar = auxPar->siguiente;
    }
    printf("\n");

    return 0;
}
