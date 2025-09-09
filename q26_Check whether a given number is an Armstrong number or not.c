#include <stdio.h>

int main() {
    int num, original_num, digit, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    original_num = num; // Store the original number

    // Calculate the sum of the cubes of the digits
    while (num != 0) {
        digit = num % 10;
        sum = sum + (digit * digit * digit);
        num = num / 10;
    }

    // Check if the sum equals the original number
    if (sum == original_num) {
        printf("%d is an Armstrong number.\n", original_num);
    } else {
        printf("%d is not an Armstrong number.\n", original_num);
    }

    return 0;
}
