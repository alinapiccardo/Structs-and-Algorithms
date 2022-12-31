#include <stdio.h>
#include <math.h>

//declaraciones de las funciones a utilizar
//tipo-de-dato-que-retrona Nombre_de_la_funcion (parametros);
float sumar (float n1, float n2);
            //si o si tengo que poner el tipo de dato
            //hace falta que esten en orden del tipo de dato, no imp el nombre
void saludar ();  
//las funciones las puedo invocar entre si, si estan declaradas aca arriba         

int main(){
    //TIENE QUE QUEDAR LO MAS CHICO POSIBLE
    //declarar mis variables locales de la funcion main
    float resultado_suma;
    float numero1=3, numero2=7;

    //invocar la funcion
    saludar();
    resultado_suma=sumar(numero1, numero2);

    printf("Resultado: %.2f", resultado_suma);

    return 0;
}

//desarrollo las funciones ABAJO DEL MAIN
float sumar(float n1, float n2){
            //aca si es importante que se llamen igual
    float resultado;
    resultado = n1+n2;    
    return resultado;
}

void saludar(){
    printf("Hola, buen dia\n");
}