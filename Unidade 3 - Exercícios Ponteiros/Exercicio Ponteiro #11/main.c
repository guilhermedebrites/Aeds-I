#include <stdio.h>
#include <stdlib.h>

int main() {
  //   Crie um programa em C que:
  // a) Aloque dinamicamente 5 números inteiros
  // b) Peça para o usuário digitar os 5 números e armazene no espaço alocado
  // c) Imprima os endereços onde foram armazenados os 5 números
  // d) Realoque um espaço para digitais mais 5 números inteiros
  // e) Peça para o usuário digitar novos 5 números e armazene no novo espaço
  // alocado f) Imprima os endereços onde foram armazenados os 10 números g)
  // Mostre na tela os 10 números h) Libere a memória alocada.

  int *ptr;
  int n = 5;

  ptr = (int *)malloc(n * sizeof(int));

  for (int i = 0; i < n; i++) {
    puts("Digite um numero: ");
    scanf("%d", ptr + i);
  }

  puts("\nEndereços usados para armazenamento: ");
  for (int i = 0; i < n; i++) {
    printf("\n%p", ptr + i);
  }

  printf("\n");

  ptr = (int *)realloc(ptr, (n*2) * sizeof(int));

  for (int i = 5; i < n * 2; i++) {
    puts("\nDigite um numero: ");
    scanf("%d", ptr + i);
  }

  puts("\nEndereços usados para armazenamento: ");
  for (int i = 0; i < n * 2; i++) {
    printf("\n%p", ptr + i);
  }

  printf("\n");

  for (int i = 0; i < n * 2; i++) {
    printf("\n%d", *(ptr + i));
  }

  free(ptr);

  return 0;
}