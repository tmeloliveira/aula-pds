#include <stdio.h>

void troca(int *a, int *b) {
  /*
    Opa! Recebi dois endereços!
    Vou acessar os valores armazenados neles
    pra poder fazer a troca!
  */
  int aux;
  aux = *a;

  *a = *b;
  *b = aux;

  printf("\n\n>> troca_sqn");
  printf("\n\ttroca a: %i", *a);
  printf("\n\ttroca b: %i", *b);
  /*
    Pronto! Troquei os valores que estavam
    armazenados nos endereços *a e *b.
    Quando a "main" olhar pros endereços,
    já vai estar tudo trocado! :)
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
    Ei "troca"! Toma aqui o endereço de duas
    variáveis x e y. Troca elas pra mim!
  */
  troca(&x, &y);

  printf("\n\n>> main (depois de chamar troca)");
  printf("\n\tmain x: %i", x);
  printf("\n\tmain y: %i\n", y);
  /*
    Valeu "troca"!
    Agora sim as duas estão trocadas! :)
  */

  return 0;
}