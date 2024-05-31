#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {

 int r = atoi(argv[1]);
 double rf = r/255.0;
 int g = atoi(argv[2]);
 double gf = g/255.0;
 int b = atoi(argv[3]);
 double bf = b/255.0;

double w = rf > gf ? rf : gf;
w = w > bf ? w : bf;

double c, m, y;
double k = r == 0 && g == 0 && b == 0;

c = (w - rf)/w;
printf("%f\n", c);
m = (w - gf)/w;
printf("%f\n", m);
y = (w - bf)/w;
printf("%f\n", y);
k = 1 - w;
printf("%f\n", k);

  return 0;
}
