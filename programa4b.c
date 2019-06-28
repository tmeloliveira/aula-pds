/* 

  Para compilar:
  $ gcc programa4b.c -o p4b

  Para executar:
  $ ./p4b

*/

#include <stdio.h>

void troca(int a, int b) {
  /*
    Opa! Recebi dois valores!
    Deixa eu fazer uma copia deles em a e b
    pra poder trocar!
  */
  int aux;
  aux = a;
  a = b;
  b = aux;

  printf("\n\n>> troca");
  printf("\n\ttroca a: %i", a);
  printf("\n\ttroca b: %i", b);
  /*
    Pronto, acho que troquei a com b!
  */
}

int main () {
  int x, y;
  x = 16;
  y = 25;

  printf(">> main (antes de chamar troca)");
  printf("\n\tmain x: %i", x);
  printf("\n\tmain y: %i", y);

  /*
    Ei "troca"! Toma aqui o valor de duas
    variáveis x e y. Troca elas pra mim!
  */
  troca(x, y);


  printf("\n\n>> main (depois de chamar troca)");
  printf("\n\tmain x: %i", x);
  printf("\n\tmain y: %i\n", y);
  /*
    Ué? Elas continuam iguais pra mim!
    Porque não trocou? :(
  */

  return 0;
}