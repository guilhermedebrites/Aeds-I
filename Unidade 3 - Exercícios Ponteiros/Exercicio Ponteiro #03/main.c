#include <stdio.h>

int main() {

  // Se o endereço de uma variável valor foi atribuído a um ponteiro valorPtr,
  // quais alternativas são verdadeiras? Justifique sua resposta.
  // a) valor = = &valorPtr
  // b) valor = = *valorPtr
  // c) valorPtr = = &valor
  // d) valorPtr = = *valor

  //Letra A - Incorreta, porque a variavel valor retorna o conteudo, ja &valorPtr retorna o endereço de memoria.

  //Letra B - Correta, porque a variavel valor retorna o conteudo e *valorPtr retorna o conteudo do ponteiro.

  //Letra C - Correta, porque a variavel valorPtr retorna o endereço de memoria de valor e &valor tambem retorna o endereço de memoria.

  //Letra D - Incorreta, porque a variavel valorPtr retorna o endereço de memoria de valor e *valor não pode ser utilizado, pois nao é um ponteiro.
  
  return 0;
}