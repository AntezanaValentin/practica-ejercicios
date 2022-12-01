// Escribir un programa que simule lo que se conoce como “caminos aleatorios”. Usar una matriz de números enteros de 15×15 inicialmente llena de ceros. Poner un 1 en el centro de la matriz e ir llenando con unos representando los pasos del “caminante”. La caminata termina cuando se sale de la matriz original. El caminante puede dar un paso a la vez a la izquierda, derecha, arriba o abajo. Pero no puede volver sobre sus pasos. Imprimir la matriz que representa la caminata al terminar.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[]) {
  int a[15][15];
  srand(time(NULL));
  for (int i = 0; i < 15; i++) {
    for (int j = 0; j < 15; j++) {
      if (i + j == 14) {
        printf("1 ");
      }
      else
        printf("0 ");
    }
    printf("\n");
  }
  int r = (rand() % 3) + 1;
  if (r == 1) i--;
  if (r == 2) i++;
  if (r == 3) j--;
  if (r == 4) j++;

  
  return 0;
}
