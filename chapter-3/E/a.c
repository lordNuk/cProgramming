#include <stdio.h>
#include <math.h>

int main() {
  int num, i, sr, isPrime;
  for(num = 1; num <= 300; num++) {
    isPrime = 1;
    i = 2;
    sr = sqrt(num);
    for(i = 2; i <= sr; i++) {
      if(num%i == 0) {
        isPrime = 0;
        break;
      }
    }
    if(isPrime) {
      printf("%d ", num);
    }
  }
  return 0;
}









