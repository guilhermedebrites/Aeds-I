#include <stdio.h>
#include <stdlib.h>

int main() {

  //   Observe os dois programas a seguir, Código 1 e Código 2. Qual. É a
  //   diferença entre eles?
  // Qual é o valor impresso para ptr em cada um dos códigos? Porque?

  //   CODIGO 01
  //     int main()
  // {
  int *ptr, i;
  ptr = (int *)malloc(sizeof(int));
  *ptr = 10;
  for (i = 0; i < 5; i++) {
    *ptr = *ptr + 1;
  }
  printf("\nptr: %d", *ptr);
  free(ptr);
  return 0;
}
//   Printa o numero 15

//   CODIGO 02
// int main()
// {
//   int *ptr, i;
//   ptr = (int *) malloc(sizeof(int));
//   *ptr = 10;
//   for(i=0;i<5;i++){
//     ptr=ptr+1;
// }
//   printf("\nptr: %p", ptr);
//   free(ptr);
//   return 0;
// }
// Retorna o endereço * 5 * 4 bytes
// 20 bytes pra frente

//   return 0;
// }