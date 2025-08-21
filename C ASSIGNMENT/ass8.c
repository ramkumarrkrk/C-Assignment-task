#include <stdio.h>

int main() {
    int limit, i, sum = 0;
    printf("Enter a limit: ");
    scanf("%d", &limit);
    for (i = 1; i <= limit; i++) {
        if (i % 2 != 0) { 
            sum = sum + i;
        }
    }

    printf("Sum of odd numbers = %d\n", sum);

    return 0;
}
