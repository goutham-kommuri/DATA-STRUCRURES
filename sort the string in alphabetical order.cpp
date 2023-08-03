#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compareChars(const void* a, const void* b) {
    return (*(char*)a - *(char*)b);
}

int main() {
    char inputString[100];

    printf("Enter a string: ");
    scanf("%s", inputString);

    int length = strlen(inputString);
    qsort(inputString, length, sizeof(char), compareChars);

    printf("Sorted string: %s\n", inputString);

    return 0;
}

