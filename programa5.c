#include <stdio.h>

void imprime_vetor(int v[], int n) {
  // printf("\nEndereço de v: %p\n", v);
  int i;
  for (i = 0; i < n; i++)
    printf("%d ", v[i]);
  printf("\n");
}

void imprime_vetor2(int *p_int, int n) {
  // printf("\nEndereço de p_int: %p\n", p_int);
  int i;
  for (i = 0; i < n; i++) {
    printf("%d ", *p_int);
    p_int++;
  }
  printf("\n");
}

int main() {
  int v[] = {10, 20, 30, 40, 50};

  imprime_vetor(v, 5);
  imprime_vetor2(v, 5);

  imprime_vetor(&v[1], 4);
  imprime_vetor2(&v[1], 4);

  return 0;

}
