#include <stdio.h>
#include <math.h>

//agregar el lenght de la matriz
#define FILA 2
#define COLUMNA 2

int main()
{
    
    //matriz --> int matriz[fila][columna];
    int arreglo[FILA][COLUMNA], i, j;

    for (i = 0; i < FILA; i++)
    {
      for (j = 0; j < COLUMNA; j++)
      {
        printf("Ingrese numero \n");
        scanf("%i", &arreglo[i][j]);
      }
    }

    printf("\n");   
     for (i = 0; i < FILA; i++)
    {
      for (j = 0; j < COLUMNA; j++)
      {
        printf("%i\t", arreglo[i][j]);
      }
      printf("\n");
    }
    return 0;
}