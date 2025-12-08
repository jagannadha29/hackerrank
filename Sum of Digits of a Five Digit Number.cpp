#include <stdio.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n);

    // Extract digits one by one
    sum += n % 10;   // last digit
    n /= 10;

    sum += n % 10;
    n /= 10;

    sum += n % 10;
    n /= 10;

    sum += n % 10;
    n /= 10;

    sum += n % 10;   // first digit

    printf("%d", sum);

    return 0;
}


