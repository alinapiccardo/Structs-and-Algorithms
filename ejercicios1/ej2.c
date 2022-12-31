#include <stdio.h>
#include <math.h>

int main() {
    int num, binario, digito, contador = 0, contador2 = 0;
    printf("Ingrese un numero: ");
    scanf("%d", &num);
    while (num != 0) {
        binario = 0;
        contador = 0;
        contador2 = 0;
        while (num > 0) {
            digito = num % 2;
            binario = binario + digito * pow(10, contador);
            num = num / 2;
            contador++;
            printf("%d\n", binario);
        }
        while (binario > 0) {
            digito = binario % 10;
            if (digito == 1) {
                contador2++;
            }
            binario = binario / 10;
        }
        if (contador2 % 2 == 0) {
            printf("El numero es malvado");
        } else {
            printf("El numero no es malvado");
        }
    }
}        