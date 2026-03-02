/* * Project: Matrix Path Finder (Minefield Escape)
 * Description: Finds a safe path through a 2D grid (minefield) from left to right.
 */
#include <stdio.h>
#define M 11

int findPath(char minefield[][M], int nr, int nc) {
    for (int startRow = 0; startRow < nr; startRow++) {
        if (minefield[startRow][0] != '-') continue;
        int currentRow = startRow;
        int valid = 1;
        for (int col = 1; col < nc; col++) {
            int nextRow = -1;
            if (currentRow > 0 && minefield[currentRow-1][col] == '-') nextRow = currentRow - 1;
            else if (minefield[currentRow][col] == '-') nextRow = currentRow;
            else if (currentRow < nr - 1 && minefield[currentRow+1][col] == '-') nextRow = currentRow + 1;
            
            if (nextRow == -1) { valid = 0; break; }
            currentRow = nextRow;
        }
        if (valid) return startRow;
    }
    return -1;
}

int main() {
    char field[6][M] = { {'-','*','*'}, {'*','-','*'}, {'*','-','-'} }; // Example
    printf("Safe path starts at row: %d\n", findPath(field, 6, M));
    return 0;
}
