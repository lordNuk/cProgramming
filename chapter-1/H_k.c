#include <stdio.h>

int main() {
  int amt;
  scanf("%d", &amt);
  printf("no of 100's = %d\n", amt/100);
  amt %= 100;
  printf("no of 50's = %d\n", amt/50);
  amt %= 50;
  printf("no of 10's = %d\n", amt/10);
  return 0;
}






