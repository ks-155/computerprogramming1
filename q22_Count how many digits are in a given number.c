#include <stdio.h>

int main() {
    int num;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Special case for 0, which has one digit
    if (num == 0) {
        count = 1;
    } else {
        // Loop until the number becomes 0
        while (num != 0) {
            // Remove the last digit
            num = num / 10;
            // Increment the digit counter
            count++;
        }
    }

    printf("The number of digits is: %d\n", count);
    return 0;
}
