// Escribir un programa que genere un array de 100 elementos con enteros aleatorios entre 0 y 100. Calcular el promedio de los valores en el array.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[]) {
  int a[100];
  srand(time(NULL));
   for (int i = 0; i < 100; i++) {
     int r = rand() % 100;
     a[i] = r;
     printf("%d ", a[i]);
   }
   printf("\n");
  return 0;
}
