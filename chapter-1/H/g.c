#include <stdio.h>

int main() {
  int num, sum;
  scanf("%d", &num);
  sum += num%10;
  num /= 10;
  sum += num%10;
  num /= 10;
  sum += num%10;
  num /= 10;
  sum += num%10;
  num /= 10;
  sum += num;
  printf("sum = %d\n", sum);
  return 0;
}

