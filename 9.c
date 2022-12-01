// Escribir un programa que acepte un argumento n y genere la matriz identidad de dimension n×n. Usar arrays bidimensionales.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int n = atoi(argv[1]);
  int a[n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == j)
        printf("1 ");
      else
        printf("0 ");
      }
      printf("\n");
    }
  return 0;
}
