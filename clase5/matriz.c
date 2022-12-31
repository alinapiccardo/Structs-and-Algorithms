#include <stdio.h>
#include <string.h>
#include <math.h>
#define FILA 3
#define COLUMNA 3

int main() {
    int matriz[FILA][COLUMNA], i, j;
    //cargar la matriz
    for (i = 0; i < FILA; i++) {
        for (j = 0; j < COLUMNA; j++) {
            printf("Ingrese un numero: ");
            scanf("%d", &matriz[i][j]);
        }
    }

    //mostrar la matriz
    printf("La matriz es: \n");
    for (i = 0; i < FILA; i++) {
        for (j = 0; j < COLUMNA; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    //mostrar la matriz transpuesta
    printf("La matriz transpuesta es: \n");
    for (i = 0; i < FILA; i++) {
        for (j = 0; j < COLUMNA; j++) {
            printf("%d ", matriz[j][i]);
        }
        printf("\n");
    }

    //mostrar la matriz diagonal
    printf("La matriz diagonal es: \n");
    for (i = 0; i < FILA; i++) {
        for (j = 0; j < COLUMNA; j++) {
            if (i == j) {
                printf("%d ", matriz[i][j]);
            }
            else {
                printf("0 ");
            }
        }
        printf("\n");
    }

    //sumar la diagonal principal
    int suma = 0;
    for (i = 0; i < FILA; i++) {
        for (j = 0; j < COLUMNA; j++) {
            if (i == j) {
                suma = suma + matriz[i][j];
            }
        }
    }
    printf("La suma de la diagonal principal es: %d", suma);

    return 0;
}