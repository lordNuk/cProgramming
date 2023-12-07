#include <stdio.h>

int main() {
  int i;
  for(i = 0; i < 30000; i++) {
    //printf("%c%c", 3, 4);
    printf("%s%s", "\u2661", "\u2662");
  }
  return 0;
}



 

