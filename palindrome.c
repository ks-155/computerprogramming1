#include <stdio.h>

int main() {

    int num, originalNum, reversedNum = 0, digit;


    printf("Enter an integer: ");
    scanf("%d", &num);


    originalNum = num;


    printf("Separated digits: ");


    while (num != 0) {

        digit = num % 10;
        printf("%d ", digit);
       reversedNum = reversedNum * 10 + digit;

       num = num / 10;
    }

    printf("\n");

    if (originalNum == reversedNum) {
        printf("The number %d is a palindrome.\n", originalNum);
    } else {
        printf("The number %d is NOT a palindrome.\n", originalNum);
    }

    return 0;
}
