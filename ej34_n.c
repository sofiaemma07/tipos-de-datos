#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[]) {
  int d = atoi(argv[1]);

  printf("365 -> %d\n", (d / 365) 'Un año');
  d %= 365;
  printf("7 -> %d\n", (d / 7) 'Una semana');
  d %= 7;
  printf("1 -> %d\n", (d / 1) 'Un dia' );
  return 0;
}
