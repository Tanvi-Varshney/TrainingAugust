#include <stdio.h>

int main() {
    int number, sum = 0;

    // Prompt the user for a positive integer
    printf("Please enter a positive integer: ");
    scanf("%d", &number);

    // Ensure the number is positive
    if (number <= 0) {
        printf("The number must be positive.\n");
        return 1;
    }

    // Compute the sum of the digits
    int temp = number; // Temporary variable to extract digits
    for (; temp > 0; temp /= 10) {
        sum += temp % 10; // Add the last digit to sum
    }

    // Display the result
    printf("The sum of the digits is: %d\n", sum);

    return 0;
}

