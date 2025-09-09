#include <stdio.h>

int main() {
    int n, i, num;
    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;

    // Ask how many numbers the user wants to enter
    printf("How many numbers do you want to enter? ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);

    // Loop n times
    for (i = 1; i <= n; i++) {
        scanf("%d", &num);

        // Check the number and increment the respective counter
        if (num > 0) {
            positive_count++;
        } else if (num < 0) {
            negative_count++;
        } else {
            zero_count++;
        }
    }

    printf("Count of positive numbers: %d\n", positive_count);
    printf("Count of negative numbers: %d\n", negative_count);
    printf("Count of zero numbers: %d\n", zero_count);

    return 0;
}
