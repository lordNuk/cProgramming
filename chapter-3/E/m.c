#include<stdio.h>

int main() {
  float x; 
  scanf("%f", &x);
  float exp, expn, nlog = (x-1)/x;
  expn =  exp = nlog;

  int i = 2;
  while(i < 8) {
    expn *= exp;
    nlog += expn/2;
    i++;
  }
  printf("natural log of first terms = %f\n", nlog);

  return 0;
}









