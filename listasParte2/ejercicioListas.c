#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct lista{
    int numero1;
    int numero2;
    int numero3;
    struct lista *sig;
}nodo;

nodo *inicializar();
nodo *crearNodo();
void agregarNodo(nodo **lista);
void mostrarLista(nodo *lista);
void insertarDoble(nodo **lista);
void eliminarNodo(nodo **lista);

int main(){
    nodo *lista;
    lista = inicializar();
    int opcion;
    printf("\nELEGIR OPCION:\n1 - Cargar datos lista\n0 - Finalizar:\n ");
    scanf("%d",&opcion);
    if (opcion==0){
        printf("Gracias por utilizar el programa");
        return 0;
    }
    while (opcion==1){
        agregarNodo(&lista);
        insertarDoble(&lista);
        eliminarNodo(&lista);
        printf("\nELEGIR OPCION:\n1 - Cargar datos lista\n0 - Finalizar Carga de Datos y Ver Lista:\n ");
        scanf("%d",&opcion);
    }
    printf("\nLista Final:\n");
    mostrarLista(lista);
}

nodo *inicializar(){
    return NULL;
}

nodo *crearNodo(){
    nodo *nuevo;
    nuevo = (nodo*)malloc(sizeof(nodo));
    printf("Ingrese el primer numero: ");
    scanf("%d",&nuevo->numero1);
    printf("Ingrese el segundo numero: ");
    scanf("%d",&nuevo->numero2);
    printf("Ingrese el tercer numero: ");
    scanf("%d",&nuevo->numero3);
    nuevo->sig = NULL;
    return nuevo;
}

void agregarNodo(nodo **lista){
    nodo *nuevo;
    nuevo = crearNodo();
    if (*lista == NULL){
        *lista = nuevo;
    }
    else{
        nodo *aux;
        aux = *lista;
        while (aux->sig != NULL){
            aux = aux->sig;
        }
        aux->sig = nuevo;
    }
}

void mostrarLista(nodo *lista){
    nodo *aux;
    aux = lista;
    while (aux != NULL){
        printf("%d | %d | %d ->\n",aux->numero1,aux->numero2,aux->numero3);
        aux = aux->sig;
    }
    printf("NULL \n");
}

void insertarDoble(nodo **lista){
    nodo *aux;
    aux = *lista;
    while (aux->sig != NULL){
        aux = aux->sig;
    }
    if (aux->numero1 + aux->numero2 + aux->numero3 > 20){
        nodo *nuevo;
        nuevo = (nodo*)malloc(sizeof(nodo));
        nuevo->numero1 = aux->numero1 * 2;
        nuevo->numero2 = aux->numero2 * 2;
        nuevo->numero3 = aux->numero3 * 2;
        nuevo->sig = NULL;
        aux->sig = nuevo;
    }
}

void eliminarNodo(nodo **lista){
    nodo *aux;
    aux = *lista;
    while (aux->sig != NULL){
        aux = aux->sig;
    }
    if (aux->numero1 + aux->numero2 + aux->numero3 == 20){
        nodo *aux2;
        aux2 = *lista;
        printf("ELIMINADO: %d | %d | %d \n",aux->numero1,aux->numero2,aux->numero3);
        while (aux2->sig != aux){
            aux2 = aux2->sig;
        }
        aux2->sig = NULL;
        free(aux);
    }
}