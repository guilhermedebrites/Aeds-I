#include <stdio.h>

void mediaSalario(float salarios[],int filhos[], int n);

int main() {
  /*A prefeitura de uma cidade fez uma pesquisa entre os seus habitantes, coletando dados sobre
o salário e número de filhos. Faça uma função que receba o salário e a quantidade de filhos
por pessoa (adulto), calcule e retorne a renda per capita da população. Crie um programa
para ler os dados (a condição de parada pode ser um flag ou a quantidade N) e exibir a renda
per capta calculada pela função criada.*/

  int numeroDeHabitantes = 0;
  
  puts("Digite o numero de habitantes entrevistados:");
  scanf("%d", &numeroDeHabitantes);

  float salarios[numeroDeHabitantes];
  int numeroDeFilhos[numeroDeHabitantes];
  
  for(int i  = 0; i < numeroDeHabitantes; i++){
    puts("Digite o salário do entrevistado:");
    scanf("%f", &salarios[i]);
    puts("Digite o numero de filhos do entrevistado:");
    scanf("%d", &numeroDeFilhos[i]);
  }

  mediaSalario(salarios, numeroDeFilhos, numeroDeHabitantes);
  
  return 0;
}

void mediaSalario(float salarios[],int filhos[], int n){
  float somaDosSalarios = 0;
  int somaDeHabitantes = n;
  for(int i = 0; i < n; i++){
    somaDosSalarios += salarios[i];
    somaDeHabitantes += filhos[i];
  }
  float result = somaDosSalarios / somaDeHabitantes;

  printf("Renda per capta da população inserida: %f", result);
}