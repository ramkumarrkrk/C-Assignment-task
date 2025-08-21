#include <stdio.h>


void sortDescending(int arr[], int size) {
    int temp;


    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted array in descending order:\n");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i != size - 1) {
            printf(", ");
        }
    }
    printf("\n");
}

int main() {
    int size;

    
    printf("Enter the size of an array: ");
    scanf("%d", &size);

    int arr[size];

   
    printf("Enter the values of array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

   
    sortDescending(arr, size);

    return 0;
}
