//Generar una matriz de 4*4 con números enteros. 
//Calcular en forma recursiva cuántos números primos hay y cargarlos en un archivo. Mostrar dicho archivo

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int esPrimo(int numero) {
    int i, contador = 0;
    for (i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            contador = contador + 1;
        }
    }
    if (contador == 2) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    int matriz[4][4], i, j, primos = 0;
    FILE *archivo;
    archivo = fopen("primos.txt", "w");
    //cargar la matriz
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Ingrese un numero: ");
            scanf("%d", &matriz[i][j]);
        }
    }
    //determinar cuantos numeros primos hay en la matriz
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (esPrimo(matriz[i][j]) == 1) {
                primos = primos + 1;
                fprintf(archivo, "%d ", matriz[i][j]);
            }
        }
    }
    printf("La cantidad de numeros primos es: %d", primos);
    fclose(archivo);
    return 0;
}