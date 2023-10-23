#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* inverteString(char str[]);
int main() {
  //   Ler uma string de no máximo 50 caracteres e criar uma nova string com seu
  //   inverso, isso é a última letra da
  // primeira string será a primeira na nova string e assim sucessivamente.

  char str[51];
  char *p;

  puts("Digite uma frase: ");
  fgets(str, 50, stdin);

  p = inverteString(str);
  printf("%s", p);
  return 0;
}

char* inverteString(char str[]){
  int tamanho = strlen(str);
  int fim = tamanho - 1;
  int i;

  char *novaStr = (char*) malloc((tamanho + 1) * sizeof(char));
  
  for(i = 0; i < tamanho; i++){
    novaStr[fim] = str[i];
    fim--;
  }
  novaStr[i] = '\0';
  return novaStr;
}