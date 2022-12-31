#include <stdio.h>
#include <math.h>
#include <string.h>
#define LNGT 50

int main() {   

    char txt[LNGT] = "clase cuatro de estructuras de datos y algoritmos";
    char *p;

    int i, countSpc=0, countV=0, countC=0;

    p=&txt[0];
    for (i = 0; i < LNGT; i++) {
        p++;
        if (*p==' ') {
            countSpc++;
        } else if (*p=='a' || *p=='e' || *p=='i' ||*p=='o' || *p=='u') {
            countV++;
        } else {
            countC++;
        }
    }

    printf("La frase tiene %d palabras.\n", countSpc+1);
    printf("Cantidad de Espacios: %d\n", countSpc);
    printf("Cantidad de Vocales: %d\n", countV);
    printf("Cantidad de Consonantes: %d\n", countC);

    return 0;
}