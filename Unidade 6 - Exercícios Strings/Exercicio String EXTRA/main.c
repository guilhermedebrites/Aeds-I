#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void inverteString(char str[], int posinicial, int posfinal);
int main() {
  char str[51];
  
  puts("Digite uma frase: ");
  fgets(str, 51, stdin);

  inverteString(str, 0, strlen(str)-1);

  printf("%s", str);

  return 0;
}

void inverteString(char str[], int posinicial, int posfinal){
  int aux;
  if(posinicial < posfinal){
    aux = str[posinicial];
    str[posinicial] = str[posfinal];
    str[posfinal] = aux;
    
    inverteString(str, posinicial+1, posfinal-1);
  }
}