#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
  float p, r, t;
  p = atof(argv[1]);
  r = atof(argv[2]);
  t = atof(argv[3]);

  double Dinero_obtenido = p*pow((1+r), t); 
  printf("%f", Dinero_obtenido);

  return 0;
}
