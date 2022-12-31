//recursividad
#include <stdio.h>
#include <math.h>

int binario (int a);

int main()
{
    int a, resultado;
    printf("Ingrese un numero: ");
    scanf("%d", &a);
    resultado = binario(a);
    printf("El numero %d en binario es %d", a, resultado);
    return 0;
}

int binario (int a) {
    if (a <= 0) {
        return a;
    }
    else {
        return (a % 2 + 10 * binario(a / 2));
    }
}