/* * Exam Topic: File I/O and Statistics
 * Description: Reads student IDs and scores from a file, calculates average and distribution.
 */
#include <stdio.h>

float calculateExamStats(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (!file) return 0.0;
    
    char id[10];
    int score, total = 0, pass = 0, sum = 0;
    while (fscanf(file, "%s %d", id, &score) == 2) {
        total++;
        if (score >= 18) {
            pass++;
            sum += score;
        }
    }
    fclose(file);
    if (pass > 0) printf("Average: %.2f\n", (float)sum/pass);
    return (total > 0) ? (float)pass/total : 0.0;
}

int main() {
    return 0;
}
