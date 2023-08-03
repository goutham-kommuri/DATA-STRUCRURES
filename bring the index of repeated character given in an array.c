#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void findRepeatedIndices(const char *str) {
    int length = strlen(str),i;
    bool found[256] = { false };

    for ( i = 0; i < length; i++) {
        char currentChar = str[i];
        if (found[currentChar]) {
            printf("Character '%c' is repeated at index %d\n", currentChar, i);
        } else {
            found[currentChar] = true;
        }
    }
}

int main() {
    char inputString[100];

    printf("Enter a string: ");
    scanf("%s", inputString);

    findRepeatedIndices(inputString);

    return 0;
}

