// Escribir un programa que declare un array de enteros de 3 × 3 y guarde en cada elemento los primeros 9 argumentos recibidos por línea de comandos.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int a[3][3];
  int k = 1;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      a[i][j] = atoi(argv[k]);
      printf("%d ", a[i][j]);
      k++;
    }
    printf("\n");
  }
  return 0;
}
