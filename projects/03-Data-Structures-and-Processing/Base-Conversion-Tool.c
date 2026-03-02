/* * Project: Base Conversion System
 * Description: Converts numbers between base 2 and 9.
 * Handles both string-to-decimal and decimal-to-base logic.
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int toDecimal(char *input, int base) {
    int res = 0;
    for (int i = 0; i < strlen(input); i++) {
        res = res * base + (input[i] - '0');
    }
    return res;
}

void fromDecimal(int n, int base) {
    if (n == 0) return;
    fromDecimal(n / base, base);
    printf("%d", n % base);
}

int main() {
    char val[] = "101";
    int b0 = 2, b1 = 8;
    int dec = toDecimal(val, b0);
    printf("Result in base %d: ", b1);
    fromDecimal(dec, b1);
    printf("\n");
    return 0;
}
