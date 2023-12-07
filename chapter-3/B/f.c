#include <stdio.h>

int main() {
  int matchsticks = 21, user;
  int r = 1;
  while(matchsticks > 0) {
    printf("\nRound %d\n", r++);
    printf("your move: \t\t");
    scanf("%d", &user);
    matchsticks -= user;
    if(matchsticks <= 0) {
      printf("\n\nremaining matchsticks = 0\nYOU LOSE!!!\n\n");
      break;
    }
    printf("my move: \t\t%d", 5-user);
    matchsticks -= 5-user;
    printf("\nremaining matchsticks = %d\n", matchsticks);
  }
  return 0;
}




