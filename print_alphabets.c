#include <stdio.h>

int main() {
    char alphabet = 'a';

    printf("Alphabets from a to z:\n");

    while (alphabet <= 'z') {
        printf("%c ", alphabet);
        alphabet++;
    }

    printf("\n");

    return 0;
}
