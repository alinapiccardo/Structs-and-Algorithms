/*Crear una cola con la siguiente información:
num: numero entero
siguiente: puntero al próximo elemento de la cola
Escribir una función para calcular el máximo elemento de la cola y en qué posición está*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct cola{
    int num;
    struct cola *sig;
}cola;

cola* crearNodo(int num);
void encolar(cola **p, cola *u);
void calcularMaximo(cola *p, int *max, int *pos);

int main(){
    int i, num, max=0, pos=0;
    cola *p = NULL;

    for (i=0;i<4;i++){
        printf("Ingrese un numero: ");
        scanf("%d",&num);
        encolar(&p, crearNodo(num));
    }

    calcularMaximo(p, &max, &pos);
    printf("Maximo elemento: %d", max);
    printf("\nPosicion: %d", pos+1);

    getchar();
    return 0;
}

cola* crearNodo(int num){
    cola* u;
    u = (cola*)malloc(sizeof(cola));
    u->num = num;
    u->sig = NULL;
    return u;
}

void encolar(cola **p, cola *u){
    cola *aux = *p;
    if (*p == NULL){
        *p = u;
    }else{
        while (aux->sig!=NULL){
            aux = aux->sig;
        }
        aux->sig = u;
    }
}

void calcularMaximo(cola *p, int *max, int *pos){
    cola *aux = p;
    int i=0;
    while (aux!=NULL){
        if (aux->num > *max){
            *max = aux->num;
            *pos = i;
        }
        aux = aux->sig;
        i++;
    }
}