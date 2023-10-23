#include <stdio.h>

int main() {
  // Explique cada uma das expressões a seguir, indicando a diferença entre
  // elas: p++; (*p)++; *(p++); Qual informação se refere a expressão *(p+10)?

  // Na primeira expressão esta incrementando o endereço da variavel de acordo
  // com a quantidade de byts que o tipo da varivel ocupa Na segunda está
  // pegando o conteudo do ponteiro e incrementando o seu valor Na terceira ele
  // esta avançando uma casa na memoria e buscando o conteudo dela

  // RESUMINDO

  // - p++ está incrementando o ponteiro, vai para o proximo endereço de
  // memória.
  //  - (*ptr)++ está realizando o pós incremento do conteudo do ponteiro.
  //  - *(ptr++) está avançando o ponteiro com pós incremento.
  return 0;
}