#include <stdio.h>

int main() {
    int num, i;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("The factors of %d are: ", num);

    // Loop from 1 to the number
    for (i = 1; i <= num; i++) {
        // Check if i is a factor of num
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
