#include <stdio.h>
#include <string.h>
#include <ctype.h>

void checkPalindrome(char str[]) {
    int length = strlen(str);
    int isPalindrome = 1; 

    for (int i = 0; i < length / 2; i++) {
        if (toupper(str[i]) != toupper(str[length - i - 1])) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("Entered string is a palindrome\n");
    } else {
        printf("Entered string is not a palindrome\n");
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str); 

    checkPalindrome(str);

    return 0;
}
