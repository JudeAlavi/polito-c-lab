/* * Project: Justified Text Formatter
 * Description: Reads a text file and formats it into lines of a maximum length.
 */
#include <stdio.h>
#include <string.h>

void formatText(const char *inputFile, const char *outputFile, int lmax) {
    FILE *fin = fopen(inputFile, "r");
    FILE *fout = fopen(outputFile, "w");
    char word[50];
    int currentLineLen = 0;

    if (!fin || !fout) return;

    while (fscanf(fin, "%s", word) == 1) {
        int wordLen = strlen(word);
        if (currentLineLen + (currentLineLen > 0 ? 1 : 0) + wordLen > lmax) {
            fprintf(fout, "\n%s", word);
            currentLineLen = wordLen;
        } else {
            if (currentLineLen > 0) { fprintf(fout, " "); currentLineLen++; }
            fprintf(fout, "%s", word);
            currentLineLen += wordLen;
        }
    }
    fclose(fin);
    fclose(fout);
}

int main() {
    return 0; 
}
