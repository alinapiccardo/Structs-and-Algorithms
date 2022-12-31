#include <stdio.h>
#include <math.h>

int main(){
    
    int n, cont=0, contProm=0, n2, min, resto;
    float prom;

    do
    {
        printf("Ingrese un numero\nPara salir ingrese un numero negativo\n");
        scanf("%d",&n); 

        if(n>4 && n<25){
            cont++;           
        } 

        resto = n%6;
        if(resto == 0){
            contProm++;
            n2 = n2 + n;
            prom = n2/contProm;
        } 
        
        if(n <= min && n >= 0){
            min = n;
        } 
    } while (n > 0);

    printf("Cantidad de Numeros entre 4 y 25: %i\n", cont);
    printf("Promedio de aquellos Numeros Multiplos de 6: %.2f\n", prom);
    printf("El menor numero leido: %i", min);

    return 0; 
}