#include <stdio.h>

int main() {
  int num, pve, nve, zs, choice;
  pve = nve = zs = 0;
  choice = 1;
  while(choice == 1) {
    printf("\nyour number: ");
    scanf("%d", &num);
    if(num > 0) {
      pve++;
    } else if(num < 0) {
      nve++;
    } else {
      zs++;
    }
    printf("continue?(1/0)\t");
    scanf("%d", &choice);
  }
  printf("numbers entered: \n+ve = %d\n-ve = %d\n0 = %d\n", pve, nve, zs);
  return 0;
}





