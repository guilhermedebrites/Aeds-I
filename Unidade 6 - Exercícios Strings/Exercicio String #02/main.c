#include <stdio.h>
#include <string.h>

int main() {
  // Ler uma string de no máximo 50 caracteres e indicar quais as posições da letra A nessa palavra

  char str[51];
  
  puts("Digite uma frase:");
  fgets(str, 50, stdin);

  for(int i = 0; i < strlen(str); i++){
    if(str[i] == 'a' || str[i] == 'A'){
      printf("\nContem letra A na posição: %d", i+1);
    }
  }
  
  return 0;
}