#include <stdio.h>

int main() {
    int num, digit;
    int reversed_num = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Loop until the original number becomes 0
    while (num != 0) {
        // Get the last digit
        digit = num % 10;
        // Build the reversed number
        reversed_num = reversed_num * 10 + digit;
        // Remove the last digit from the original number
        num = num / 10;
    }

    printf("The reversed number is: %d\n", reversed_num);
    return 0;
}
