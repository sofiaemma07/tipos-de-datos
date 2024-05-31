#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
  float t = atof(argv[1]);

  double resultado = sin(2*t) + sin(3*t);
  printf("El resultado es: %f\n", resultado);
  return 0;
}
