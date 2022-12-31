#include <stdio.h>
#include <math.h>


int main()
{
    float peso;
    float altura, alturaImc;
    float imc;
    
    printf("Ingrese su peso en kilos\n");
    scanf("%f",&peso);
    
    printf("Ingrese su estatura en metros\n");
    scanf("%f",&altura);
    
    alturaImc = altura*altura;
    imc = peso/alturaImc;
    
    printf("Su Indice de Masa Corporal (IMC) es: %.2f\n",imc);

    return 0;
}
