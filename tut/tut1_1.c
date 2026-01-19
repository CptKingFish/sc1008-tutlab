#include <stdio.h>
#include <math.h>

int main() {
    float a1, b1, c1, a2, b2, c2;
    printf("Enter the values for a1, b1, c1, a2, b2, c2:\n");
    scanf("%f %f %f %f %f %f", &a1, &b1, &c1, &a2, &b2, &c2);
    float den = (a1 * b2) - (a2 * b1);
    if (fabs(den) <= 0.0001) { // floating point value
        printf("Unable to compute because the denominator is zero!\n");
    } else {
        float x = ((b2 * c1) - (b1 * c2)) / den;
        float y = ((a1 * c2) - (a2 * c1)) / den;
        printf("x = %.2f and y = %.2f", x, y);
    }
    return 0;
}
