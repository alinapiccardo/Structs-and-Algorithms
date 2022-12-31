/*generar un programa en C que me muestre el resultado del siguiente codigo: 
  for(i=0;i<filas;i++){
      for(j=0;j<colum;j++){
          C[i][j]=0;
          for(k=0;k<filas;k++){
              C[i][j]=(C[i][j]+(A[i][k]*B[k][j]));
          }
      }
  }*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(){

    int A[3][3], B[3][3], C[3][3], i, j, k;

    //cargar la matriz A
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Ingrese un numero: ");
            scanf("%d", &A[i][j]);
        }
    }

    //cargar la matriz B
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Ingrese un numero: ");
            scanf("%d", &B[i][j]);
        }
    }

    //mostrar la matriz A
    printf("La matriz A es: \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    //mostrar la matriz B
    printf("La matriz B es: \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    //multiplicar las matrices
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            C[i][j] = 0;
            for (k = 0; k < 3; k++) {
                C[i][j] = (C[i][j] + (A[i][k] * B[k][j]));
            }
        }
    }

    //mostrar la matriz C
    printf("La matriz C es: \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
