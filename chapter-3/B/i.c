#include <stdio.h>

int main() {
  int num, min, max, choice;
  printf("\nyour number: ");
  scanf("%d", &num);
  min = max = num;
  printf("\ncontinue? (1/0) ");
  scanf("%d", &choice);
  while(choice == 1) {
    printf("\nyour number: ");
    scanf("%d", &num);
    if(min > num) {
      min = num;
    } else if(max < num) {
      max = num;
    }
    printf("\ncontinue? (1/0) ");
    scanf("%d", &choice);
  }
  printf("range of entered numbers = %d\n", max-min);
  return 0;
}


