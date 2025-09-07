#include <stdio.h>

int main() {
    int n;
    // Use 'long long' for factorial to store larger results
    long long factorial = 1;

    // Ask the user for a number
    printf("Enter an integer to find its factorial: ");
    scanf("%d", &n);

    // Factorial is not defined for negative numbers
    if (n < 0) {
        printf("Error: Factorial does not exist for negative numbers.\n");
    } else {
        // Loop from 1 to n to calculate the factorial
        for (int i = 1; i <= n; i++) {
            factorial *= i; // Same as: factorial = factorial * i;
        }
        // Print the result
        printf("Factorial of %d = %lld\n", n, factorial);
    }

    return 0;
}