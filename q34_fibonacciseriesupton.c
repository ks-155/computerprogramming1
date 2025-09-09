#include <stdio.h>

int main() {
    int n, i, t1 = 1, t2 = 1, next_term;

    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    if (n >= 1) {
        printf("%d ", t1);
    }
    if (n >= 2) {
        printf("%d ", t2);
    }

    // Loop to generate the rest of the terms
    for (i = 3; i <= n; i++) {
        next_term = t1 + t2;
        printf("%d ", next_term);
        // Update terms for the next iteration
        t1 = t2;
        t2 = next_term;
    }
    printf("\n");

    return 0;
}
