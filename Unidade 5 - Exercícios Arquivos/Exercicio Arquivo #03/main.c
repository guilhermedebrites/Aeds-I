#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  // Implemente um programa que abra o arquivo texto (criado no exercício
  // anterior) e conte a quantidade de caracteres ‘a’ que estão presentes nele.
  // Imprima a quantidade na tela.

  FILE *arquivo;
  char texto[51];
  int cont = 0;

  arquivo = fopen("arquivo02.txt", "r");

  if (arquivo == NULL) {
    printf("Arquivo nao pode ser aberto.\n");
    exit(0);
  }

  fgets(texto, 51, arquivo);

  for (int i = 0; i < strlen(texto); i++) {
    if (texto[i] == 'a' || texto[i] == 'A') {
      cont++;
    }
  }

  printf("O arquivo aberto contem o character A no seu conteudo: %d vezes.",
         cont);
  fclose(arquivo);

  return 0;
}