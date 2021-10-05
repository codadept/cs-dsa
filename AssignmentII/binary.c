// =============================================================
// Assignment II 
// Name: Pratik Majumdar
// Scholar Id; 2012005
// Date 2021-10-06 00:26:14
// =============================================================

#include<stdio.h>
#include "helper.h"

int main(){

  while(1){
    int choice;
    printf("==========================================================================\n");
    printf("Select a choice: \n\t1. Addition \n\t2. Multiplication \n\t3. Exit\n");
    printf("==========================================================================\n");
    printf("Enter a choice: ");
    scanf("%d",&choice);
    if(choice == 1){
      long binary1, binary2;
      printf("Enter two binary numbers: ");
      scanf("%ld %ld", &binary1, &binary2);
      
      int i = 0, remainder = 0, sum[20];

      while (binary1 != 0 || binary2 != 0){
        sum[i++] =(binary1 % 10 + binary2 % 10 + remainder) % 2;
        remainder =(binary1 % 10 + binary2 % 10 + remainder) / 2;
        binary1 = binary1 / 10;
        binary2 = binary2 / 10;
      }
      if (remainder != 0)
        sum[i++] = remainder;
      --i;
      printf("The sum is: ");
      while (i >= 0)
        printf("%d", sum[i--]);
      printf("\n");
    }
    else if(choice == 2){
      long binary1, binary2, multiply = 0;
      printf("Enter two binary numbers: ");
      scanf("%ld %ld", &binary1, &binary2);
      int digit, factor = 1;

      while (binary2 != 0){
        digit =  binary2 % 10;
        if (digit == 1){
          binary1 = binary1 * factor;
          multiply = binaryproduct(binary1, multiply);
        }
        else
          binary1 = binary1 * factor;
        binary2 = binary2 / 10;
        factor = 10;
      }
      printf("The product is: %ld\n", multiply);
    }
    else {
      printf("Exiting...");
      break;
    }
  }

  return 0;
}