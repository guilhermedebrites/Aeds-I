#include <stdio.h>
#include <stdlib.h>

int main() {
  //   Faça um programa em C para armazenar em memoria um total de 30 valores do
  //   tipo inteiro,
  // usando a função de alocação dinâmica de memória CALLOC:
  // a) Atribua para os primeiros 10 inteiros os valores de 1 a 10.
  // b) Atribua para os últimos 10 inteiros os valores de 10 a 1.
  // c) Exiba na tela os 30 números.

  int *ptr;
  int n = 30;

  ptr = (int *)calloc(n, sizeof(int));

  if (ptr == NULL) {
    printf("Error na alocação dinâmica");
    exit(0);
  }

  for (int i = 0; i < 10; i++) {
    *(ptr + i) = i + 1;
  }

  for (int i = 19; i < 30; i++) {
    *(ptr + i) = i + 1;
  }

  for (int i = 0; i < n; i++) {
    printf("%d ", *(ptr + i));
  }

  free(ptr);
  return 0;
}