#include <stdio.h>

void main() {
    int arr[100], result[100]; 
    int n, i;                    

    printf("Enter the array limit: ");
    scanf("%d", &n);

    printf("Enter the values of array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  
    }

    for(i = 0; i < n - 1; i++) {
        result[i] = arr[i] * arr[i + 1];
    
    }

    printf("Output:\n");
    for(i = 0; i < n - 1; i++) {
        printf("%d\n", result[i]);
    }
}
