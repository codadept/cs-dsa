// =============================================================
// Assignment III Q3
// Name: Pratik Majumdar
// Scholar Id; 2012005
// Date 2021-10-22 21:43:58
// =============================================================

#include <stdio.h>
#include <limits.h>

char primesArray[INT_MAX] = {0};


void sieveOfEratosthenes(int n) {

  for(int i = 2; i*i<=n; i++) {
    if(primesArray[i] == 0) {
      for(int j = 2; j*i<=n; j++)
        primesArray[i*j] = 1;
    }
  }

}

void outputPrimes(int n) {
  for(int i = 2; i<=n; i++) {
    if(primesArray[i] == 0)
      printf("%d ", i);
  }
  printf("\n");
}

int main() {  

  int n;
  scanf("%d", &n);

  sieveOfEratosthenes(n);
  outputPrimes(n);

  return 0;
}