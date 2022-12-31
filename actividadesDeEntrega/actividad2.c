#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct nodo{
    int dato;
    struct nodo *izq;
    struct nodo *der;
};

struct nodo *raiz=NULL;

void insertar(int x);
void preorden(struct nodo *r);
void inorden(struct nodo *r);
void postorden(struct nodo *r);
int maximoMultiplo(int x);
int cantHojasDivisores(int x);
int sumatoriaParesConHijo(int x);

int main(){
    int x, max, cant, sum;
    printf("Ingrese un numero: ");
    scanf("%d", &x);
    while(x!=0){
        insertar(x);
        printf("Ingrese un numero: ");
        scanf("%d", &x);
    }
    printf("\nPreorden: ");
    preorden(raiz);
    printf("\nInorden: ");
    inorden(raiz);
    printf("\nPostorden: ");
    postorden(raiz);
    max=maximoMultiplo(raiz->dato);
    printf("\nEl valor maximo multiplo de la raiz es: %d", max);
    cant=cantHojasDivisores(raiz->dato);
    printf("\nLa cantidad de hojas divisores de la raiz es: %d", cant);
    sum=sumatoriaParesConHijo(raiz->dato);
    printf("\nLa sumatoria de los pares con hijo es: %d", sum);
    return 0;
}

void insertar(int x){
    struct nodo *nuevo;
    nuevo=(struct nodo*)malloc(sizeof(struct nodo));
    nuevo->dato=x;
    nuevo->izq=NULL;
    nuevo->der=NULL;
    if(raiz==NULL){
        raiz=nuevo;
    }
    else{
        struct nodo *anterior, *reco;
        anterior=NULL;
        reco=raiz;
        while(reco!=NULL){
            anterior=reco;
            if(x<reco->dato){
                reco=reco->izq;
            }
            else{
                reco=reco->der;
            }
        }
        if(x<anterior->dato){
            anterior->izq=nuevo;
        }
        else{
            anterior->der=nuevo;
        }
    }
}

void preorden(struct nodo *r){
    if(r!=NULL){
        printf("%d ", r->dato);
        preorden(r->izq);
        preorden(r->der);
    }
}

void inorden(struct nodo *r){
    if(r!=NULL){
        inorden(r->izq);
        printf("%d ", r->dato);
        inorden(r->der);
    }
}

void postorden(struct nodo *r){
    if(r!=NULL){
        postorden(r->izq);
        postorden(r->der);
        printf("%d ", r->dato);
    }
}

int maximoMultiplo(int x){
    struct nodo *reco;
    reco=raiz;
    int max=0;
    while(reco!=NULL){
        if(reco->dato%x==0 && reco->dato>max){
            max=reco->dato;
        }
        reco=reco->der;
    }
    return max;
}

int cantHojasDivisores(int x){
    struct nodo *reco;
    reco=raiz;
    int cant=0;
    while(reco!=NULL){
        if(reco->dato%x==0 && reco->izq==NULL && reco->der==NULL){
            cant++;
        }
        reco=reco->der;
    }
    return cant;
}

int sumatoriaParesConHijo(int x){
    struct nodo *reco;
    reco=raiz;
    int sum=0;
    while(reco!=NULL){
        if(reco->dato%2==0 && (reco->izq!=NULL || reco->der!=NULL)){
            sum+=reco->dato;
        }
        reco=reco->der;
    }
    return sum;
}
