#include <stdio.h>

int main() {
    float written, lab, assignment;
    float grade;

    printf("Enter the marks scored by the student:\n");

    printf("Written test = ");
    scanf("%f", &written);

    printf("Lab exams = ");
    scanf("%f", &lab);

    printf("Assignments = ");
    scanf("%f", &assignment);

    grade = (written * 70 / 100) + (lab * 20 / 100) + (assignment * 10 / 100);

    printf("Grade of the student is %f\n", grade);

    return 0;
}
