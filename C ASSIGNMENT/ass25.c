#include <stdio.h>


struct Student {
    char name[50];
    int age;
};

int main() {

    struct Student s1 = {"Arun", 20};
    struct Student s2 = {"Meena", 21};
    struct Student s3 = {"Kumar", 22};

    printf("Student 1: Name = %s, Age = %d\n", s1.name, s1.age);
    printf("Student 2: Name = %s, Age = %d\n", s2.name, s2.age);
    printf("Student 3: Name = %s, Age = %d\n", s3.name, s3.age);

    return 0;
}
