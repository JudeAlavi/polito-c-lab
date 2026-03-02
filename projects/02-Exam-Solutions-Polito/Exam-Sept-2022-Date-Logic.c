/* * Exam: September 12, 2022
 * Topic: Date parsing and validation using sscanf
 */
#include <stdio.h>

void printDate(char *date) {
    int day, month, year;
    char sep1, sep2;
    char *monthNames[] = {"January", "February", "March", "April", "May", "June",
                          "July", "August", "September", "October", "November", "December"};

    if (sscanf(date, "%d%c%d%c%d", &day, &sep1, &month, &sep2, &year) == 5 && sep1 == '-' && sep2 == '-') {
        if (day >= 1 && day <= 31 && month >= 1 && month <= 12) {
            printf("%d %s %d\n", day, monthNames[month - 1], year);
            return;
        }
    }
    printf("Invalid date format.\n");
}

int main() {
    printDate("12-09-2022");
    return 0;
}
