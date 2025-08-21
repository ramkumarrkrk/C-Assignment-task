#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool matchPattern(char str[]) {
    int len = strlen(str);

    if (len < 2 || str[0] != 'a') {
        return false;
    }

    for (int i = 1; i < len; i++) {
        if (str[i] != 'b') {
            return false;
        }
    }
    return true;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    if (matchPattern(str)) {
        printf("Match found: %s\n", str);
    } else {
        printf("No match!\n");
    }

    return 0;
}
