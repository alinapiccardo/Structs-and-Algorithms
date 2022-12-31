//leer un texto caracter a caracter, terminado en PUNTO.
//Mostrar el texto 
//intercambiar la ultima letra con la anteultima de cada palabra y mostrar el texto resultante

#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char texto[100];
    int i;
    printf("Ingrese un texto: ");
    scanf(" %[^\n]", texto);
    printf("El texto es: %s \n", texto);
    for (i = 0; i < strlen(texto); i++) {
        if (texto[i] != ' ') {
            if (texto[i+1] == ' ' || texto[i+1] == '.') {
                char aux = texto[i];
                texto[i] = texto[i-1];
                texto[i-1] = aux;
            }
        }
    }
    printf("El texto resultante es: %s", texto);
    return 0;
}

