#include <stdio.h>

int main() {
    int i, j, is_prime, count = 0;

    // Outer loop for numbers from 2 to 500
    for (i = 2; i <= 500; i++) {
        is_prime = 1; // Assume i is prime

        // Inner loop to check for factors
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                is_prime = 0; // Not prime
                break;
            }
        }

        // If the number is prime, increment the counter
        if (is_prime == 1) {
            count++;
        }
    }

    printf("The total number of prime numbers between 1 and 500 is: %d\n", count);
    return 0;
}
