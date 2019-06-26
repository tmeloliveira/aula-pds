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

float Ponto::distancia(Ponto& p){
  return(sqrt(pow((x-p.x),2) + pow((y-p.y),2)));
}

int main() {
  Ponto a,b;
  a.atribuir(1,1);
  b.atribuir(2,2);
  printf("%f", a.distancia(b));
  return(0);
}
