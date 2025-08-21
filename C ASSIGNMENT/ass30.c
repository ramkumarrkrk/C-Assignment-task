#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    int count = 0;
    char ch;

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: Cannot open file %s\n", filename);
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        if (ch == '\n') {   
            count++;
        }
    }

    fclose(fp);

    if (count > 0 || ch != EOF) {
        count++;
    }

    printf("Number of lines in file: %d\n", count);

    return 0;
}
