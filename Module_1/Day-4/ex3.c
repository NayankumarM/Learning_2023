#include <stdio.h>

char *xstrchr(char *string, char ch) {
    while (*string != '\0') {
        if (*string == ch) {
            return string;
        }
        string++;
    }
    return NULL;
}

int main() {
    char str[] = "Hello, world!";
    char ch = 'o';
    char *result = xstrchr(str, ch);

    if (result != NULL) {
        printf("Character '%c' found at position %ld\n", ch, result - str);
    } else {
        printf("Character '%c' not found in the string\n", ch);
    }

    return 0;
}
