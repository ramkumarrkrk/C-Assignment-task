#include <stdio.h>

int main() {
    int principal;
    float rate, years, simpleInterest;

    printf("Enter the principal amount: ");
    scanf("%d", &principal);

    printf("Enter the interest rate: ");
    scanf("%f", &rate);

    printf("Enter the number of years: ");
    scanf("%f", &years);

    simpleInterest = (principal * rate * years) / 100;

    printf("Simple Interest = %.2f\n", simpleInterest);

    return 0;
}
