#include <stdio.h>

int main() {
    int num, digit;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("The separated digits are: ");
    
    // Handle the case of input 0
    if (num == 0) {
        printf("0");
    }

    // Loop until the number becomes 0
    while (num != 0) {
        // Get the last digit
        digit = num % 10;
        printf("%d ", digit);
        // Remove the last digit
        num = num / 10;
    }
    printf("\n");
    return 0;
}
