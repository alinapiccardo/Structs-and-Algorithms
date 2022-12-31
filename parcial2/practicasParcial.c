/* Crear y Mostrar un árbol binario de búsqueda. 
Calcular y mostrar:
Cantidad de los elementos pares con un hijo
Mínimo elemento impar del árbol */

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
void calcularPares(treenode *root, int *cant);
void minImpar(treenode *root, int *min);

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
    printf("\nCantidad de Elementos Pares con 1 hijo: ");
    calcularPares(root, &cant);
    printf("%d", cant);
    printf("\nMinimo Elemento Impar: ");
    minImpar(root, &dato);
    printf("%d", dato);

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

void calcularPares(treenode *root, int *cant){
    if(root!=NULL){
        calcularPares(root->izq, cant);
        if(root->dato%2==0){
            if((root->izq!=NULL && root->der==NULL) || (root->izq==NULL && root->der!=NULL)){
                *cant=*cant+1;
            }
        }
        calcularPares(root->der, cant);
    }
}

void minImpar(treenode *root, int *min){
    if(root!=NULL){
        minImpar(root->izq, min);
        if(root->dato%2!=0){
            if(*min==0){
                *min=root->dato;
            }
            else{
                if(root->dato<*min){
                    *min=root->dato;
                }
            }
        }
        minImpar(root->der, min);
    }
}