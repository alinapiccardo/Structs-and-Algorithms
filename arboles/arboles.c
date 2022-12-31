/*Crear un árbol binario de búsqueda ingresando valores por teclado hasta que el numero ingresado sea 0.
Calcular el promedio de todos los nodos del sub árbol izquierdo y del derecho.
Mostrar el árbol de las tres maneras. (orden, postorden, preorden) 
Uno de los mostrar debe ser con forma de árbol.*/

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
void mostrarpre(treenode *root);
void mostrarpost(treenode *root);
void mostrararbol(treenode *root, int n);

int main(){
    treenode *root=NULL;
    int dato, suma=0, cant=0;
    printf("Ingrese un numero: ");
    scanf("%d", &dato);
    while(dato!=0){
        insertar(&root, dato);
        printf("Ingrese un numero: ");
        scanf("%d", &dato);
    }
    printf("\nInorden: ");
    mostrar(root);
    printf("\nPreorden: ");
    mostrarpre(root);
    printf("\nPostorden: ");
    mostrarpost(root);
    printf("\nArbol: ");
    mostrararbol(root, 0);
    
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

void mostrarpre(treenode *root){
    if(root!=NULL){
        printf("%d ", root->dato);
        mostrarpre(root->izq);
        mostrarpre(root->der);
    }
}

void mostrarpost(treenode *root){
    if(root!=NULL){
        mostrarpost(root->izq);
        mostrarpost(root->der);
        printf("%d ", root->dato);
    }
}

//mostrar arbol con forma de arbol
void mostrararbol(treenode *root, int n){
    int i;
    if(root!=NULL){
        mostrararbol(root->der, n+1);
        for(i=0; i<n; i++){
            printf(" ");
        }
        printf("%d ", root->dato);
        printf("\n");
        mostrararbol(root->izq, n+1);
    }
}