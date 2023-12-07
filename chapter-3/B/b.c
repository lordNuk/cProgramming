#include <stdio.h>

int main() {
  int num = 0, fact = 1;
  printf("enter number: ");
  scanf("%d", &num);
  while(num > 0) {
    fact = fact*num;
    num--;
  }
  printf("factorial = %d\n", fact);
  return 0;
}

