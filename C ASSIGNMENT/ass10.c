#include <stdio.h>

void read_data(int arr[], int size, char name[]) {
    printf("%s: ", name);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


void print_data(int arr1[], int arr2[], int size) {
    int temp;
    for (int i = 0; i < size; i++) {
        temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
}

int main() {
    int size;

    printf("Enter the size of arrays: ");
    scanf("%d", &size);

    int array1[size], array2[size];

    printf("Enter the values of Array 1:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array1[i]);
    }

    
    printf("Enter the values of Array 2:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array2[i]);
    }

    
    print_data(array1, array2, size);

    
    printf("Arrays after swapping:\n");
    print_data(array1, size, "Array1");
    print_data(array2, size, "Array2");

    return 0;
}
