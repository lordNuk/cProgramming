#include <stdio.h>

int main() {
  int x = 0;
  while(x <= 255) {
    printf("Ascii value %d = %c\n", x, x);
    x++;
  }
  return 0;
}
