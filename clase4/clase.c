#include <stdio.h>
#include <math.h>
#include <string.h> //LIBRERIA PARA MANEJO DE CHAR Y STRINGS 
#define LARGO 10

/* CADENA DE CARACTERES:  //la cantidad de espacio en memoria
char nombre_de_variable [cantidad de caracteres] = "cadena de caracteres";
char nombre_de_variable [cantidad de caracteres] = {'h', 'o', 'l', 'a'};

%s para imprimir la cadena porque es un string
*/

int main() {   

    char texto [20] = "hola";

    printf("%s\n", texto); //imprime hola

    char copia [20];

    //PARA COPIAR LA CADENA DE TEXTO:
    strcpy(copia, texto);
                  //esto lo guarda en copia

    printf("%s\n", copia); //imprime hola

    //podemos guardar una posicion de una cadena
    char letra;
    letra = texto[2];
    printf("%c\n", letra); //imprime l 

    //definimos el largo de la cadena como variable global
    char textoConVariableGlobal[LARGO] = "Global";
    printf("%s\n", textoConVariableGlobal); //imprime Global

    //para comparar dos cadenas de texto, devuelve 
    strcmp(copia, texto);
    printf("%d\n",strcmp(copia,texto)); //como son iguales me da 0

    //para contar el largo de una cadena 
    printf("%lu", strlen(texto));

    return 0;
}