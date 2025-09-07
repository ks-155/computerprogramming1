#include <stdio.h>

int main() {
    int n, sum = 0;

    // Ask the user for the value of 'n'
    printf("Enter the number of even numbers to sum: ");
    scanf("%d", &n);

    // Loop 'n' times to find and add the first 'n' even numbers
    // The i-th even number can be represented as 2*i
    for (int i = 1; i <= n; i++) {
        sum += (2 * i);
    }

    // Print the final result
    printf("The sum of the first %d even numbers is: %d\n", n, sum);

    return 0;
}