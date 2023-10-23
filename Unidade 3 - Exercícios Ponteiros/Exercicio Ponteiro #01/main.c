#include <stdio.h>

int main(void) {

  // Escreva um programa em C que leia dois inteiros, armazenando-os em
  // variáveis. O programa deve comparar os endereços das variáveis e exibir o
  // maior deles.

  int num1 = 0, num2 = 0, *ptr = &num1, *ptr2 = &num2;

  puts("Insira o primeiro numero:");
  scanf("%d", &num1);

  puts("Insira o segundo numero:");
  scanf("%d", &num2);

  puts("Realizando calculos.....");

  if (ptr > ptr2) {
    printf("O endereço de memoria maior é do numero %d: %p", num1, ptr);
  } else {
    printf("O endereço de memoria maior é do numero %d: %p", num2, ptr2);
  }

  return 0;
}