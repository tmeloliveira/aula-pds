/*

  Para compilar:
  g++ lista10_ex1_v1.cpp -o lista10_ex1_v1

  Para executar:
  ./lista10_ex1_v1

*/

#include <stdio.h>
#include <math.h>

struct Ponto {
  float x;
  float y;
  void atribuir(float a, float b);
  float distancia(Ponto& p);
};

void Ponto::atribuir(float a, float b) {
  x=a;
  y=b;
}

float Ponto::distancia(Ponto& p) {
  printf("Calculando distancia entre os pontos (%.2f, %.2f) e (%.2f, %.2f).\n", x, y, p.x, p.y);
  return(sqrt(pow((x - p.x),2) + pow((y - p.y),2)));
}

int main() {
  Ponto a, b;
  a.atribuir(1,1);
  b.atribuir(2,2);
  printf("Distancia: %f\n", a.distancia(b));
  return(0);
}
