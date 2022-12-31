#include <stdio.h>
#include <math.h>

int main () {
    int numero, i, n2, contador;
    float suma, promedio;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    while (numero > 0) {
        suma = 0;
        contador = 0;
        if (numero % 2 == 0) {
            contador++;
        }
        for (i = 0; i < numero; i++) {
            printf("Ingrese un numero del Lote: ");
            scanf("%d", &n2);
            suma = suma + n2;
            if (n2 % 2 == 0) {
                contador++;
            }
        }
        promedio = suma / numero;
        printf("El promedio del Lote es: %.2f\n", promedio);
        printf("Ingrese un numero: ");
        scanf("%d", &numero);
        }
    printf("La cantidad de numeros pares es: %d", contador);  
    return 0;
}             