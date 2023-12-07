#include <stdio.h>

int main() {
  int num1 = 0, num2 = 0, res = 1;
  printf("enter 2 numbers: ");
  scanf("%d%d", &num1, &num2);
  while(num2 > 0) {
    res *= num1;
    num2--;
  }
  printf("num1 raised to the num2 = %d\n", res);
  return 0;
}


