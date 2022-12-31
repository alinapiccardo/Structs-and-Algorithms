#include <stdio.h>
#include <math.h>

int main() {    
    int num=1, i, suma, cont=1;
    
    do {
        suma = 0;
        for (i = 1; i < num; i++) {
            if (num%i==0 && num!=i) {
                suma = suma + i;
            } 
        }

        if (suma>num) {
           printf("El numero %i es abundante\n", num);
           cont++; 
        }
        num = num + 1;
    } while (cont < 5);
    return 0;
}