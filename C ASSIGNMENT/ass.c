#include <stdio.h>

void read_data(int arr[], int limit, char name[]) {
    printf("%s: ", name);
    for (int i = 0; i < limit; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void swapArrays(int arr1[], int arr2[], int limit) {
    //int temp;
    for (int i = 0; i < limit; i++) {
        arr1[i]=arr1[i]+arr2[i];
        arr2[i] = arr1[i]-arr2[i];
        arr1[i] = arr1[i]-arr2[i];
    }
}

int main() {
    int limit;
    printf("Enter the size of arrays: ");
    scanf("%d", &limit);
    int array1[limit], array2[limit];
    printf("Enter the values of Array 1:\n");
    for (int i = 0; i < limit; i++) {
        scanf("%d", &array1[i]);
    }
    printf("Enter the values of Array 2:\n");
    for (int i = 0; i < limit; i++) {
        scanf("%d", &array2[i]);
    }    
    swapArrays(array1, array2, limit);
    printf("Arrays after swapping:\n");
    read_data(array1, limit, "Array1");
    read_data(array2, limit, "Array2");

    return 0;
}
