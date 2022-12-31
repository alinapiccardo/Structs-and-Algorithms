#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct nodo{
    int legajo;
    int edad;
    int cantMateriasCursadas;
    int cantMateriasAprobadas;
    struct nodo *sig;
};

struct nodo *inicial=NULL;

void cargarLista();
void mostrarLista();
void mostrarListaAprobados();

int main()
{
    cargarLista();
    mostrarLista();
    mostrarListaAprobados();
    return 0;
}

void cargarLista(){
    struct nodo *nuevo;
    nuevo=(struct nodo*)malloc(sizeof(struct nodo));
    printf("Ingrese legajo: ");
    scanf("%d",&nuevo->legajo);
    while(nuevo->legajo!=0){
        printf("Ingrese edad: ");
        scanf("%d",&nuevo->edad);
        printf("Ingrese cantidad de materias cursadas: ");
        scanf("%d",&nuevo->cantMateriasCursadas);
        printf("Ingrese cantidad de materias aprobadas: ");
        scanf("%d",&nuevo->cantMateriasAprobadas);
        nuevo->sig=inicial;
        inicial=nuevo;
        nuevo=(struct nodo*)malloc(sizeof(struct nodo));
        printf("Ingrese legajo: ");
        scanf("%d",&nuevo->legajo);
    }
    free(nuevo);
}

void mostrarLista(){
    struct nodo *aux;
    aux=inicial;
    while(aux!=NULL){
        printf("Legajo: %d - Edad: %d - Cantidad de materias cursadas: %d - Cantidad de materias aprobadas: %d \n",aux->legajo,aux->edad,aux->cantMateriasCursadas,aux->cantMateriasAprobadas);
        aux=aux->sig;
    }
}

void mostrarListaAprobados(){
    struct nodo *aux;
    aux=inicial;
    FILE *arch;
    arch=fopen("aprobados.txt","w");
    while(aux!=NULL){
        if(aux->cantMateriasAprobadas>aux->cantMateriasCursadas/2){
            fprintf(arch,"Legajo: %d - Edad: %d - Cantidad de materias cursadas: %d - Cantidad de materias aprobadas: %d \n",aux->legajo,aux->edad,aux->cantMateriasCursadas,aux->cantMateriasAprobadas);
        }
        aux=aux->sig;
    }
    fclose(arch);
}



