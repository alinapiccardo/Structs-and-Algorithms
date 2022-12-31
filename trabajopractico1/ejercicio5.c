#include <stdio.h>
#include <math.h>

int main() {
    int edad, sueldo, cont = 0, cont2 = 0, cont3 = 0, cont4 = 0;
    float promedio, porcentaje1, porcentaje2, porcentaje3;
    do {
        printf("Ingrese la edad: \n");
        scanf("%d", &edad);
        printf("Ingrese el sueldo: \n");
        scanf("%d", &sueldo);
        if (sueldo > 10000) {
            cont = cont + edad;
            cont2++;
        }
        if (edad > 58) {
            sueldo = sueldo + (sueldo * 0.05);
            printf("El sueldo es: %d, con el plus del 5 porciento\n", sueldo);
        }
        if (sueldo > 0 && sueldo < 15000) {
            cont3++;
        }
        if (sueldo > 15000 && sueldo < 20000) {
            cont4++;
        }
    } while (edad != 0 && sueldo != 0);
    promedio = cont / cont2;
    porcentaje1 = (cont3 * 100) / cont2;
    porcentaje2 = (cont4 * 100) / cont2;
    porcentaje3 = 100 - porcentaje1 - porcentaje2 -1;
    printf("\nEl promedio de edad de los que ganan mas de $10000 es: %.2f", promedio);
    printf("\nEl porcentaje de empleados cuyo sueldo es menor a 15000 es: %.2f", porcentaje1);
    printf("\nEl porcentaje de empleados cuyo sueldo esta entre 15000 y 20000 es: %.2f", porcentaje2);
    printf("\nEl porcentaje de empleados cuyo sueldo es mayor a 20000 es: %.2f", porcentaje3);

    return 0;
}