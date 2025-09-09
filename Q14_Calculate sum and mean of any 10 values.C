#include <stdio.h>

int main() {
    int i, num;
    float sum = 0, mean;

    printf("Enter 10 numbers:\n");

    // Loop 10 times to get input
    for (i = 1; i <= 10; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        // Add the entered number to sum
        sum = sum + num;
    }

    // Calculate the mean
    mean = sum / 10.0;

    printf("The sum of the 10 numbers is: %.2f\n", sum);
    printf("The mean of the 10 numbers is: %.2f\n", mean);

    return 0;
}
