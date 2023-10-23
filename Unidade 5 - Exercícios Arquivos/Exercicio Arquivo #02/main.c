#include <stdio.h>

int main() {

  // Crie um programa que receba um texto do usuário e grave o texto em um
  // arquivo.

  FILE *arquivo;
  char texto[51];

  arquivo = fopen("arquivo02.txt", "w");

  puts("Digite um texto:");
  fgets(texto, 51, stdin);

  fprintf(arquivo, "%s", texto);

  fclose(arquivo);

  return 0;
}