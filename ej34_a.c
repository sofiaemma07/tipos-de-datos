#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);

  printf("%s\n", (a % b == 0 || b % a == 0) ? "verdadero" : "falso");
  return 0;
}
