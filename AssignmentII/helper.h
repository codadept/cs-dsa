// =============================================================
// Assignment II 
// Name: Pratik Majumdar
// Scholar Id; 2012005
// Date 2021-10-05 22:46:48
// =============================================================

#include<stdio.h>
#include<string.h>

typedef long int li;

int digit(char c){
 
    int value=0;
 
    switch(c){
         case 'I': value = 1; break;
         case 'V': value = 5; break;
         case 'X': value = 10; break;
         case 'L': value = 50; break;
         case 'C': value = 100; break;
         case 'D': value = 500; break;
         case 'M': value = 1000; break;
         case '\0': value = 0; break;
         default: value = -1; 
    }
 
    return value;
}

li roman_to_decimal(char roman[]){
  int i = 0;
  li number = 0;
  while (roman[i]){
    
    if(digit(roman[i])<0){
      printf("Invalid roman literal");
      return -1;
    }

    if((strlen(roman)-i)>2){
      
      if(digit(roman[i]) < digit(roman[i+2])){
        printf("Invalid roman literal");
        return -1;
      }
    }

    if(digit(roman[i]) >= digit(roman[i+1])){
      number += digit(roman[i]);
    }
    else{
      number += digit(roman[i+1]) - digit(roman[i]);
      i++;
    }

    i++;
  }

  return number;
}

int decimal_to_roman(li num){
  if(num <= 0){
    return -1;
  }
  while(num != 0){

    if (num >= 1000) {
      printf("M");
      num -= 1000;
    }

    else if (num >= 900){
      printf("CM");
      num -= 900;
    }        

    else if (num >= 500){           
      printf("D");
      num -= 500;
    }

    else if (num >= 400){
      printf("CD");
      num -= 400;
    }

    else if (num >= 100){
      printf("C");
      num -= 100;                       
    }

    else if (num >= 90){
      printf("XC");
      num -= 90;                                              
    }

    else if (num >= 50){
      printf("L");
      num -= 50;                                                                     
    }

    else if (num >= 40){
      printf("XL");           
      num -= 40;
    }

    else if (num >= 10){
      printf("X");
      num -= 10;           
    }

    else if (num >= 9){
      printf("IX");
      num -= 9;                         
    }

    else if (num >= 5){
      printf("V");
      num -= 5;                                     
    }

    else if (num >= 4){
      printf("IV");
      num -= 4;                                                            
    }

    else if (num >= 1){
      printf("I");
      num -= 1;                                                                                   
    }

  }
  return 1;
}