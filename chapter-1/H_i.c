#include <stdio.h>

int main() {
  int num, sum = 0;
  scanf("%d", &num);
  sum = num%10 + num/1000;
  printf("sum of first & last digit = %d\n", sum);
  return 0;
}

