// =============================================================
// Assignment III Q1
// Name: Pratik Majumdar
// Scholar Id; 2012005
// Date 2021-10-22 19:54:41
// =============================================================

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generateInput(int n, int a[], int flag){
  srand(time(0));
  switch (flag)
  {
  case 1:
    // Generating Best Case Input
    for(int i = 0; i<n; i++)
      a[i] = i;
    break;

  case 2:
    // Generating Average Case Input
    for(int i = 0; i<n; i++)
      a[i] = rand()%1000;
    break;

  case 3:
    // Generating Worst Case Input
    for(int i = 0; i<n; i++)
      a[i] = n-i-1;
    break;

  default:
    break;
  }
}

void insertionSort(int n, int a[]) {
  int key, j;
  for (int i = 1; i < n; i++)
  {
    key = a[i];
    j = i - 1;
    while (j >= 0 && a[j] > key)
    {
        a[j + 1] = a[j];
        j = j - 1;
    }
    a[j + 1] = key;
  }
}

int main() {

  int n;
  printf("Enter size of array: ");
  scanf("%d", &n);

  int arr[n];

  int choice;
  while(1){
    printf("==================================\n");
    printf("1. Best Case\n");
    printf("2. Average Case\n");
    printf("3. Worst Case\n");
    printf("4. Exit\n");
    printf("==================================\n\n");
    printf("Enter your choice:  ");
    scanf("%d", &choice);

    switch(choice) {
      case 1:
        generateInput(n, arr, choice);
        break;

      case 2:
        generateInput(n, arr, choice);
        break;
      
      case 3:
        generateInput(n, arr, choice);
        break;

      case 4:
        printf("Exiting...");
        break;

      default:
        printf("Incorrect option\n");
        return 0;
        break;
    }

    clock_t start = clock();

    insertionSort(n, arr);

    clock_t end = clock();
    
    printf("Total time taken by insertion sort: %f\n", (double)(end - start)/(double)CLOCKS_PER_SEC);

    if(choice == 4) break;
  }


  return 0;
}
