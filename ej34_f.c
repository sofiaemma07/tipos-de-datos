#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define g 9.80665

int main(int argc, char *argv[]) {
  double x0 = atof(argv[1]);
  double v0 = atof(argv[2]);
  double t = atof(argv[3]);

  double resultado = x0 + (v0 * t) - (1/2) * ((g*t) * (g*t));

  printf("El resultado es: %f\n", resultado);
  return 0;
}
