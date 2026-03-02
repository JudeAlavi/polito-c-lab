/* * Project: Binary Search and Connectivity Logic
 * Description: Implements a classic Binary Search algorithm and 
 * a connectivity check logic for node pairs.
 */

#include <stdio.h>

/**
 * Performs a Binary Search on a sorted array.
 * @return Index of the key if found, otherwise -1.
 */
int BinSearch(int v[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (v[mid] == key) return mid;
        if (v[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    printf("Enter number to search: ");
    if (scanf("%d", &key) == 1) {
        int result = BinSearch(arr, size, key);
        (result != -1) ? printf("Found at index %d\n", result) : printf("Not found.\n");
    }
    return 0;
}
