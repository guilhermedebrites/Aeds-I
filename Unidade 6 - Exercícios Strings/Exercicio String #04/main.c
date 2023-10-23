#include <stdio.h>
#include <ctype.h>

void buscaLetra(char str[], char letra);

int main() {
  //   Ler uma string de no máximo 50 caracteres e em seguida um caractere
  //   (entre A e z - consista se o caracter esta
  // nesse intervalo), mostrar quais as posições esse caractere (maiúscula ou
  // minúscula) na string lida e quantas vezes ele apareceu.

  char str[51];
  char letra;

  puts("Digite uma frase: ");
  fgets(str, 50, stdin);

  puts("Digite uma letra para ser buscada na frase: ");
  scanf(" %c", &letra);

  if (isalpha(letra)) {
    buscaLetra(str, letra);
  }else{
    puts("Caracter invalido!");
  }

  return 0;
}

void buscaLetra(char str[], char letra) {
  int cont = 0;
  puts("Encontramos essa letra nas seguintes posições: ");
  for (int i = 0; i < strlen(str); i++) {
    if (toupper(str[i]) == toupper(letra)) {
      printf("\nPosição: %d", i);
      cont++;
    }
  }
  printf("\nA frase contem essa letra: %d vezes", cont);
}