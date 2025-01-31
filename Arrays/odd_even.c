#include <stdio.h>

int main() {
    int a;

    // Input the a
    printf("Enter a number: ");
    scanf("%d", &a);

    // Check if the a is odd or even
    if (a % 2 == 0) {
        printf("%d is an even number.\n", a);
    } else {
        printf("%d is an odd number.\n", a);
    }

    return 0;
}
