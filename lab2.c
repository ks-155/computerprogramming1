#include <stdio.h>

int main() {
    // Declare variables
    int num, originalNum, reversedNum = 0, digit;

    // 1. Get input from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Store the original number for the final comparison
    originalNum = num;

    // 2. Separate and print the digits
    printf("Separated digits: ");

    // Loop as long as the number is not 0
    while (num != 0) {
        // Get the last digit
        digit = num % 10;
        
        // Print the extracted digit
        printf("%d ", digit);
        
        // Build the reversed number
        reversedNum = reversedNum * 10 + digit;
        
        // Remove the last digit from the number
        num = num / 10;
    }

    // Add a newline for better formatting
    printf("\n");

    // 3. Check if it's a palindrome
    if (originalNum == reversedNum) {
        printf("✅ The number %d is a palindrome.\n", originalNum);
    } else {
        printf("❌ The number %d is NOT a palindrome.\n", originalNum);
    }

    return 0;
}
