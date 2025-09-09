#include <stdio.h>

int main() {
    int num, i, is_prime = 1; // Assume the number is prime initially

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // 0 and 1 are not prime numbers
    if (num <= 1) {
        is_prime = 0;
    } else {
        // Check for factors from 2 to num/2
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                is_prime = 0; // The number is not prime
                break;        // Exit the loop as we found a factor
            }
        }
    }

    if (is_prime == 1) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
