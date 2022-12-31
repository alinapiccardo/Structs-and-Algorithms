#include <stdio.h>
#include <math.h>

float sumar (float n1, float n2);
float restar (float n1, float n2);
float multiplicar (float n1, float n2);
float dividir (float n1, float n2);
float promedio (float n1, float n2);

int main(){
    float reSum;
    float reRes;
    float reMul;
    float reDiv;
    float reProm;
    float numero1, numero2;

    //suma
    reSum=sumar(numero1, numero2);
    printf("\nResultado SUM: %.2f\n", reSum);

    //resta
    reRes=restar(numero1, numero2);
    printf("\nResultado RES: %.2f\n", reRes);

    //multiplica
    reMul=multiplicar(numero1, numero2);
    printf("\nResultado MULT: %.2f\n", reMul);

    //divide
    reDiv=dividir(numero1, numero2);
    printf("\nResultado DIV: %.2f\n", reDiv);

    //promedia
    reProm=promedio(numero1, numero2);
    printf("\nResultado PROM: %.2f\n", reProm);

    return 0;
}

float sumar(float n1, float n2){
    float reSum;
    printf("\nINGRESAR LOS NUMEROS A SUMAR\n");
    scanf("%f", &n1);
    scanf("%f", &n2);
    reSum = n1+n2;    
    return reSum;
}

float restar(float n1, float n2){
    float reRes;
    printf("\nINGRESAR LOS NUMEROS A RESTAR\n");
    scanf("%f", &n1);
    scanf("%f", &n2);
    reRes = n1-n2;    
    return reRes;
}

float multiplicar(float n1, float n2){
    float reMul;
    printf("\nINGRESAR LOS NUMEROS A MULTIPLICAR\n");
    scanf("%f", &n1);
    scanf("%f", &n2);
    reMul = n1*n2;    
    return reMul;
}

//agregar if con el 0
float dividir(float n1, float n2){
    float reDiv;
    printf("\nINGRESAR LOS NUMEROS A DIVIDIR\n");
    scanf("%f", &n1);
    scanf("%f", &n2);
    reDiv = n1/n2;    
    return reDiv;
}

float promedio(float n1, float n2){
    float reProm;
    float sumProm;
    printf("\nINGRESAR LOS NUMEROS A PROMEDIAR\n");
    scanf("%f", &n1);
    scanf("%f", &n2);
    sumProm=n1+n2;
    reProm = sumProm/2;    
    return reProm;
}
