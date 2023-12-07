#include <stdio.h>

int main() {
  int class, noOfSubs, grace = 0;
  printf("enter class obtained by student: ");
  scanf("%d", &class);
  printf("number of subjects failed in: ");
  scanf("%d", &noOfSubs);

  switch (class) {
    case 1:
      if(noOfSubs <= 3) {
        grace += noOfSubs * 5;
      }
      break;
    case 2:
      if(noOfSubs <= 2) {
        grace += noOfSubs * 4;
      }
      break;
    case 3:
      if(noOfSubs <= 1) {
        grace += noOfSubs * 5;
      }
      break;
  }

  printf("grace marks for student = %d\n", grace);
  
  return 0;
}
