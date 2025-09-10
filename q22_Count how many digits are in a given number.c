#include <stdio.h>

int main() {
    int num;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

 
    if (num == 0) {
        count = 1;
    } else {
    
        while (num != 0) {
           
            num = num / 10;
           
            count++;
        }
    }

    printf("The number of digits is: %d\n", count);
    return 0;
}
