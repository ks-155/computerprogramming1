#include <stdio.h>

int main() {
    int num, digit, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Loop until the number becomes 0
    while (num != 0) {
        // Get the last digit
        digit = num % 10;
        // Add the digit to sum
        sum = sum + digit;
        // Remove the last digit
        num = num / 10;
    }

    printf("The sum of the digits is: %d\n", sum);
    return 0;
}
