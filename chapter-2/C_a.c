#include <stdio.h>

int main() {
  int sp, cp;
  scanf("%d %d", &sp, &cp);
  if(cp < sp) {
    printf("profit made = %d\n", sp-cp);
  } else {
    printf("loss made = %d\n", cp-sp);
  }
  return 0;
}


