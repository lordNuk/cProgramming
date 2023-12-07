#include<stdio.h>

int main() {
  int mCost = 6000, mEarning = 1000, mSalvage = 2000;
  int year = 0;
  float altEarn = 0, mEarn = 0, iRate = 12;
  while(altEarn >= mEarn) {
    altEarn += (altEarn + 4000) * iRate / 100;
    mEarn += 1000;
    year++;
  }
  printf("minimum life = %d\n", year);

  return 0;
}







