/* question(1). Write a C program to calculate area of a rectangle: 
                a. Using hard coded inputs.
                b.Using inputs supplied by the user. */

#include <stdio.h>   // Header file for input-output functions (printf, scanf)

int main() {
    // Declare two integer variables for length and breadth
    int length, breadth;

    // Ask the user to enter the length of the rectangle
    printf("What is length: ");
    scanf("%d", &length);   // Take input from user and store it in 'length'

    // Ask the user to enter the breadth of the rectangle
    printf("What is breadth: ");
    scanf("%d", &breadth);  // Take input from user and store it in 'breadth'

    // Calculate the area using formula: area = length * breadth
    int area = length * breadth;

    // Display the result on screen
    printf("Area is: %d\n", area);

    // End of program
    return 0;
}
