//generar un vector con 30 numeros aleatorios entre 1 y 100 y crear un archivo con los numeros pares
//mostrarlo y mostrar el registro numero 3

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int vector[30], i, j, aux;
    FILE *archivo;
    archivo = fopen("pares.txt", "w");
    for (i = 0; i < 30; i++) {
        vector[i] = rand() % 100 + 1;
    }
    for (i = 0; i < 30; i++) {
        if (vector[i] % 2 == 0) {
            fprintf(archivo, "%d\t", vector[i]);
        }
    }
    fclose(archivo);
    archivo = fopen("pares.txt", "r");
    for (i = 0; i < 30; i++) {
        fscanf(archivo, "%d", &vector[i]);
    }
    for (i = 0; i < 30; i++) {
        printf("%d\t", vector[i]);
    }
    printf("\n");
    printf("El registro numero 3 es: %d", vector[2]);
    fclose(archivo);
    return 0;
}