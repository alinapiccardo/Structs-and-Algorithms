//dada una cola con numeros enteros
//mostrar la cantidad de numeros mayores a la suma de los dos primeros elementos ingresados a la cola

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
    int i, dato, suma = 0, contador = 0;
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

    //mostrar la cantidad de numeros mayores a la suma de los dos primeros elementos ingresados a la cola
    aux = cola;
    for (i = 0; i < 2; i++) {
        suma = suma + aux->dato;
        aux = aux->siguiente;
    }
    printf("La suma de los dos primeros elementos es: %d\n", suma);
    while (aux != NULL) {
        if (aux->dato > suma) {
            contador++;
        }
        aux = aux->siguiente;
    }
    printf("La cantidad de numeros mayores a la suma de los dos primeros elementos es: %d\n", contador);

    return 0;
}