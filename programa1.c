/* 

  Para compilar:
  $ gcc programa1.c -o p1

  Para executar:
  $ ./p1

*/

#include <stdio.h>

int main () {
  // Declaramos a variável x, e atribuímos o valor 10
  int x = 10;
  // Imprime o valor de x
  printf("Valor: %i\n", x);
  // Imprime o endereço de x (usando o &)
  printf("Endereço: %p\n", &x);

  return 0;
}