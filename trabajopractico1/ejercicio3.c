#include <stdio.h>
#include <math.h>
#define YR 9

int main() {

    int i;
    int cant=0, maxcant, yr=0;
    int autos[YR];

    printf("Ingrese cantidad de autos vendidos en el año\n");

    for(i=0; i<YR; i++) {
        scanf("%i",&autos[i]);
        cant = cant + autos[i];
    }

    maxcant = autos[0];
    for(i=0; i<YR; i++) {
        if(autos[i]>maxcant) {
            maxcant = autos[i];
            yr = i+1;
        }
    }  

    printf("Cantidad Total de Autos vendidos: %i\n",cant);
    printf("El año que mayor cantidad de ventas hubo es: %i Con %i autos vendidos",yr, maxcant);

    return 0;
}