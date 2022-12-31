//cargar una matriz cuadrada de n x n de numeros enteros y mostrar la matriz
//calcular la suma de los elementos de la 2da fila
//calcular el promedio de todos los multiplos de 5
//mostrar el elemento minimo de cada fila
//mostrar los elementos de la diagonal secundaria
//mostrar los elementos que se encuentran debajo de la diagonal principal
//definir si la matriz es simetrica o no

#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    int matriz[3][3], i, j, sumaFila = 0, sumaMultiplos = 0, minimo, diagonalSecundaria, debajoDiagonal;
    //cargar la matriz
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Ingrese un numero: ");
            scanf("%d", &matriz[i][j]);
        }
    }

    //mostrar la matriz
    printf("\nLa matriz es: \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    //sumar la 2da fila
    for (i = 1; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            sumaFila = sumaFila + matriz[i][j];
        }
    }
    printf("La suma de la 2da fila es: %d\n", sumaFila);

    //promedio de los multiplos de 5
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (matriz[i][j] % 5 == 0) {
                sumaMultiplos = sumaMultiplos + matriz[i][j];
            }
        }
    }
    printf("El promedio de los multiplos de 5 es: %d\n", sumaMultiplos/3);

    //minimo de cada fila
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (j == 0) {
                minimo = matriz[i][j];
            }
            else {
                if (matriz[i][j] < minimo) {
                    minimo = matriz[i][j];
                }
            }
        }
        printf("El minimo de la fila %d es: %d\n", i+1, minimo);
    }

    //elementos de la diagonal secundaria
    printf("\nLos elementos de la diagonal secundaria son: \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (i + j == 2) {
                diagonalSecundaria = matriz[i][j];
                printf(" %d\t", diagonalSecundaria);
            }
        }
    }

    //debajo de la diagonal principal
    printf("\nLos elementos debajo de la diagonal principal son: \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (i > j) {
                debajoDiagonal = matriz[i][j];
                printf(" %d\t", debajoDiagonal);
            }
        }
    }

    return 0;
}
