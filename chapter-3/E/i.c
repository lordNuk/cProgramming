#include <stdio.h>

int main() {
  int i, j, num = 0;
  for(i = 0; i < 4; i++) {
    for(j = 0; j < 4; j++) {
      if(i+j < 3) {
        printf(" ");
      } else {
        printf("%d ", ++num);
      }
    }
    printf("\n");
  }
  return 0;
}



 





