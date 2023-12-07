#include <stdio.h>

int main() {
  int menPer = 52, literacy = 48, litMen = 35, pop = 80000;
  int illMen = (menPer-litMen) * pop / 100;
  int illWomen = ((100-53)-(literacy-litMen)) * pop / 100;
  printf("no of illiterate men = %d\n", illMen);
  printf("no of illiterate women = %d\n", illWomen);
  return 0;
}






