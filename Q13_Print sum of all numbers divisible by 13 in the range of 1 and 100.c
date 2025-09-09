#include <stdio.h>

int main() {
    int i, sum = 0;

    // Loop through numbers from 1 to 100
    for (i = 1; i <= 100; i++) {
        // Check if the number is divisible by 13
        if (i % 13 == 0) {
            // If it is, add it to the sum
            sum = sum + i;
        }
    }

    printf("The sum of all numbers divisible by 13 between 1 and 100 is: %d\n", sum);
    return 0;
}
