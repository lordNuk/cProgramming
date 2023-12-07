#include <stdio.h>

int main() {
  float i, x;
  int y;
  printf("\t\t\t1\t\t\t2\t\t\t3\t\t\t4\t\t\t5\t\t\t6");
  for(x = 5.5; x <= 12.5; x += 0.5) {
    printf("\n%4.1f\t", x);
    for(y = 1; y <= 6; y++) {
      i = 2 + (y + (0.5 * x));
      printf("%.2f\t", i);
    }
  }
  return 0;
}
