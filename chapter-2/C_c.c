#include <stdio.h>

int main() {
  int year = 2100;
  scanf("%d", &year);
  if(year%400 == 0){
    printf("%d is a leap year!", year);
  } else {
    if(year%4 == 0) {
      if(year%100 == 0) {
        printf("%d is not a leap year!", year);
      } else {
        printf("%d is a leap year!", year);
      }
    } else {
      printf("%d is not a leap year!", year);
    }
  }
  return 0;
}













