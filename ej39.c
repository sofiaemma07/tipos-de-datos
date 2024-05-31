#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
  int year = atoi(argv[1]);
  bool x4, x100, x400;
  x4 = !(year % 4);
  x100 = !(year % 100);
  x400 = !(year % 400);
  printf("%s\n", (x4 && ! x100) || x400 ? "Es año bisiesto" : "NO es año bisiesto");

  return 0;
}
