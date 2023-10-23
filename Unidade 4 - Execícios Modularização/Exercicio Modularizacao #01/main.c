#include <stdio.h>

float retornaMedia(int n1, int n2, int n3, char typeMedia);

int main(void) {
  /*Faça um procedimento que recebe as 3 notas de um aluno por parâmetro e uma
   * letra. Se a letra for ‘A’, o procedimento calcula e escreve a média
   * aritmética das notas do aluno, se for ‘P’, calcula e escreve a sua média
   * ponderada (pesos: 5, 3 e 2). Faça um programa que leia 3 notas de N alunos
   * e acione o procedimento para cada aluno. (N deve ser lido do teclado) */

  int nAlunos = 0;
  int notas[3];
  char typeM;
  float Media = 0;

  puts("Insira a quantidade de alunos:");
  scanf("%d", &nAlunos);

  for (int i = 0; i < nAlunos; i++) {
    for (int n = 0; n < 3; n++) {
      printf("Insina a %d nota do %d aluno:", i + 1, n + 1);
      scanf("%d", &notas[n]);
    }
    puts("Insira o tipo de media a ser calculada, 'A' para aritmedica e 'P' "
         "para ponderada:");
    scanf(" %c", &typeM);
    float Media = retornaMedia(notas[0], notas[1], notas[2], typeM);
    printf("A media do %d aluno é: %.1f", i + 1, Media);
    puts("");
  }

  return 0;
}

float retornaMedia(int n1, int n2, int n3, char typeMedia) {
  float soma = 0;
  float resultMedia = 0;

  if (typeMedia == 'A' || typeMedia == 'a') {
    soma = n1 + n2 + n3;
    resultMedia = soma / 3;
    return resultMedia;
  } else if (typeMedia == 'P' || typeMedia == 'p') {
    soma = n1 * 5 + n2 * 3 + n3 * 2;
    resultMedia = soma / (n1 + n2 + n3);
    return resultMedia;
  }

  return -1;
}