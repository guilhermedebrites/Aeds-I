#include <stdio.h>
#include <stdlib.h>

int main() {
  //   Faça um programa em C que solicite ao usuário a quantidade de alunos de
  //   uma turma e leia
  // a nota de cada aluno, armazenando-a em memória alocada dinamicamente. A
  // nota é um número real de dupla precisão (double). Imprima todas as notas e
  // também a média das notas.

  int qntAlunos;
  double notas;
  double *ptr = &notas;
  double mediaNotas = 0;

  puts("Digite a quantidade de alunos");
  scanf("%d", &qntAlunos);

  ptr = (double *)malloc(qntAlunos * sizeof(double));

  for(int i = 0; i < qntAlunos; i++){
    printf("Insira a nota do aluno %d: ", i);
    scanf("%lf", ptr+i);
  }

  for(int i = 0; i < qntAlunos; i++){
    printf("\nNota aluno %d: %.2lf", i, *(ptr+i));
    mediaNotas += *(ptr+i);
  }

  printf("\nMedia da turma: %.2lf", mediaNotas / qntAlunos);
  free(ptr);
  return 0;
}