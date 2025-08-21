#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char first;

    
    printf("Enter a string: ");
    scanf("%s", str); 

    first = str[0];   

    for (int i = 1; i < strlen(str); i++) {
        if (str[i] == first) {
            str[i] = '$';  
        }
    }


    printf("Modified string: %s\n", str);

    return 0;
}
