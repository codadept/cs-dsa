// =============================================================
// Mini Project I
// Name: Pratik Majumdar
// Scholar Id; 2012005
// Date 2021-09-21 11:14:12
// =============================================================


#include <stdio.h>
#include <stdlib.h>

#define SIZE 5000

// helper function
void addNumberAsChar(char*, char*, char*);

int main(){
  // code
  
  // Declaring an array of characters to store fibonacci numbers
  char prevFibonacciNum[SIZE], currFibonacciNum[SIZE], finalFibonacciNum[SIZE];

  // Initialising each character to be '0'
  for(int i = 0; i < SIZE; i++){
    prevFibonacciNum[i] = currFibonacciNum[i] = finalFibonacciNum[i] = '0';
  }

  // The current fibonacci number is 1
  currFibonacciNum[SIZE - 1] = '1';

  int n;
  printf("Enter a number: ");
  scanf("%d", &n);

  // for n = 0 and 1 the fibonacci number corresponding is n itself
  if(n==0 || n==1){

    printf("%c",n+'0');
    return 0;

  }

  for(int i = 2; i < n; i++){
    // finalFibonacci number stores the sum of prevFibonacci and currFibonacci num
    addNumberAsChar(prevFibonacciNum, currFibonacciNum, finalFibonacciNum);

    for(int i = SIZE-1;i>=0;i--){
      // current fibonacci number is assigned to prev fibonacci number
      prevFibonacciNum[i]=currFibonacciNum[i];
      // final fibonacci number is assigned to current fibonacci number
      currFibonacciNum[i]=finalFibonacciNum[i];
    }
  }

  printf("The %dth fibonacci number is: ", n);

  // for outputting the fibonacci number omitting all the unnecessary zeros
  int flag = 0;
  for (int i = 0; i < SIZE; i++)
  {
    if (finalFibonacciNum[i] != '0')
      flag = 1;

    if(flag){
      printf("%c", finalFibonacciNum[i]);
    }
  }
  printf("\n");


  return 0;
}

void addNumberAsChar(char* a, char* b, char* sum){
  // initial carry is zero
  int carry = 0;

  for(int i=SIZE-1;i>=0;i--){
    // the characters are type casted to the number and then the numbers and the carry from the prev loop is added
    int result = (a[i] - '0') + (b[i] - '0') + carry;
    // storing the obtained result omitting the carry
    sum[i] = result%10 + '0';
    // storing the carry for next loop
    carry = result / 10;
  }
}