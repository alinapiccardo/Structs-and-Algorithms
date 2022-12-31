#include <stdio.h>
#include <string.h>
#include <math.h>

int cargarMatriz(int fila, int columna);

int main() {
    int fila, columna, matriz[fila][columna];
    matriz[fila][columna] = cargarMatriz(3,3);
    return 0;
}

int cargarMatriz(int fila, int columna) {
    int matriz[fila][columna], i, j;
    
    //cargar la matriz
    for (i = 0; i < fila; i++) {
        for (j = 0; j < columna; j++) {
            printf("Ingrese un numero: ");
            scanf("%d", &matriz[i][j]);
        }
    }

    //mostrar la matriz
    printf("\nLa matriz es: \n");
    for (i = 0; i < fila; i++) {
        for (j = 0; j < columna; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    //verificar si es antisimetrica
    char verAntisimetrica[50];
    int promDiagonal;
    for (i = 0; i < fila; i++) {
        for (j = 0; j < columna; j++) {
          if (i != j) {
            if (matriz[i][j] != matriz[j][i]*-1) {
              strcpy(verAntisimetrica, "La matriz no es antisimetrica");
              promDiagonal = 1;   
            }
            else {
              strcpy(verAntisimetrica, "La matriz es antisimetrica"); 
              promDiagonal = 0;
            }   
          }
        }
    }
    printf("%s\n", verAntisimetrica);

    //promedio de la diagonal
    float suma = 0;
    float promedio;
    for (i = 0; i < fila; i++) {
          for (j = 0; j < columna; j++) {
            //diagonal principal
            if(promDiagonal == 1) {
                if (i == j) {
                 suma = suma + matriz[i][j];
                }
            }
            //diagonal secundaria
            if (promDiagonal == 0) {
                if ((i+j) == (columna -1)) {
                    suma = suma + matriz[i][j];
                }
            }   
          }
        }
        promedio = suma / fila;
        printf("El promedio de la diagonal es: %.2f", promedio);
    return matriz[i][j];
}