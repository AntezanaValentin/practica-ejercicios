// Escribir un programa que acepte un argumento entero n y use dos loops anidados para imprimir un patron como el de un tablero de ajedrez usando asteriscos y espacios en la terminal. El argumento n es la cantidad de filas y columnas del tablero.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int n = atoi(argv[1]);
  int a[n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if ( (i + j) % 2 != 0 )
        printf("* ");
      else
        printf("  ");
    }
    printf("\n");
  }
  return 0;
}
