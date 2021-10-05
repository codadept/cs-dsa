// =============================================================
// Assignment II 
// Name: Pratik Majumdar
// Scholar Id; 2012005
// Date 2021-10-06 00:09:44
// =============================================================

#include<stdio.h>
#include<string.h>
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
      char unary1[500], unary2[500];
      printf("Enter two unary numbers: ");
      scanf("%s %s", unary1, unary2);
      if(valid_unary(unary1)==1 && valid_unary(unary2)==1){
        strcat(unary1, unary2);
        printf("The sum is %s\n", unary1);
      }
    }
    else if(choice == 2){
      char unary1[500], unary2[500];
      printf("Enter two unary numbers: ");
      scanf("%s %s", unary1, unary2);
      if(valid_unary(unary1)==1 && valid_unary(unary2)==1){
        printf("The product is: ");
        for(int i=0; i<strlen(unary2);i++){
          printf("%s", unary1);
        }
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