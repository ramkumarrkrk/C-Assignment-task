#include <stdio.h>

struct Calculator {
    float num1, num2;
};

void addition(struct Calculator calc) {
    printf("Result: %.2f + %.2f = %.2f\n", calc.num1, calc.num2, calc.num1 + calc.num2);
}

void subtraction(struct Calculator calc) {
    printf("Result: %.2f - %.2f = %.2f\n", calc.num1, calc.num2, calc.num1 - calc.num2);
}

void multiplication(struct Calculator calc) {
    printf("Result: %.2f * %.2f = %.2f\n", calc.num1, calc.num2, calc.num1 * calc.num2);
}

void division(struct Calculator calc) {
    if (calc.num2 != 0) {
        printf("Result: %.2f / %.2f = %.2f\n", calc.num1, calc.num2, calc.num1 / calc.num2);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}

int main() {
    struct Calculator calc;
    int choice;


    printf("Enter two numbers: ");
    scanf("%f %f", &calc.num1, &calc.num2);


    printf("\n--- Menu ---\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            addition(calc);
            break;
        case 2:
            subtraction(calc);
            break;
        case 3:
            multiplication(calc);
            break;
        case 4:
            division(calc);
            break;
        default:
            printf("Invalid choice! Please enter a number between 1 and 4.\n");
    }

    return 0;
}
