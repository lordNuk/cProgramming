#include <stdio.h>

int main() {
  int num, oct = 0, digits = 1;
  printf("\nyour number: ");
  scanf("%d", &num);
  printf("octal equivalent of %d = ", num);
  while(num > 0) {
    oct = ((num%8) * digits) + oct;
    num /= 8;
    digits *= 10;
  }
  printf("%d\n", oct);
  return 0;
}





