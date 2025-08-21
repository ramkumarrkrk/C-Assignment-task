#include <stdio.h>

void findEvenCount(int arr[], int size){
    int count = 0;

    for (int i=0;i < size; i ++){
      if (arr[i] % 2 == 0){

      }
    }

printf("Number of even numbers in the given array is %d\n",count);
}

int main() {
    int size;

    printf("Enter the size of an array: ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the values of array:\n");
    for (int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    findEvenCount(arr, size);
    return 0;
}
