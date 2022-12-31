/*Crear una pila con la siguiente información:
num: numero entero.
siguiente: puntero al próximo elemento de la pila.
El ingreso de datos termina con -1.
Escribir una función que permita calcular:
Si todos los elementos de la pila en posición impar son múltiplos de 5, mostrar su sumatoria.
De lo contrario mostrar su promedio.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct pila{
    int num;
    struct pila *sig;
}pila;

pila* crearNodo(int num);
void apilar(pila **p, pila *u);
void calcularSumatoriaMultiplos5(pila *p, int *sumatoria);
void calcularPromedio(pila *p, float *promedio);

int main(){
    int i, num, sumatoria=0;
    float promedio=0;
    pila *p = NULL;

    printf("Ingrese un numero: ");
    scanf("%d",&num);
    while (num!=-1){
        apilar(&p, crearNodo(num));
        printf("Ingrese un numero: ");
        scanf("%d",&num);
    }

    calcularSumatoriaMultiplos5(p, &sumatoria);
    calcularPromedio(p, &promedio);
    if (sumatoria!=0){
        printf("Sumatoria: %d", sumatoria);
    }else{
        printf("Promedio: %.2f", promedio);
    }

    getchar();
    return 0;
}

pila* crearNodo(int num){
    pila* u;
    u = (pila*)malloc(sizeof(pila));
    u->num = num;
    u->sig = NULL;
    return u;
}

void apilar(pila **p, pila *u){
    u->sig = *p;
    *p = u;
}

void calcularSumatoriaMultiplos5(pila *p, int *sumatoria){
    pila *aux = p;
    int i=1;
    while (aux!=NULL){
        if (i%2!=0 && aux->num%5!=0){
            *sumatoria = 0;
            break;
        }else if (i%2!=0){
            *sumatoria += aux->num;
        }
        i++;
        aux = aux->sig;
    }
}

void calcularPromedio(pila *p, float *promedio){
    pila *aux = p;
    int i=0;
    while (aux!=NULL){
        *promedio += aux->num;
        i++;
        aux = aux->sig;
    }
    *promedio /= i;
}