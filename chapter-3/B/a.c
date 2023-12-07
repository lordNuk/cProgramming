#include <stdio.h>

int main() {
  int hWorked = 0, overtime = 0;
  printf("enter number of hours worked by employees: ");
  scanf("%d", &hWorked);
  overtime = (hWorked > 40)? 12*(hWorked-40): 0;

  printf("overtime pay = %d\n", overtime);
  return 0;
}
