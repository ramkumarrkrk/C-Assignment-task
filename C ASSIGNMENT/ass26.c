#include <stdio.h>

int main() {
    int num;
    int result;

    printf("Enter the number: ");

    
    result = scanf("%d", &num);

    if (result != 1) {
    
        printf("Error: Invalid input! Please enter an integer.\n");
    } else {
    
        printf("You entered: %d\n", num);
    }

    return 0;
}
