#include <stdio.h>

int main () {
  // Repetindo o código do programa1.c
  int x = 10;
  printf("Valor de x: %i\n", x);
  printf("Endereço de x: %p\n", &x);
  printf("-----\n");

  // Declara uma variável do tipo ponteiro,
  // essa variável irá receber um endereço
  int *y;

  // Atribui o enderço de x à variável y
  y = &x;

  // Para acessar o valor que está armazenado
  // no endereço, é necessário preceder a variável
  // do tipo ponteiro com um *.
  printf("Valor de y: %i\n", *y);
  printf("Endereço de y: %p\n", y);

  // Ao mudarmos o valor de x, note que
  // como y acessa o endereço de x,
  // ele também terá mudado.
  x = 5;
  printf("-----\n");
  printf("Valor de x: %i\n", x);
  printf("Valor de y: %i\n", *y);

  /*
    Em resumo:

    Um endereço diz onde a variável está armazenada na memória.
    O endereço é constante, mas o valor pode mudar.
    O endereço aponta para um valor.

    Para variável normal:
      - x acessa o valor
      - &x acessa o endereço

    Para ponteiro:
      - y acessa o endereço
      - *y acessa o valor
  */

  return 0;
}