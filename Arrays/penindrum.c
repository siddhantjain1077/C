#include <stdio.h>

int main() {
    int start, end;

    printf("Enter the range (start and end): ");
    scanf("%d %d", &start, &end);

    printf("Palindrome numbers in the range %d to %d are:\n", start, end);

    for (int num = start; num <= end; num++) {
        int originalNum = num, reversedNum = 0, remainder;

        while (num > 0) {
            remainder = num % 10;
            reversedNum = reversedNum * 10 + remainder;
            num /= 10;
        }

        if (originalNum == reversedNum) {
            printf("%d\n", originalNum);
        }
    }

    return 0;
}