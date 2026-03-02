/* * Project: Simple Character Encryption
 * Description: Implements a mirrored character encoding system 
 * for basic file-based data security.
 */

#include <stdio.h>
#include <stdlib.h>

void encryptFile(const char* inputFile, const char* outputFile) {
    FILE *fpin = fopen(inputFile, "r");
    FILE *fpout = fopen(outputFile, "w");
    char ch;

    if (fpin == NULL || fpout == NULL) return;

    while (fscanf(fpin, "%c", &ch) == 1) {
        if (ch >= '0' && ch <= '9') ch = '0' + ('9' - ch);
        else if (ch >= 'a' && ch <= 'z') ch = 'A' + ('z' - ch);
        else if (ch >= 'A' && ch <= 'Z') ch = 'a' + ('Z' - ch);
        fprintf(fpout, "%c", ch);
    }
    fclose(fpin);
    fclose(fpout);
}

int main() {
    encryptFile("input.txt", "output.txt");
    printf("Processing complete.\n");
    return 0;
}
