#include <stdio.h>

int main() {
    float temperature;

    // Prompt the user to enter the temperature
    printf("Enter the temperature (in degrees Celsius): ");
    scanf("%f", &temperature);

    // Provide advice based on the temperature
    if (temperature > 30) {
        printf("It's hot outside, stay hydrated!\n");
    } else if (temperature >= 20 && temperature <= 30) {
        printf("The weather is nice and warm.\n");
    } else if (temperature >= 10 && temperature < 20) {
        printf("It's a bit chilly, wear a jacket.\n");
    } else {
        printf("It's cold outside, stay warm!\n");
    }

    return 0;
}

