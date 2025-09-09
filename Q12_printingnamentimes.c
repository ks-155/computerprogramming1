#include <stdio.h>

int main() {
    int n, i;

    // Ask the user how many times to print the name
    printf("How many times do you want to print your name? ");
    scanf("%d", &n);

    // Loop n times
    for (i = 1; i <= n; i++) {
        printf("KRISH\n"); // Replace "KRISH" with your name
    }

    return 0;
}
