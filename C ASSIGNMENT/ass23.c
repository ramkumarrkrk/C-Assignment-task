#include <stdio.h>

struct Array2D {
    int arr[10][10]; 
    int size;       
};

void getArray(struct Array2D *a) {
    printf("Enter the array values:\n");
    for (int i = 0; i < a->size; i++) {
        for (int j = 0; j < a->size; j++) {
            scanf("%d", &a->arr[i][j]);
        }
    }
}

void displayArray(struct Array2D a) {
    printf("Array elements are:\n");
    for (int j = 0; j < a.size; j++) {     
        for (int i = 0; i < a.size; i++) {
            printf("%d\n", a.arr[i][j]);
        }
    }
}

int main() {
    struct Array2D obj; 

    printf("Enter the size of array:\n");
    scanf("%d", &obj.size);

    getArray(&obj); 
    displayArray(obj);  

    return 0;
}
