#include <stdio.h>

int main() {
    // Declare variables for dollars and rupees
    float dollars, rupees;

    // Define the conversion rate
    const int CONVERSION_RATE = 48;

    // Prompt the user for input
    printf("Enter the amount in dollars ($): ");
    
    // Read the user input
    scanf("%f", &dollars);

    // Perform the conversion
    rupees = dollars * CONVERSION_RATE;

    // Display the result
    printf("$%.2f is equal to %.2f Rupees.\n", dollars, rupees);

    return 0;
}
