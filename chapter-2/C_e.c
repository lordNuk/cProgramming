#include <stdio.h>

int main() {
  int num, rev = 0;
  scanf("%d", &num);
  int temp = num;
  rev = rev*10 + num%10;
  num /= 10;
  rev = rev*10 + num%10;
  num /= 10;
  rev = rev*10 + num%10;
  num /= 10;
  rev = rev*10 + num%10;
  num /= 10;
  rev = rev*10 + num;
  if (temp == rev) {
    printf("%d is equal to %d\n", rev, temp);
  } else {
    printf("%d is not equal to %d\n", rev, temp);
  }
  return 0;
}











