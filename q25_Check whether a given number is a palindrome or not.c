#include <stdio.h>

int main() {
    int num, original_num, reversed_num = 0, digit;

    printf("Enter an integer: ");
    scanf("%d", &num);

    original_num = num; 


    while (num != 0) {
        digit = num % 10;
        reversed_num = reversed_num * 10 + digit;
        num = num / 10;
    }

    if (original_num == reversed_num) {
        printf("%d is a palindrome.\n", original_num);
    } else {
        printf("%d is not a palindrome.\n", original_num);
    }

    return 0;
}
