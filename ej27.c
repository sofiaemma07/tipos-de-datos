#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {

float a, b;
a = atoi(argv[1]);
b = atoi(argv[2]); 

double h = sqrt(a*a + b*b);
printf("%f", h);
return 0;
}
