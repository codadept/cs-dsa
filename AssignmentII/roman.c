// =============================================================
// Assignment II 
// Name: Pratik Majumdar
// Scholar Id; 2012005
// Date 2021-10-05 23:41:58
// =============================================================

#include<stdio.h>
#include <string.h>
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
      char roman_num[1000], roman_num2[1000];
      printf("Enter two roman numeral: ");
      scanf("%s %s",roman_num, roman_num2);
      // code for addition
      long int decimal_num = roman_to_decimal(roman_num);
      long int decimal_num2 = roman_to_decimal(roman_num2);
      if(decimal_num == -1 || decimal_num2 == -1){
        break;
      }
      else{
        long int sum = decimal_num + decimal_num2;
        printf("The sum is: ");
        decimal_to_roman(sum);
        printf("\n");
      }
    }
    else if(choice == 2){
      char roman_num[1000], roman_num2[1000];
      printf("Enter two roman numeral: ");
      scanf("%s %s",roman_num, roman_num2);
      // code for multiplication
      long int decimal_num = roman_to_decimal(roman_num);
      long int decimal_num2 = roman_to_decimal(roman_num2);
      if(decimal_num == -1 || decimal_num2 == -1){
        break;
      }
      else{
        long int product = decimal_num * decimal_num2;
        printf("The product is: ");
        decimal_to_roman(product);
        printf("\n");
      }
    }
    else {
      printf("Exiting...");
      break;
    }
  }

  return 0;
}