/* * Project: Parabola Visualizer
 * Description: Generates a text-based graph of a quadratic function (parabola) in a file.
 */
#include <stdio.h>
#include <math.h>

int main() {
    float a=1, b=0, c=0; // Default coefficients
    int n=20; 
    float x0=-10, xn=10, ymin=0, ymax=100;
    FILE *fp = fopen("parabola.txt", "w");

    for (int i = 0; i <= n; i++) {
        float x = x0 + i * ((xn-x0)/n);
        float y = a*x*x + b*x + c;
        if (y >= ymin && y <= ymax) {
            for (int k=0; k < round(y-ymin); k++) fprintf(fp, " ");
            fprintf(fp, "*\n");
        }
    }
    fclose(fp);
    printf("Graph saved to parabola.txt\n");
    return 0;
}
