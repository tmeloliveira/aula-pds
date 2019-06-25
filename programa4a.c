#include <stdio.h>

void troca_sqn(int a, int b) {
  /* 
    Opa! Recebi dois valores!
    Deixa eu fazer uma copia deles em a e b
    pra poder trocar! 
  */
  int aux;
  aux = a;
  a = b;
  b = aux;

  printf("\n\n>> troca_sqn");
  printf("\n\ttroca_sqn a: %i", a);
  printf("\n\ttroca_sqn b: %i", b);
  /* 
    Pronto, troquei a com b!
    Espero que a "main" goste! :)
  */
}

int main () {
  int x, y;
  x = 16;
  y = 25;

  printf(">> main (antes de chamar troca_sqn)");
  printf("\n\tmain x: %i", x);
  printf("\n\tmain y: %i", y);

  /*
    Ei "troca_sqn"! Toma aqui o valor de duas 
    variáveis x e y. Troca elas pra mim! 
  */ 
  troca_sqn(x, y);


  printf("\n\n>> main (depois de chamar troca_sqn)");
  printf("\n\tmain x: %i", x);
  printf("\n\tmain y: %i\n", y);
  /*
    Ué? Elas continuam iguais pra mim!
    Porque não trocou? :(
  */ 

  return 0;
}