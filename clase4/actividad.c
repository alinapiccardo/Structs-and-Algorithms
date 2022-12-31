#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void contarPalabras(char c);

int main()
{
    int a, b;

    a=987;
    printf("el resto de a/4 es: %d", a%4);

    char c;
    int cont=0;
    printf("Ingrese la frase\n");
    c=getchar();

    while(c!='.')
    {
        if (c==' ')
        {
            cont=0;
        }
        else if (c=='a' || c=='e' || c=='i' ||c=='o' || c=='u')
        {
            cont++;
        }
        if (c=='s' && cont>=2)
        {
            printf("%c   ", c);
            c = ' ';
        }
        putchar(c);
        c=getchar();
    }
    contarPalabras(c); //corregir no funciona
    return 0;
}

void contarPalabras(char c) {
    int cont=0, aux, primera;
    while(c!='.') {
        primera = c;
        while(c!=' ' && c!='.') {
            aux=c;
            c=getchar();
        }
        if (aux==primera) {
            cont++;
        }
        aux=' '; 
        primera=' ';

        if (c!='.') {
            c=getchar();
        }
        while(c==' ') {
            c=getchar();
        }
    }
    printf("\nla cantidad de palabras que empiezan y terminan con la misma letra es %d",cont);
}