#include <ctype.h>
#include <stdio.h>

int main() {

  //   Faça um programa para inserir N letras informadas pelo usuário em um
  //   arquivo texto. Onde N é uma quantidade
  // de letras definida pelo usuário. Depois de inseridas as N letras, o
  // programa deverá ler todas as N letras do arquivo, calcular e mostrar a
  // quantidade de vogais, ou seja, quantas letras a, e, i, o, u.

  FILE *arquivo;
  int n, cont = 0;
  char letra;

  arquivo = fopen("arquivo.txt", "w");

  puts("Digite a quantidade de characters:");
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf(" %c", &letra);
    fputc(letra, arquivo);
    if (toupper(letra) == 'A' || toupper(letra) == 'E' || toupper(letra) == 'I' || toupper(letra) == 'O'|| toupper(letra) == 'U') {
      cont++;
    }
  }

  printf("Quantidade de vogais: %d", cont);

  return 0;
}