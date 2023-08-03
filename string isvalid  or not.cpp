#include <stdio.h>
#include <stdbool.h>

bool isStringValid(const char *str) {
    while (*str) {
        if (*str == ' ') {
            return false;
        }
        str++;
    }
    return true;
}

int main() {
    char inputString[100];

    printf("Enter a string: ");
    scanf("%s", inputString);

    if (isStringValid(inputString)) {
        printf("The string is valid.\n");
    } else {
        printf("The string is not valid.\n");
    }

    return 0;
}

