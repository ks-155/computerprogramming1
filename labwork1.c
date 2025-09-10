#include <stdio.h>
#include <stdlib.h> // For abs() function

int main() {
    int number;
    int divisor = 1;
    int temp_num;
    int digit;

    // 1. Get user input
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Handle the edge case of 0
    if (number == 0) {
        printf("0\n");
        return 0;
    }

    // Use a temporary variable to find the divisor
    // abs() handles negative numbers correctly
    temp_num = abs(number);

    // 2. Find the correct starting divisor
    while (temp_num / divisor >= 10) {
        divisor = divisor * 10;
    }
    
    // If the number is negative, print the minus sign first
    if (number < 0) {
        printf("- ");
    }

    // 3. Loop through, print digits, and update the number
    while (divisor > 0) {
        // Get the leftmost digit
        digit = temp_num / divisor;
        printf("%d ", digit);

        // Remove the leftmost digit from the number
        temp_num = temp_num % divisor;

        // Decrease the divisor by a factor of 10
        divisor = divisor / 10;
    }

    printf("\n"); // Print a newline at the end

    return 0;
}
