#include <stdio.h>

int arr1[10][10], arr2[10][10], sum[10][10];
int size;

void getArray() {
    int i, j;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    printf("Enter the values of array 1:\n");
    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter the values of array 2:\n");
    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }
}

void addArray() {
    int i, j;
    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}

void displayArray() {
    int i, j;
    printf("Sum of array 1 and array 2:\n");
    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            printf("%d\n", sum[i][j]);
        }
    }
}


int main() {
    getArray();      
    addArray();     
    displayArray();  
    return 0;
}
