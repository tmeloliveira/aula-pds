#include <stdio.h>

int main () {
  int x;
  float y;
  char z;
  double w;

  int v_int[100];
  char v_char[100];
  double v_double[100];

  int *p_int;
  char *p_char;
  double *p_double;

  // Imprime o tamanho de cada tipo de dados
  printf("Tamanho de um inteiro: \t%lu bytes\n", sizeof(x));
  printf("Tamanho de um float: \t%lu bytes\n", sizeof(y));
  printf("Tamanho de um char: \t%lu byte\n", sizeof(z));
  printf("Tamanho de um double: \t%lu bytes\n\n", sizeof(w));

  // Imprime o tamanho de vetores de cada tipo de dados
  printf("Tamanho de um vetor de 100 inteiros: \t%lu bytes\n", sizeof(v_int));
  printf("Tamanho de um vetor de 100 char: \t%lu bytes\n", sizeof(v_char));
  printf("Tamanho de um vetor de 100 double: \t%lu bytes\n\n", sizeof(v_double));

  // Imprime o tamanho de ponteiros de cada tipo de dados
  printf("Tamanho de um ponteiro de inteiros: \t%lu bytes\n", sizeof(*p_int));
  printf("Tamanho de um ponteiro de char: \t%lu bytes\n", sizeof(*p_char));
  printf("Tamanho de um ponteiro de double: \t%lu bytes\n", sizeof(*p_double));

  return 0;
}