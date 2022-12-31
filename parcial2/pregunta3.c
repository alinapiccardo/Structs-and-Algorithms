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
void calcularPromedio(treenode *root, int *suma, int *cant, int raiz);
void calcularHojasImpares(treenode *root, int *cant, int raiz);

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

    printf("\nPromedio de los elementos mayores a la raiz con un solo hijo: ");
    calcularPromedio(root, &suma, &cant, root->dato);
    printf("%d", suma/cant);

    printf("\nCantidad de nodos hojas impares menores a la raiz: ");
    calcularHojasImpares(root, &cant, root->dato);
    printf("%d", cant);

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

void calcularPromedio(treenode *root, int *suma, int *cant, int raiz){
    if(root!=NULL){
        calcularPromedio(root->izq, suma, cant, raiz);
        if(root->dato>raiz){
            if(root->izq==NULL && root->der!=NULL){
                *suma+=root->dato;
                *cant+=1;
            }
            else if(root->izq!=NULL && root->der==NULL){
                *suma+=root->dato;
                *cant+=1;
            }
        }
        calcularPromedio(root->der, suma, cant, raiz);
    }
}

void calcularHojasImpares(treenode *root, int *cant, int raiz){
    cant=0;
    if(root!=NULL){
        calcularHojasImpares(root->izq, cant, raiz);
        if(root->dato<raiz){
            if(root->izq==NULL && root->der==NULL){
                if(root->dato%2!=0){
                    if((root->izq!=NULL && root->der==NULL) || (root->izq==NULL && root->der!=NULL)){
                        *cant+=1;
                    }
                }
            }
        }
        calcularHojasImpares(root->der, cant, raiz);
    }
}