// =============================================================
// Assignment II 
// Name: Pratik Majumdar
// Scholar Id; 2012005
// Date 2021-10-06 00:03:12
// =============================================================

#include<stdio.h>

int main(){

  while(1){
    int choice;
    printf("==========================================================================\n");
    printf("Select a choice: \n\t1. Addition \n\t2. Multiplication \n\t3. Exit\n");
    printf("==========================================================================\n");
    printf("Enter a choice: ");
    scanf("%d",&choice);
    if(choice == 1){
      long int num1, num2;
      printf("Enter two decimal numbers: ");
      scanf("%ld %ld", &num1, &num2);
      long long int sum = num1 + num2;
      printf("The sum is: %lld\n", sum);
    }
    else if(choice == 2){
      long int num1, num2;
      printf("Enter two decimal numbers: ");
      scanf("%ld %ld", &num1, &num2);
      long long int product = num1 * num2;
      printf("The product is: %lld\n", product);
    }
    else {
      printf("Exiting...");
      break;
    }
  }

  return 0;
}