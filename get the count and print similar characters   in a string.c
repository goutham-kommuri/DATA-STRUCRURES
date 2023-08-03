#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void printSimilarCharacters(const char *str) {
    int count[256] = {0},i; 

    for ( i = 0; str[i] != '\0'; i++) {
        char currentChar = str[i];
        count[currentChar]++;
    }

    printf("Similar characters in the string:\n");
    for (i = 0; i < 256; i++) {
        if (count[i] > 1) {
            printf("Character '%c': Count = %d\n", i, count[i]);
        }
    }
}

int main() {
    char inputString[100];

    printf("Enter a string: ");
    scanf("%s", inputString);

    printSimilarCharacters(inputString);

    return 0;
}

