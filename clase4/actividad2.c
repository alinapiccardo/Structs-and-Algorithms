#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 15

int main(){
    float arr[N];
    float *a;
    int i;
    for (i=0;i<N;i++){
        printf("Ingrese el valor de la posicion %d: ",i);
        scanf("%f",&arr[i]);
    }
    printf("El arreglo es: ");
    for (i=0;i<N;i++){
        printf("%.2f \t",arr[i]);
    }
    printf("\n");
    a = arr;
    for (i=0;i<N;i++){
        printf("La direccion de la posicion %d es %p y el contenido es %.2f\n",i,a,*a);
        a++;
    }
    return 0;
}