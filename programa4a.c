#include <stdio.h>

void eleva_quadrado_val(int x) {
    x = x * x;
    printf("\neleva_quadrado_val: %i", x);
}

void eleva_quadrado_ref(int *x) {
    *x = *x * *x;
    printf("\neleva_quadrado_ref: %i", *x);
}

int main () {
  int a = 2;
  printf("\nmain: %i", a);
  eleva_quadrado_val(a);
  printf("\nmain: %i", a);
  eleva_quadrado_ref(&a);
  printf("\nmain: %i", a);

  return 0;
}