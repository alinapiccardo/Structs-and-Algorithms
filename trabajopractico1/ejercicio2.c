#include <stdio.h>
#include <math.h>
#define MES 31

int main()
{
    int i;
    float dolar[MES];
    float cotMax = 0;
    int dia;
    
    printf("Ingrese cotizaciones del dolar\n");
    
    for(i=1; i<=MES; i++) {
        scanf("%f",&dolar[i]);
        
        if(dolar[i]>cotMax) {
            cotMax = dolar[i];
            dia = i;
        }
    }

    printf("El dia donde hubo la mayor cotización es el: %i\ncon $USD %.2f\n", dia, cotMax);

    return 0;
}