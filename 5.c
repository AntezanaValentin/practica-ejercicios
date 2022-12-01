// Implementar en C el programa que calcule el factorial de n, siendo n un entero mayor o igual a cero. Si el argumento n ingresado por linea de comandos es menor a cero imprimir “Error”. Dar el diagrama de flujo del programa.


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int n = atoi(argv[1]);
  int res = 1;
  if (n < 0) {
    printf("ERROR\n");
  } else {
    for (int i = 1; i <= n; i++) {
      res *= i;
    }
    printf("%d\n", res);
  }
  return 0;
}
