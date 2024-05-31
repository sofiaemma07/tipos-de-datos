#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = atoi(argv[3]);
  int d = atoi(argv[4]);
  int e = atoi(argv[5]);

  int suma = 0;

  a = (a % 2 == 1) ? a : 0;
  b = (b % 2 == 1) ? b : 0;
  c = (c % 2 == 1) ? c : 0;
  d = (d % 2 == 1) ? d : 0;
  e = (e % 2 == 1) ? e : 0;

  suma = a + b + c + d + e;

  printf("%d\n", suma);
      return 0;
    }
