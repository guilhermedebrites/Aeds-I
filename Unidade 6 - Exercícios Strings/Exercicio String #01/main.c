#include <stdio.h>
#include <string.h>

int main() {

  // Ler uma string de no máximo 50 caracteres e contar quantas letras A essa
  // palavra possui

  char str[51];
  int cont = 0;

  puts("Digite um texto:");
  fgets(str, 50, stdin);
  
  for(int i = 0; i < strlen(str); i++){
    if(str[i] == 'A' || str[i] == 'a'){
      cont++;
    }
  }

  printf("\nEssa string contem a letra A: %d vezes", cont);
  return 0;
}