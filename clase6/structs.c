//ESTRUCTURAS 
//Se declaran antes del main. 
//Es una variable con muchos datos adentro 
//Se declaran con struct y se llaman con el nombre de la estructura.
// struct nombre_de_la_estructura { tipo de datos }
// struct nombre_de_la_estructura nombreVariable { datos de inicio };

#include <stdio.h>
struct persona {
    char nombre[20];
    char apellido[20];
    int edad;
    char sexo;
};

struct persona persona1 = {
    "Alina", 
    "Piccardo", 
    25, 
    'F'
};

struct persona persona2 = {
    "Camila", 
    "Cairo", 
    24, 
    'F'
};

int main () { 
    int i=0;
    printf("Nombre: %s\n", persona1.nombre);
    printf("Apellido: %s\n", persona1.apellido);
    printf("Edad: %d\n", persona1.edad);
    printf("Sexo: %c\n", persona1.sexo);

    printf("Nombre: %s\n", persona2.nombre);
    printf("Apellido: %s\n", persona2.apellido);
    printf("Edad: %d\n", persona2.edad);
    printf("Sexo: %c\n", persona2.sexo);
    return 0;
}



