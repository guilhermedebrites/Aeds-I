#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void) {
  //   Ler uma string de no máximo 50 caracteres e em seguida um caractere,
  //   mostrar quais as posições esse caractere
  // aparece na string lida e quantas vezes ele apareceu.

  char str[51];
  char letra;
  int cont = 0;

  puts("Digite uma frase: ");
  fgets(str, 50, stdin);

  puts("Digite uma letra para ser buscada na frase: ");
  scanf("%c", &letra);

  puts("Encontramos essa letra nas seguintes posições: ");
  for (int i = 0; i < strlen(str); i++) {
    if (toupper(str[i]) == toupper(letra)) {
      printf("\nPosição: %d", i);
      cont++;
    }
  }
  printf("\nA frase contem essa letra: %d vezes", cont);

  return 0;
}