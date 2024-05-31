#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[]) {

  int x, y, z;
  
  x = atoi(argv[1]);
  y = atoi(argv[2]);
  z = atoi(argv[3]);

  printf("%s\n", x > y && y > z || x < y && y < z ? "verdadero" : "falso");
  return 0;
}
