#include <stdio.h>
#include <math.h>
#include <string.h>
#define LARGO 30 

//PUNTEROS --> tipo de variable que apunta a una posicion de memoria

int main() {   

    char text[LARGO] = "mi nombre es alina";
    
    char *p;
    p=&text[4];

    //se imprime todo el puntero del espacio de la memoria
    printf("%p\n", p);

    //se imprime el caracter apuntado
    printf("%c", *p); //o

    int numero[3]={2,3,4};
    int *puntero;

    puntero=&numero[0];
    //aca veo el dato
    printf("\n%d", *puntero);

    //aca veo la direccion de memoria
    printf("\n%p", puntero);

    //EL * funciona para asignar o mostrar valores
    //la variable es la que me lleva a la posicion

    for (int i = 0; i < 3; i++) {
        printf("\n\nIMPRIMIENDO 1:\nEspacio en Memoria: %p\n", puntero);
        printf("Valor: %d", *puntero);
        *puntero=*puntero+1;
        puntero++;
    }
    
    puntero=&numero[0];
    for (int i = 0; i < 3; i++) {
        printf("\n\nIMPRIMIENDO 2:\nEspacio en Memoria: %p\n", puntero);
        printf("Valor: %d", *puntero);
        puntero++;
    }
    return 0;
}