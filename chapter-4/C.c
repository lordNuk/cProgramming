#include <stdio.h>
#include <math.h>

int main() {
  int choice, i, sr, num, fact;
  while(1) {
    printf("\n1. Factorial");
    printf("\n2. Prime");
    printf("\n3. Odd/Even");
    printf("\n4. Exit");
    printf("\nYour choice?");
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        printf("\nenter number: ");
        scanf("%d", &num);
        fact = 1;
        while(num > 0) {
          fact = fact*num;
          num--;
        }
        printf("factorial = %d\n", fact);
        break;
      case 2:
        printf("\nenter number: ");
        scanf("%d", &num);
        i = 2;
        sr = sqrt(num);
        for(i = 2; i <= sr; i++) {
          if(num%i == 0) {
            printf("%d is a prime number.\n", num);
            break;
          }
        }
        break;
      case 3:
        printf("\nenter number: ");
        scanf("%d", &num);
        if(num%2 == 0) {
          printf("%d is an even number.\n", num);
        } else {
          printf("%d is an odd number.\n", num);
        }
        break;
      case 4:
        return 0;
    }
  }
  
  return 0;
}
