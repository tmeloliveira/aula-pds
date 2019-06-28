/* 

  Para compilar:
  $ gcc programa5.c -o p5

  Para executar:
  $ ./p5

*/

#include <stdio.h>

void imprime_vetor_via_indice(int v[], int n) {
  printf("\nEndereço de v: %p\n", v);
  int i;
  for (i = 0; i < n; i++)
    printf("%d ", v[i]);
  printf("\n");
}

void imprime_vetor_via_ponteiro(int *p_int, int n) {
  printf("\nEndereço de p_int: %p\n", p_int);
  int i;
  for (i = 0; i < n; i++) {
    printf("%d ", *p_int);
    p_int++;
  }
  printf("\n");
}

int main() {
  int v[] = {10, 20, 30, 40, 50};

  imprime_vetor_via_indice(v, 5);
  imprime_vetor_via_ponteiro(v, 5);

  imprime_vetor_via_indice(&v[1], 4);
  imprime_vetor_via_ponteiro(&v[1], 4);

  return 0;

}
