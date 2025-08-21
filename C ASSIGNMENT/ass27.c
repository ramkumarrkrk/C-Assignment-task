#include <stdio.h>

int square(int x) {
    return x * x;
}

int cube(int x) {
    return x * x * x;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original list: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Squares: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", square(arr[i]));
    }
    printf("\n");

    printf("Cubes: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", cube(arr[i]));
    }
    printf("\n");

    return 0;
}
