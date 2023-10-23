#include <stdio.h>

int multiplicacao(int x, int n);

int main(void) {
  /*Escreva uma função recursiva que dado dois números 𝑥 e 𝑛, calcula o valor
   * 𝑥 ∗ 𝑛 (𝑥 multiplicado por 𝑛). Não use o operador de multiplicação. */

  int x = 5;
  int n = 4;
  int r = multiplicacao(x, n);

  printf("%d", r);

  return 0;
}

int multiplicacao(int x, int n) {
  if (n == 1) {
    return x;
  } else {
    return x + multiplicacao(x, n - 1);
  }
}