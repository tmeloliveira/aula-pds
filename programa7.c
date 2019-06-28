/* 

  Para compilar:
  $ gcc programa7.c -o p7

  Para executar:
  $ ./p7

*/

#include <stdio.h>
#include <stdlib.h> // necessário para usar as funções malloc() e free()
    
int main(void) {
  float *v; // Definindo o ponteiro v
  int i, num_elementos;
  
  printf("Informe o numero de elementos do vetor: ");
  scanf("%d", &num_elementos);
      
  /*
    Alocando dinamicamente o espaço necessário 
    
    1 - Calcular o número de bytes necessários
    primeiramente multiplicamos o número de elementos do vetor pela
    quantidade de bytes que é dada pelo comando sizeof,
    portanto temos:
    num_elementos * sizeof(float)
    
    2 - Reservar a quantidade de memória
    usamos malloc para reservar essa quantidade de memória,
    então temos:
    malloc(num_elementos * sizeof(float))
    
    3 - Converter o ponteiro para o tipo de dados desejado
    como a função malloc retorna um ponteiro do tipo void,
    precisamos converter esse ponteiro para o tipo da nossa variável, no caso float,
    por isso usamos o comando de conversão explicita:
    (float *)
    
    4 - juntando tudo e atribuindo em v temos o comando abaixo: 
  */
      
  v = (float *) malloc(num_elementos * sizeof(float));
    
  // Armazenando os dados em um vetor
  for (i = 0; i < num_elementos; i++) {
    printf("Digite o valor para a posicao %d do vetor: ", i+1);
    scanf("%f",&v[i]);
  }
    
  // Percorrendo o vetor e imprimindo os valores 
  printf("\nValores do vetor dinamico:\n");
    
  for (i = 0;i < num_elementos; i++) {
    printf("%.2f\n",v[i]);
  }
      
  // Liberando o espaço de memória alocado
  free(v);
    
  return 0;
}