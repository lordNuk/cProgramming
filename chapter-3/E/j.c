#include <stdio.h>

int main() {
  int i, j, n, nmr, r, nfact, nmrfact, rfact;
  for(i = 0; i < 5; i++) {
    for(j = 5-i; j > 0; j--) {
      printf(" ");
    }
    for(j = 0; j <= i; j++) {
        n = i; r = j; nmr = n-r;
        nfact = nmrfact = rfact = 1;
        while(n > 0) {
          nfact *= n;
          n--;
        }
        while(nmr > 0) {
          nmrfact *= nmr;
          nmr--;
        }
        while(r > 0) {
          rfact *= r;
          r--;
        }
        printf("%d ", nfact / (nmrfact*rfact));
    }
    printf("\n");
  }
  return 0;
}



 


