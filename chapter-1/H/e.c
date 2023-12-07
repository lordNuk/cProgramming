#include <stdio.h>

int main() {
  float l, b, r;
  scanf("%f%f%f", &l, &b, &r);
  printf("rectangle perimeter = %f\n", l*b);
  printf("rectangle area = %f\n", 2*(l+b));
  printf("circle circumference = %f\n", 2*3.14*r);
  printf("circle area = %f\n", 3.14*r*r);
  return 0;
}

