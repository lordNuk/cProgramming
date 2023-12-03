#include <stdio.h>

int main() {
  float s1, s2, s3, s4, s5, ttlMks;
  scanf("%f%f%f%f%f", &s1, &s3, &s3, &s4, &s5);
  ttlMks = s1+ s2+ s3+ s4+ s5;
  printf("aggegrate = %f\n", ttlMks);
  printf("percentage = %f\n", ttlMks*100/500);
  return 0;
}

