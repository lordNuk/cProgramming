#include <stdio.h>

int main() {
  int num = 1, d1, d2, d3;
  while(num <= 500) {
    //the three digits of number 544 = d1d2d3
    d1 = num/100;
    d2 = num/10 % 10;
    d3 = num%10;
    if (d1*d1*d1 + d2*d2*d2 + d3*d3*d3 == num) {
      printf("%d ", num);
    }
    num++;
  }
  return 0;
}



