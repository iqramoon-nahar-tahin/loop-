#include <stdio.h>
int main() {
    // Infinite loop using for
    printf("Infinite loop using for:\n");
    for (;;) {
        printf("This is an infinite loop using for.\n");
    }

    // Infinite loop using while
    printf("\nInfinite loop using while:");
    while (1) {
        printf("This is an infinite loop using while.\n");
    }

    // Infinite loop using do...while
    printf("\nInfinite loop using do...while:\n");
    do {
        printf("This is an infinite loop using do...while.\n");
    } while (1);
    return 0;
}
