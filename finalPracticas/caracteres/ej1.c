//leer un texto caracter a caracter, terminado en PUNTO. Mostrar cuantas palabras tienen mas de 3 letras.

#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char texto[100];
    int i, contador = 0, contadorPalabras = 0;
    printf("Ingrese un texto: ");
    scanf(" %[^\n]", texto);
    for (i = 0; i < strlen(texto); i++) {
        if (texto[i] != ' ') {
            contador = contador + 1;
        }
        else {
            if (contador > 3) {
                contadorPalabras = contadorPalabras + 1;
            }
            contador = 0;
        }
    }
    printf("La cantidad de palabras con mas de 3 letras es: %d", contadorPalabras+1);
    return 0;
}