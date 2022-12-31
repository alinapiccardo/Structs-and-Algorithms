//cargar una matriz de n x m y mostrarla
//mostrar: la matriz transpuesta
//mostrar: el promedio de los elementos de las dos diagonales
//multiplicar la matriz por su transpuesta y mostrar el resultado
//determinar cuantos numeros primos hay en la matriz

#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    int matriz[3][3], i, j, sumaDiagonal = 0, sumaDiagonalSecundaria = 0, promedioDiagonales, matrizTranspuesta[3][3], matrizMultiplicada[3][3], sumaMultiplicada = 0, promedioMultiplicada, primos = 0;
    //cargar la matriz
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Ingrese un numero: ");
            scanf("%d", &matriz[i][j]);
        }
    }

    //determinar cuantos numeros primos hay en la matriz
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (matriz[i][j] % 2 != 0 && matriz[i][j] % 3 != 0 && matriz[i][j] % 5 != 0 && matriz[i][j] % 7 != 0) {
                primos = primos + 1;
            }
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

    //matriz transpuesta
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            matrizTranspuesta[i][j] = matriz[j][i];
        }
    }
    printf("\nLa matriz transpuesta es: \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matrizTranspuesta[i][j]);
        }
        printf("\n");
    }

    //promedio de las diagonales
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (i == j) {
                sumaDiagonal = sumaDiagonal + matriz[i][j];
            }
            if (i + j == 2) {
                sumaDiagonalSecundaria = sumaDiagonalSecundaria + matriz[i][j];
            }
        }
    }
    promedioDiagonales = (sumaDiagonal + sumaDiagonalSecundaria) / 2;
    printf("\nEl promedio de las diagonales es: %d\n", promedioDiagonales);

    //multiplicar la matriz por su transpuesta
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            matrizMultiplicada[i][j] = matriz[i][j] * matrizTranspuesta[i][j];
        }
    }
    printf("\nLa matriz multiplicada por su transpuesta es: \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matrizMultiplicada[i][j]);
        }
        printf("\n");
    }

    printf("\nLa cantidad de numeros primos en la matriz es: %d\n", primos);

    return 0;
}