#include <stdio.h>

int main() {
  float dist;
  scanf("%f", &dist);
  printf("merters = %f\n", dist*1000);
  printf("feet = %f\n", dist*3.23);
  printf("inches = %f\n", dist*3.23*12);
  printf("centimeters = %f\n", dist*100000);
  return 0;
}

