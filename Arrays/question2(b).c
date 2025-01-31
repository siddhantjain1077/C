#include <stdio.h>


int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        
        if (arr[mid] == target) {
            return mid;
        }

        
        if (arr[mid] < target) {
            left = mid + 1;
        }
        
        else {
            right = mid - 1;
        }
    }

    return -1; 
}

int main() {
    int arr[] = { 3, 4, 1, 7, 5, 8, 11, 42, 3, 13 };
    int target = 11;
    int size = sizeof(arr) / sizeof(arr[0]);
    int index = binarySearch(arr, 0, size - 1, target);

    if (index != -1) {
        printf("Element %d found at index: %d\n", target, index);
    } else {
        printf("Element %d not found in the array\n", target);
    }

    return 0;
}
