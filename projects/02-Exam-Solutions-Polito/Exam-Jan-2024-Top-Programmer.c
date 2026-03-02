/* * Exam: January 03, 2024
 * Topic: 2D Array processing (finding the best programmer based on daily scores)
 */
#include <stdio.h>

int topProgrammer(int scores[15][12], int a, int b, int day) {
    int maxSum = -1, bestIndex = -1;
    for (int i = 0; i < a; i++) {
        int sum = 0;
        for (int j = 0; j <= day; j++) {
            sum += scores[i][j];
        }
        if (sum > maxSum || (sum == maxSum && (bestIndex == -1 || i < bestIndex))) {
            maxSum = sum;
            bestIndex = i;
        }
    }
    return bestIndex;
}

int main() {
    // Logic for testing can be added here
    return 0;
}
