#include <stdio.h>

int main() {
  float basic, gross;
  scanf("%f", &basic);
  gross = basic*40/100 + basic*20/100;
  printf("gross sallary = %f\n", gross);
  return 0;
}
