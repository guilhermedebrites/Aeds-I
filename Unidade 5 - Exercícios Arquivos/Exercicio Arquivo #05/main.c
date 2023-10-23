#include <stdio.h>

int main() {
  // Escreva um programa que concatene o conteúdo de dois arquivos. O conteúdo
  // dos dois arquivos deverá ser
  // adicionado em um terceiro arquivo

  FILE *arquivo01, *arquivo02, *arquivo03;
  char copy[101];
  char copy2[101];

  arquivo01 = fopen("arquivo.txt", "r");
  arquivo02 = fopen("arquivo2.txt", "r");
  arquivo03 = fopen("arquivo3.txt", "w");

  while (!feof(arquivo01)) {
    fgets(copy, 101, arquivo01);
    fprintf(arquivo03, "%s", copy);
  }

  fprintf(arquivo03, "\n");

  while (!feof(arquivo02)) {
    fgets(copy2, 101, arquivo02);
    fprintf(arquivo03, "%s", copy2);
  }

  return 0;
}