#include <stdio.h>
#include <math.h>
#define LARGO 4

int main(void)
{
    int i;
    int v[LARGO];
    int max = 0;
    int min = 0;
    
    printf("Ingrese los valores\n");
    
    for(i=0; i<LARGO; i++) {
         scanf("%i",&v[i]);
    }
    
    min=v[0];
    max=v[0];

    for(i=0;i<LARGO;i++) {
        
        if(v[i]>max) {
            max=v[i];
        } else if (v[i]<min){
            min=v[i];
        }
    
        printf("%i\t",v[i]);
        
    }
    
    printf("\nEl valor maximo es: %i",max);
    printf("\nEl valor minimo es: %i",min);

    return 0;
}