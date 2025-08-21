#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Person {
    char name[50];
    int age;
};


int compareByAge(const void *a, const void *b) {
    struct Person *p1 = (struct Person *)a;
    struct Person *p2 = (struct Person *)b;
    return (p1->age - p2->age);  
}

int main() {

    struct Person people[] = {
        {"John", 10},
        {"Doe", 20},
        {"Michael", 15}
    };

    int n = sizeof(people) / sizeof(people[0]);

    qsort(people, n, sizeof(struct Person), compareByAge);

    printf("Sorted by age:\n");
    for (int i = 0; i < n; i++) {
        printf("Name: %s, Age: %d\n", people[i].name, people[i].age);
    }

    return 0;
}
