#include <stdio.h>

int main() {
  int i, num;
  float sum = 0, fact;
  for(i = 1; i <= 7; i++) {
    num = i;
    fact = 1;
    while(num > 0) {
      fact = fact*num;
      num--;
    }
    sum += i/fact;
  }
  printf("sum of first 7 terms = %f\n", sum);
  return 0;
}








