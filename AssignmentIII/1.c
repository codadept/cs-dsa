// =============================================================
// Assignment I Q1
// Name: Pratik Majumdar
// Scholar Id; 2012005
// Date 2021-10-22 19:09:23
// =============================================================

#include<stdio.h>
#include<string.h>

#define SIZE 1000

typedef long long ll;

ll hashCompute(char *s){
  int g = 31;
  ll hash = 0;
  for(int i=0; i<strlen(s); i++)
    hash = g * hash + s[i];
  return hash;
}

int main(){
    char s[SIZE] = {0};
    printf("Enter the String:\n");
    scanf("%[^\n]s",s);
    printf("Hash value: %lld",hashCompute(s));
}