#include <stdio.h>

int main() {
  int c, d;
  scanf("%d%d", &c, &d);
  c += d;
  d = c - d;
  c = c - d;
  printf("swapped variables c = %d d = %d\n", c, d);
  return 0;
}

