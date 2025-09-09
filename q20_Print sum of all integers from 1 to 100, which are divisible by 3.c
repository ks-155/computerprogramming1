#include <stdio.h>

int main() {
    int i, sum = 0;

    // Loop from 1 to 100
    for (i = 1; i <= 100; i++) {
        // Check for divisibility by 3
        if (i % 3 == 0) {
            // Add the number to sum
            sum = sum + i;
        }
    }

    printf("The sum of all numbers divisible by 3 between 1 and 100 is: %d\n", sum);
    return 0;
}
