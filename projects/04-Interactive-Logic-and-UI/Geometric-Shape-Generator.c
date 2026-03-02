/* * Project: Geometric Shape Generator
 * Description: Draws rectangles (filled/bordered) and diagonal lines using ASCII characters.
 */
#include <stdio.h>

void drawFilled(int h, int w, char s) {
    for (int i=0; i<h; i++) {
        for (int j=0; j<w; j++) printf("%c", s);
        printf("\n");
    }
}

void drawBorder(int h, int w, char s) {
    for (int i=0; i<h; i++) {
        for (int j=0; j<w; j++) {
            if (i==0 || i==h-1 || j==0 || j==w-1) printf("%c", s);
            else printf(" ");
        }
        printf("\n");
    }
}

int main() {
    printf("Filled Rectangle (3x5):\n");
    drawFilled(3, 5, '*');
    return 0;
}
