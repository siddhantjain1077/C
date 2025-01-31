#include <stdio.h>

int main() {
    int amount, notes[8] = {500, 100, 50, 20, 10, 5, 2, 1};
    int noteCount[8] = {0};

    // Input the amount
    printf("Enter the amount: ");
    scanf("%d", &amount);

    // Calculate the number of notes required
    for (int i = 0; i < 8; i++) {
        noteCount[i] = amount / notes[i];
        amount %= notes[i];
    }

    // Print the results
    printf("Total number of notes: ");
    for (int i = 0; i < 8; i++) {
        printf("%d: %d", notes[i], noteCount[i]);
        if (i < 7) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}
