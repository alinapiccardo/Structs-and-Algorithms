#include <stdio.h>
#include <string.h>
#include <math.h>
#define F 3
#define C 3
int cargarV(int *p);

int main (){

    int v[F][C];
    int *p;
    p = &v[0][0];

    cargarV(p);
    return 0;
}

int cargarV(int *p){
  //cargar vector con recursividad
}