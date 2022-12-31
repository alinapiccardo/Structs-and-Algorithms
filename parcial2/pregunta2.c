/*Crear una cola con la siguiente información:
num: numero entero.
siguiente: puntero al próximo elemento de la cola.
El ingreso de datos termina con -1.
Escribir una función que permita contar la cantidad de divisores del tercer elemento ingresado a la cola. Si no hubiese tres elementos en la cola, mostrar una leyenda.*/

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
void calcularCantidadDivisoresTercerElemento(cola *p, int *cant);

int main(){
    int i, num, cant=0;
    cola *p = NULL;

    printf("Ingrese un numero: ");
    scanf("%d",&num);
    while (num!=-1){
        encolar(&p, crearNodo(num));
        printf("Ingrese un numero: ");
        scanf("%d",&num);
    }

    calcularCantidadDivisoresTercerElemento(p, &cant);
    if (cant!=0){
        printf("Cantidad de divisores: %d", cant);
    }else{
        printf("No hay tres elementos en la cola");
    }

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
    if (*p==NULL){
        *p = u;
    }else{
        while (aux->sig!=NULL){
            aux = aux->sig;
        }
        aux->sig = u;
    }
}

void calcularCantidadDivisoresTercerElemento(cola *p, int *cant){
    cola *aux = p;
    int i, contador=0;
    while (aux!=NULL){
        contador++;
        if (contador==3){
            for (i=1;i<=aux->num;i++){
                if (aux->num % i == 0){
                    (*cant)++;
                }
            }
        }
        aux = aux->sig;
    }
}