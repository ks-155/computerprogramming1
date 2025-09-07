#include <stdio.h>

int main() {
    // The outer loop iterates from 1 to 2
    for (int i = 1; i <= 2; i++) {
        // The inner loop iterates from 1 to 3
        for (int j = 1; j <= 3; j++) {
            // Print the current values of i and j, followed by a newline
            printf("%d %d\n", i, j);
        }
    }
    return 0;
}