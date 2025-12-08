#include <stdio.h>

int main() {
    char s[1000];

    // Read a line of input (including spaces)
    fgets(s, sizeof(s), stdin);

    // Print the required output
    printf("Hello, World!\n");
    printf("%s", s);

    return 0;
}
