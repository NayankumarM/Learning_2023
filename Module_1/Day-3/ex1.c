#include <stdio.h>

void printAscending(int n);
void printSpaces(int n);
void printDescending(int n);

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printAscending(i);
        printSpaces(n - i);
        printDescending(i);
        printf("\n");
    }

    return 0;
}

void printAscending(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d", i);
    }
}

void printSpaces(int n) {
    for (int i = 1; i <= n; i++) {
        printf(" ");
    }
}

void printDescending(int n) {
    for (int i = n; i >= 1; i--) {
        printf("%d", i);
    }
}
