#include <stdio.h>

void encode(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        str[i] += 1;
        i++;
    }
}

void decode(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        str[i] -= 1;
        i++;
    }
}

int main() {
    char str[100];

    printf("Enter a string to encode: ");
    fgets(str, sizeof(str), stdin);

    encode(str);
    printf("Encoded string: %s", str);

    decode(str);
    printf("Decoded string: %s", str);

    return 0;
}
