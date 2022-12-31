//factorial con recursividad
#include <stdio.h>
#include <string.h>
#include <math.h>
long factorial (long a);

int main() {
    long a, resultado;

    printf("Ingrese un numero: ");
    scanf("%ld", &a);

    resultado = factorial(a);

    printf("Factorial de %ld: %ld", a, resultado);

    return 0;
}

long factorial (long a) {
    if (a <= 1) {
        return a;
    }
    else {
        return (a * factorial(a - 1));
    }
}