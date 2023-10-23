#include <stdio.h>
#include <stdlib.h>

int main() {

  // Implemente um programa que leia um arquivo texto e imprima, linha a linha,
  // o seu conteúdo na tela. Imprima também a quantidade de linhas que este
  // arquivo possui.

  FILE *arquivo;
  char linha[101];
  int cont = 0;

  arquivo = fopen("arquivo03.txt", "r");

  if (arquivo == NULL) {
    printf("Arquivo nao pode ser aberto.\n");
    exit(-1);
  }

  while (!feof(arquivo)) {
    fgets(linha, 101, arquivo);
    printf("%s\n", linha);
    cont++;
  }

  printf("Esse arquivo tem: %d linhas.", cont);
  fclose(arquivo);
  return 0;
}