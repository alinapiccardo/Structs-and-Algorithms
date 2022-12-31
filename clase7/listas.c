#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct nodo{
    int legajo;
    char nombre[20];
    char apellido[20];
    int cantMaterias;
    struct nodo *sig;
}nodo;

nodo *inicializar(); //inicializa las listas
nodo *crearNodo(); //crea un nodo con la informacion ingresada por el usuario
void agregarNodo(nodo **lista); //agrega un nodo a la lista 
void mostrarLista(nodo *lista); //muestra la lista
void mostrarAlumnos(nodo *lista); //muestra los alumnos con mas de 10 materias
void generarLista(nodo *lista, nodo **lista2); //genera una lista con los alumnos con menos de 3 materias

int main(){
    nodo *lista, *lista2;
    lista = inicializar();
    lista2 = inicializar();
    agregarNodo(&lista);
    mostrarLista(lista);
    mostrarAlumnos(lista);
    generarLista(lista, &lista2);
    mostrarLista(lista2);
    return 0;
}

nodo *inicializar(){
    nodo *lista;
    lista = NULL;
    return lista;
}

nodo *crearNodo(){
    nodo *nuevo;
    nuevo = (nodo*)malloc(sizeof(nodo));
    printf("Ingrese el legajo: ");
    scanf("%d",&nuevo->legajo);
    if (nuevo->legajo!=0){ //si el legajo es 0, no se crea el nodo
        printf("Ingrese el nombre: ");
        scanf("%s",nuevo->nombre);
        printf("Ingrese el apellido: ");
        scanf("%s",nuevo->apellido);
        printf("Ingrese la cantidad de materias aprobadas: ");
        scanf("%d",&nuevo->cantMaterias);
        nuevo->sig = NULL;
    }
    return nuevo;
}

void agregarNodo(nodo **lista){ //puntero doble para poder modificar el puntero de la lista principal
    nodo *nuevo, *aux;
    nuevo = crearNodo(); //crea un nodo con la informacion ingresada por el usuario
    if (nuevo->legajo!=0){ //si el legajo es 0, no se crea el nodo
        if (*lista==NULL){ //si la lista esta vacia el primer nodo es el nodo nuevo
            *lista = nuevo; 
        }
        else{ //si la lista no esta vacia, se agrega el nodo nuevo al final de la lista
            aux = *lista; 
            while(aux->sig!=NULL){ //mientras el campo sig del nodo aux no apunte a NULL
                aux = aux->sig; //aux apunta al siguiente nodo
            }
            aux->sig = nuevo; //el campo sig del ultimo nodo apunta al nodo nuevo
        }
        agregarNodo(lista);
    }
}

void mostrarLista(nodo *lista){
    nodo *aux; 
    aux = lista; 
    printf("\nLISTA DE ALUMNOS:\n");
    while(aux!=NULL){
        printf("Legajo: %d - Nombre: %s - Apellido: %s - Cantidad de materias aprobadas: %d \n",aux->legajo,aux->nombre,aux->apellido,aux->cantMaterias);
        aux = aux->sig;
    }
    printf("\n");
}

void mostrarAlumnos(nodo *lista){
    nodo *aux;
    int cont=0;
    aux = lista;
    while(aux!=NULL){
        if (aux->cantMaterias>10){
            cont++;
        }
        aux = aux->sig;
    }
    printf("La cantidad de alumnos con mas de 10 materias aprobadas es: %d \t",cont);
    printf("\n");
}

void generarLista(nodo *lista, nodo **lista2){
    nodo *aux, *nuevo;
    aux = lista;
    int cont=0;
    while(aux!=NULL){
        if (aux->cantMaterias<3){
            cont++;
            nuevo = (nodo*)malloc(sizeof(nodo));
            nuevo->legajo = aux->legajo;
            strcpy(nuevo->nombre,aux->nombre);
            strcpy(nuevo->apellido,aux->apellido);
            nuevo->cantMaterias = aux->cantMaterias;
            nuevo->sig = NULL;
            if (*lista2==NULL){
                *lista2 = nuevo;
            }
            else{
                nuevo->sig = *lista2;
                *lista2 = nuevo;
            }
        }
        aux = aux->sig;
    }
    printf("\nAlumnos con menos de 3 materias aprobadas: \n");
}