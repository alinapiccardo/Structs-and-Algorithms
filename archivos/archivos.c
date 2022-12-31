#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *archivo;
    char texto[100];
    archivo = fopen("hola.txt", "w");
    fprintf(archivo, "Hola mundo");
    printf("Escribe un texto: ");
    fgets(texto, 100, stdin);
    fprintf(archivo, "%s", texto);
    fclose(archivo);

    printf("El texto es: \n");
    if (archivo=fopen("hola.txt", "r")==NULL){
        printf("Error al abrir el archivo\n");
    } else {
        while (!feof(archivo)){
            fscanf(archivo, "%s", texto);
            printf("%s", texto);
        }
    }
    return 0;
}