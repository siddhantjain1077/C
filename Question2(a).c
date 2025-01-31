#include <stdio.h>

int linearSearch(int arr[], int n, int target) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // Return the index where the element is found
        }
    }
    return -1; // Return -1 if the element is not found
}

int main() {
    int arr[] = {3, 4, 1, 7, 5, 8, 11, 42, 3, 13};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 11;

    int index = linearSearch(arr, n, target);

    if (index != -1) {
        printf("Element %d is found at index: %d\n", target, index);
    } else {
        printf("Element %d is not found\n", target);
    }
    return 0;
}
