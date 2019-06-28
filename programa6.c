/* 

  Para compilar:
  $ gcc programa6.c -o p6

  Para executar:
  $ ./p6

*/

#include <stdio.h>
#include <stdlib.h> // necessário para usar as funções malloc() e free()

int main() {
  int *p;
  int i;

  p = (int*) malloc(100 * sizeof(int));

  for (i = 0; i < 100; i++)
    p[i] = i;

  free(p)
  return 0;
}
