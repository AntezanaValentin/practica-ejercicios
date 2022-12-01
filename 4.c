//Escribir un programa que acepte como argumento un numero entero e imprima el numero con los digitos al reves. Por ejemplo para la entrada 12345 debe imprimir 54321.

// 12345 / 10 = 1234 | 12345 % 10 = 5
// 1234  / 10 =  123 | 1234  % 10 = 4
// 123   / 10 =   12


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  long int n = atol(argv[1]);
  while (n > 0) {
    int r = n % 10;
    printf("%d ", r);
    int d = n / 10;
    n = d;
  }
    printf("\n");
  return 0;
}
