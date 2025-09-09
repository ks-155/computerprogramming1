#include <stdio.h>

int main() {
    int num, square, temp_num;
    int is_automorphic = 1; // Assume it is automorphic

    printf("Enter a number to check: ");
    scanf("%d", &num);

    temp_num = num; // Keep a copy of the number
    square = num * num;

    // Loop until the original number becomes 0
    while (temp_num > 0) {
        // Check if the last digits are different
        if (temp_num % 10 != square % 10) {
            is_automorphic = 0; // If they are, it's not automorphic
            break;
        }
        // Remove the last digit from both
        temp_num = temp_num / 10;
        square = square / 10;
    }

    if (is_automorphic == 1) {
        printf("%d is an automorphic number.\n", num);
    } else {
        printf("%d is not an automorphic number.\n", num);
    }

    return 0;
}
