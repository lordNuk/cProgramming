#include<stdio.h>

int main() {
  float p, r, n, q, nq; 
  double amount = 0, exp, expNq;
  int i = 0, j;
  while(i < 10) {
    scanf("%f%f%f%f", &p, &r, &n, &q);
    j = 0; 
    exp = 1 + r/q;
    expNq = 1;
    nq = n*q;
    while(j < nq) {
      expNq *= exp;
      j++;
    }
    amount = p * expNq;
    printf("amount = %lf\n", amount);
    i++;
  }

  return 0;
}









