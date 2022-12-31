//Leer numeros enteros hasta cargar un arreglo de 10 elementos donde los primeros 5 son positivos y los restantes son negativos
//mostar los primeros 4 elementos mayores del arreglo
//generar otro arreglo intercalando el numero positivo con los numeros negativos y mostrarlo

#include <stdio.h>
#include <string.h>
#include <math.h>
#define LARGO 10

int main() {
    int arreglo[LARGO], i, j, mayor, aux, arreglo2[LARGO];
    for (i = 0; i < 5; i++) {
        printf("Ingrese un numero positivo: ");
        scanf("%d", &arreglo[i]);
    }
    for (i = 5; i < 10; i++) {
        printf("Ingrese un numero negativo: ");
        scanf("%d", &arreglo[i]);
    }

    for (i = 0; i < 5; i++) {
        for (j = i+1; j < 5; j++) {
            if (arreglo[j] > arreglo[i]) {
                mayor = arreglo[j];
                arreglo[j] = arreglo[i];
                arreglo[i] = mayor;
            }
        }
    }

    for (i = 0; i < 5; i++) {
        arreglo2[i * 2] = arreglo[i];
        arreglo2[i * 2 + 1] = arreglo[i + 5];
    }

    for (i = 0; i < 4; i++) {
        printf("%d\t", arreglo[i]);
    }
    
    printf("\n");
    for (i = 0; i < 10; i++) {
        printf("%d\t", arreglo2[i]);
    }
   
    return 0;
}