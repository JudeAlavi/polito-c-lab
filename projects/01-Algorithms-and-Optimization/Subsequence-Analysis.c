/* * Project: Longest Odd Subsequence
 * Description: Identifies the starting index of the longest consecutive sequence of odd numbers.
 */
#include <stdio.h>

int findOddSubSequence(int vet[], int n) {
    int bestStart = -1, bestLength = 0, currentStart = -1, currentLength = 0;
    for (int i = 0; i < n; i++) {
        if (vet[i] % 2 != 0) {
            if (currentLength == 0) currentStart = i;
            currentLength++;
            if (currentLength > bestLength) {
                bestLength = currentLength;
                bestStart = currentStart;
            }
        } else {
            currentLength = 0;
        }
    }
    return bestLength == 0 ? -1 : bestStart;
}

int main() {
    int data[] = {1, 3, 2, 5, 7, 9, 4};
    int index = findOddSubSequence(data, 7);
    printf("Longest odd sequence starts at index: %d\n", index);
    return 0;
}
