#include <stdio.h>

int main() {
  int i, num;
  scanf("%d", &num);
  for(i = 1; i <= 10; i++) {
    printf("%d * %2d = %3d\n", num, i, num*i);
  }
  return 0;
}



 


