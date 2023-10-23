#include <stdio.h>
#include <stdlib.h>

int main() {
  //   Crie um programa em C que:
  // a) Aloque dinamicamente 5 números inteiros
  // b) Peça para o usuário digitar os 5 números e armazene no espaço alocado
  // c) Mostre na tela os 5 números
  // d) Libere a memória alocada.

  int *ptr;
  int qntDeMemoria = 5;
  int numero;

  ptr = (int*) malloc(qntDeMemoria * sizeof(int));

  for(int i = 0; i < 5; i++){
    printf("Digite o %d numero a ser inserido: ", i);
    scanf("%d", ptr + i);
  }

  for(int i = 0; i < 5; i++){
    printf("\n%d", *(ptr + i));
  }

  free(ptr);
  
  return 0;
}