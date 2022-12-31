#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct nodo {
    int dato;
    struct nodo *siguiente;
};

int main() {
    struct nodo *lista = NULL;
    struct nodo *nuevo = NULL;
    struct nodo *aux = NULL;
    int i, dato, posicion = 0, encontrado = 0;
    for (i = 0; i < 5; i++) {
        nuevo = (struct nodo *) malloc(sizeof(struct nodo));
        printf("Ingrese un numero: ");
        scanf("%d", &dato);
        nuevo->dato = dato;
        nuevo->siguiente = lista;
        lista = nuevo;
    }
    printf("\nLa lista es: \n");
    aux = lista;
    while (aux != NULL) {
        printf("%d ", aux->dato);
        aux = aux->siguiente;
    }
    printf("\n");
    printf("Ingrese un numero a buscar: ");
    scanf("%d", &dato);
    aux = lista;
    while (aux != NULL) {
        posicion++;
        if (aux->dato == dato) {
            encontrado = 1;
            break;
        }
        aux = aux->siguiente;
    }
    if (encontrado == 1) {
        printf("El numero %d se encuentra en la posicion %d de la lista\n", dato, posicion);
    } else {
        printf("El numero %d no se encuentra en la lista\n", dato);
    }
    return 0;
}

