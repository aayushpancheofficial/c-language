 /* que(03)-Write a program to convert Celsius (Centigrade degrees temperature to Fahrenheit).*/
#include <stdio.h>   // Header file for input-output functions

int main() {
    float celsius, fahrenheit;   // Variables to store temperatures

    // Ask user for input
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);       // Take Celsius value from user

    // Apply conversion formula: F = (C × 9/5) + 32
    fahrenheit = (celsius * 9 / 5) + 32;

    // Display the result
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

    return 0;   // End of program
}
