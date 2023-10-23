#include <stdio.h>
#include <stdlib.h>

int main() {

  // Crie um programa que escreva de 1 até 10 em um arquivo, armazenando um
  // número por linha.

  FILE *arquivo;
  arquivo = fopen("arquivo01.txt", "w");

  for (int i = 0; i < 10; i++) {
    fprintf(arquivo, "%d ", i + 1);
  }
  fclose(arquivo);

  return 0;
}