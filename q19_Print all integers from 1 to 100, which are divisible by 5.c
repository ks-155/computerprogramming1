#include <stdio.h>

int main() {
    int i;
    printf("Numbers between 1 and 100 that are divisible by 5 are:\n");

    // Loop from 1 to 100
    for (i = 1; i <= 100; i++) {
        // Check for divisibility by 5
        if (i % 5 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
