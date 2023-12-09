#include <stdio.h>

/*
int main() {
  int i, j;
  for(i = 0; i < 7; i++) {
    for(j = 0; j < 13; j++) {
      if((7-i <= j && j < 7) || (i-1 > j%7 && j/7)) {
        printf("  ");
        continue;
      }
      if(j < 7) {
        printf("%c ", 'A' + j);
      } else {
        printf("%c ", 'F' - j%7);
      }
    }
    printf("\n");
  }
  return 0;
}
*/

int main() {
  int i, j;
  for(i = 0; i < 7; i++) {
    for(j = 0; j < 13; j++) {
      if(j-6-i < 0 && 6-i-j < 0) {
        printf("  ");
        continue;
      }
      if(j < 7) {
        printf("%c ", 'A' + j);
      } else {
        printf("%c ", 'F' - j%7);
      }
    }
    printf("\n");
  }
  return 0;
}


 



