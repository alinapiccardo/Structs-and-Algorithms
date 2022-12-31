#include <stdio.h>
#include <math.h>
#include <string.h> 
#define LARGO 40

//armar un programa que me diga cuantas PALABRAS tiene la cadena de caracteres

int main() {   

    int cont=1;
    char frase[LARGO]  = "hola que aburrida estoy, hace frio";

    for (int i = 0; i < LARGO; i++) {
        if (frase[i] == ' ') {
            cont++;
        }
    }

    printf("La cantidad de palabras es: %d", cont);
    return 0;
}