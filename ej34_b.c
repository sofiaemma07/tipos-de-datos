#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
  float a;

  a = atof(argv[1]);

  double suma = (pow(cos(a), 2)) + (pow(sin(a), 2));
  printf("%f", suma);

  return 0;

}
