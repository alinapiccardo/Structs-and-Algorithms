#include <stdio.h>
#include <stdlib.h>

int main() {

  int c, cont=0, aux;
  printf("Ingrese la frase\n");
  c=getchar();
  while(c!='\n')
  {
    while(c!=' '&& c!='\n')
    {
      aux=c;
      c=getchar();
    }
    if (aux=='s')
      cont++;
      aux=' ';
    if (c!='\n')
      c=getchar();
  }
  printf(" \nla cantidad es %d", cont);
  return 0;
}