/* * Project: Interactive String Analyzer
 * Description: A menu-driven tool to analyze length, compare words, and encode strings.
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void runMenu() {
    char word[100], cmd;
    while(1) {
        printf("\nEnter word & Command (L: Length, U: Upper, E: Exit): ");
        scanf("%s %c", word, &cmd);
        if (toupper(cmd) == 'E') break;
        
        switch(toupper(cmd)) {
            case 'L': printf("Length: %ld\n", strlen(word)); break;
            case 'U': for(int i=0; word[i]; i++) putchar(toupper(word[i])); break;
        }
    }
}

int main() { runMenu(); return 0; }
