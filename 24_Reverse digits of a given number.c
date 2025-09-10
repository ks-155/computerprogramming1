#include <stdio.h>

int main() {
    int num, digit;
    int reversed_num = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);


    while (num != 0) {

        digit = num % 10;

        reversed_num = reversed_num * 10 + digit;
      
        num = num / 10;
    }

    printf("The reversed number is: %d\n", reversed_num);
    return 0;
}
