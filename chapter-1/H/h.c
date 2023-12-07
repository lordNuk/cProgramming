#include <stdio.h>
int main() {
  int num, rev = 0;
  scanf("%d", &num);
  rev = rev*10 + num%10;
  num /= 10;
  rev = rev*10 + num%10;
  num /= 10;
  rev = rev*10 + num%10;
  num /= 10;
  rev = rev*10 + num%10;
  num /= 10;
  rev = rev*10 + num;
  printf("reversed number = %d\n", rev);
  return 0;
}

