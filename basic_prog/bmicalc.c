#include <stdio.h>

int main() {
    float weight, height, bmi;

    // Prompt the user to enter their weight and height
    printf("Enter weight (in kilograms): ");
    scanf("%f", &weight);
    
    printf("Enter height (in meters): ");
    scanf("%f", &height);

    // Calculate BMI
    bmi = weight / (height * height);

    // Display the BMI
    printf("Your BMI is: %.2f\n", bmi);

    // Classify the BMI
    if (bmi < 18.5) {
        printf("Classification: Underweight\n");
    } else if (bmi >= 18.5 && bmi < 25.0) {
        printf("Classification: Normal weight\n");
    } else if (bmi >= 25.0 && bmi < 30.0) {
        printf("Classification: Overweight\n");
    } else {
        printf("Classification: Obesity\n");
    }

    return 0;
}

