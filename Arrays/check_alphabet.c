#include <stdio.h>

int main() {
    int asciiValue;

    printf("Enter the ASCII value: ");
    scanf("%d", &asciiValue);

    if (asciiValue >= 65 && asciiValue <= 90) {
        printf("Uppercase alphabet.\n");
    }
    else if (asciiValue >= 97 && asciiValue <= 122) {
        printf("Lowercase alphabet.\n");
    }
    else if (asciiValue >= 48 && asciiValue <= 57) {
        printf("Digit.\n");
    }
    else {
        printf("Special character.\n");
    }
    return 0;
}
