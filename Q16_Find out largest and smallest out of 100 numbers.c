#include <stdio.h>

int main() {
    int n, i, num, smallest, largest;

    // Ask how many numbers the user wants to enter
    printf("How many numbers to compare? ");
    scanf("%d", &n);

    // Handle case where user enters 0 or a negative number
    if (n <= 0) {
        printf("Please enter a positive number of elements.\n");
        return 1; // Exit with an error
    }

    // Read the first number to initialize smallest and largest
    printf("Enter number 1: ");
    scanf("%d", &num);
    smallest = num;
    largest = num;

    // Loop for the rest of the numbers (from 2 to n)
    for (i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        // If the current number is larger than 'largest', update 'largest'
        if (num > largest) {
            largest = num;
        }

        // If the current number is smaller than 'smallest', update 'smallest'
        if (num < smallest) {
            smallest = num;
        }
    }

    printf("The largest number is: %d\n", largest);
    printf("The smallest number is: %d\n", smallest);

    return 0;
}
