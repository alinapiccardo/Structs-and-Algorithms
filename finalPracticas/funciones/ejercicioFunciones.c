//crear un programa con funciones donde se ingresan los datos de vuelos a distintas ciudades para obtener estadisticas.
//se pide: dia de vuelo, nombre de la ciudad, capacidad del avion y cantidad de pasajes vendidos.
//se ingresan datos hasta que el dia de vuelo sea 0.
//mostrar los datos ingresados
//calcular y mostrar la ciudad y el dia de vuelo con mayor cantidad de pasajes vendidos.
//calcular y mostrar el porcentaje de pasajes vendidos de cada ciudad
//mostrar las ciudades en forma ordenada de menor a mayor segun la cantidad de pasajes vendidos

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mayorPasajes(int pasajes[], int cantCiudades);
void porcentajePasajes(int pasajes[], int cantCiudades, int totalPasajes);
void ordenarCiudades(int pasajes[], char ciudades[][20], int cantCiudades);

int main()
{
    int diaVuelo, capacidadAvion, pasajesVendidos, totalPasajes = 0, mayorPasajesVendidos, i, j;
    char ciudad[20];
    char ciudades[20][20];
    int pasajes[20];
    int cantCiudades = 0;
    
    printf("Ingrese el dia de vuelo: ");
    scanf("%d", &diaVuelo);
    
    while(diaVuelo != 0)
    {
        printf("Ingrese la ciudad: ");
        scanf(" %[^\n]", ciudad);
        printf("Ingrese la capacidad del avion: ");
        scanf("%d", &capacidadAvion);
        printf("Ingrese la cantidad de pasajes vendidos: ");
        scanf("%d", &pasajesVendidos);
        
        strcpy(ciudades[cantCiudades], ciudad);
        pasajes[cantCiudades] = pasajesVendidos;
        cantCiudades++;
        totalPasajes += pasajesVendidos;
        
        printf("Ingrese el dia de vuelo: ");
        scanf("%d", &diaVuelo);
    }
    
    printf("Datos ingresados:\n");
    for(i = 0; i < cantCiudades; i++)
    {
        printf("Dia de vuelo: %d, Ciudad: %s, Capacidad del avion: %d, Pasajes vendidos: %d\n", diaVuelo, ciudades[i], capacidadAvion, pasajes[i]);
    }
    
    mayorPasajesVendidos = mayorPasajes(pasajes, cantCiudades);
    printf("La ciudad con mayor cantidad de pasajes vendidos es: %s\n", ciudades[mayorPasajesVendidos]);
    
    for(i = 0; i < cantCiudades; i++)
    {
        printf("La ciudad %s tiene un porcentaje de pasajes vendidos de: ", ciudades[i]);
        porcentajePasajes(pasajes, cantCiudades, totalPasajes);
    }
    
    ordenarCiudades(pasajes, ciudades, cantCiudades);
    
    printf("Ciudades ordenadas de menor a mayor segun la cantidad de pasajes vendidos:\n");
    for(i = 0; i < cantCiudades; i++)
    {
        printf("Ciudad: %s, Pasajes vendidos: %d\n", ciudades[i], pasajes[i]);
    }
    
    return 0;
}

int mayorPasajes(int pasajes[], int cantCiudades)
{
    int i, mayorPasajesVendidos = 0;
    
    for(i = 0; i < cantCiudades; i++)
    {
        if(pasajes[i] > pasajes[mayorPasajesVendidos])
        {
            mayorPasajesVendidos = i;
        }
    }
    
    return mayorPasajesVendidos;
}

void porcentajePasajes(int pasajes[], int cantCiudades, int totalPasajes)
{
    int i;
    
    for(i = 0; i < cantCiudades; i++)
    {
        printf("%f\n", (float)pasajes[i] / totalPasajes * 100);
    }
}

void ordenarCiudades(int pasajes[], char ciudades[][20], int cantCiudades)
{
    int i, j;
    int auxPasajes;
    char auxCiudad[20];
    
    for(i = 0; i < cantCiudades - 1; i++)
    {
        for(j = i + 1; j < cantCiudades; j++)
        {
            if(pasajes[i] > pasajes[j])
            {
                auxPasajes = pasajes[i];
                pasajes[i] = pasajes[j];
                pasajes[j] = auxPasajes;
                
                strcpy(auxCiudad, ciudades[i]);
                strcpy(ciudades[i], ciudades[j]);
                strcpy(ciudades[j], auxCiudad);
            }
        }
    }
}