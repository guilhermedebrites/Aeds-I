#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  //   Ler uma string de no máximo 50 caracteres e mostrar quantas letras possui
  //   e quantos caracteres são números e
  // quantos não são nem números nem letras.

  char str[51];
  int contLetra = 0, contNum = 0, contResto = 0;

  puts("Digite uma frase: ");
  fgets(str, 50, stdin);

  for (int i = 0; i < strlen(str); i++) {
    if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
      contLetra++;
    } else if (str[i] >= '0' && str[i] <= '9') {
      contNum++;
    } else {
      contResto++;
    }
  }

  printf("\nNumero de letras: %d", contLetra);
  printf("\nNumero de numeros: %d", contNum);
  printf("\nNumero de outros char's: %d", contResto);

  return 0;
}