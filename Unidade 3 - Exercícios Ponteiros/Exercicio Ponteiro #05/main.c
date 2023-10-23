#include <stdio.h>

int main() {
  //   Escreva um programa em C que declare variáveis para armazenar um valor
  //   inteiro, um valor
  // real e um caracter. Deve existir no programa ponteiros associados a cada um
  // deles. O programa deve solicitar novos dados para as variáveis e elas devem
  // ser modificadas usando os respectivos ponteiros. Exiba os endereços e os
  // conteúdos de todas as variáveis e ponteiros antes e após a alteração.

  int numero, *ptrNumero = &numero;
  float numeroFloat, *ptrNumeroFloat = &numeroFloat;
  char character, *ptrChar = &character;

  printf("Numero inteiro: %d, endereço de memoria: %p\n", numero, ptrNumero);
  printf("Numero real: %f, endereço de memoria: %p\n", numeroFloat,ptrNumeroFloat);
  printf("Character: %c, endereço de memoria: %p\n", character, ptrChar);

  puts("Digite um numero inteiro:");
  scanf("%d", ptrNumero);

  puts("Digite um numero real:");
  scanf("%f", ptrNumeroFloat);

  puts("Digite um character:");
  scanf(" %c", ptrChar);

  printf("[ATUALIZADO] Numero inteiro: %d, endereço de memoria: %p\n", numero, ptrNumero);
  printf("[ATUALIZADO] Numero real: %f, endereço de memoria: %p\n", numeroFloat,ptrNumeroFloat);
  printf("[ATUALIZADO] Character: %c, endereço de memoria: %p\n", character, ptrChar);

  return 0;
}