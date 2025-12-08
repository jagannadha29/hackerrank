#include <stdio.h>

int main() {
    int a, b;
    float c, d;

    // Read two integers
    scanf("%d %d", &a, &b);

    // Read two floats
    scanf("%f %f", &c, &d);

    // Integer sum and difference
    printf("%d %d\n", a + b, a - b);

    // Float sum and difference (rounded to 1 decimal)
    printf("%.1f %.1f\n", c + d, c - d);

    return 0;
}

