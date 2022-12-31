#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 15

int main(){
    int A[10]={12,15,17,21,34,45};
    int *B;
    B=A;
    *B=A[4];

    printf("%d", *(B+0));
}