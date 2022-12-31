/*Crear y Mostrar un árbol binario de búsqueda.
Calcular y mostrar: Promedio de los elementos mayores a la raiz con un solo hijo.
Calcular y mostrar: Cantidad de nodos hojas impares menores a la raiz.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct arbol{
    int dato;
    struct arbol *izq;
    struct arbol *der;
}treenode;

treenode *crearnodo(int dato);
void insertar(treenode **root, int dato);
void mostrar(treenode *root);

int main(){
    treenode *root=NULL;
    int dato, cant=0, suma=0;
    printf("Ingrese un numero: ");
    scanf("%d", &dato);
    while(dato!=0){
        insertar(&root, dato);
        printf("Ingrese un numero: ");
        scanf("%d", &dato);
    }
    printf("\nArbol: \n");
    mostrar(root);
    return 0;
}

treenode *crearnodo(int dato){
    treenode *nuevo;
    nuevo=(treenode*)malloc(sizeof(treenode));
    nuevo->dato=dato;
    nuevo->izq=NULL;
    nuevo->der=NULL;
    return nuevo;
}

void insertar(treenode **root, int dato){
    if(*root==NULL){
        *root=crearnodo(dato);
    }
    else{
        if(dato<(*root)->dato){
            insertar(&(*root)->izq, dato);
        }
        else{
            insertar(&(*root)->der, dato);
        }
    }
}

void mostrar(treenode *root){
    if(root!=NULL){
        mostrar(root->izq);
        printf("%d ", root->dato);
        mostrar(root->der);
    }
}