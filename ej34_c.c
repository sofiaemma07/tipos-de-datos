#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[]) {

  int a, b, c, ab, ac, bc;
  
  a = atoi(argv[1]);
  b = atoi(argv[2]);
  c = atoi(argv[3]);

  printf("%s\n", a >= b + c && b >= a + c && c >= a + b ? "falso" : "verdadero");
  return 0;
}

