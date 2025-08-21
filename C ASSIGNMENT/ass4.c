#include <stdio.h>

int main() {
    float mark;

    
    printf("Enter the student's mark (out of 100): ");
    scanf("%f", &mark);

    
    if (mark < 0 || mark > 100) {
        printf("Invalid mark. Please enter a value between 0 and 100.\n");
    }
    else {
        
        if (mark >= 50) {
            printf("Passed\n");
        } else {
            printf("Failed\n");
        }
    }

    return 0;
}

