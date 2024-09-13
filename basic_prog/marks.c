#include <stdio.h>

int main() {
    float percentage;

    // Prompt the user to enter the percentage
    printf("Enter the percentage (0-100): ");
    scanf("%f", &percentage);

    // Check if the percentage is within the valid range
    if (percentage < 0 || percentage > 100) {
        printf("Invalid percentage. Please enter a value between 0 and 100.\n");
    } else {
        // Determine the grade based on the percentage
        if (percentage >= 90) {
            printf("Grade: A\n");
        } else if (percentage >= 80) {
            printf("Grade: B\n");
        } else if (percentage >= 70) {
            printf("Grade: C\n");
        } else if (percentage >= 60) {
            printf("Grade: D\n");
        } else {
            printf("Fail\n");
        }
    }

    return 0;
}
