/* que (02) Calculate the area of a circle and modify the same program to
calculate the volume of a cylinder given its radius and height.*/
#include <stdio.h>

int main() {
    float r, h;         // radius and height
    float pi = 3.14;    // constant value of pi

    // Taking inputs
    printf("What is radius: ");
    scanf("%f", &r);

    printf("What is height: ");
    scanf("%f", &h);

    // Calculating area of circle
    float area = pi * r * r;

    // Calculating volume of cylinder
    float volume = pi * r * r * h;

    // Display results
    printf("Area of circle = %.2f\n", area);
    printf("Volume of cylinder = %.2f\n", volume);

    return 0;
}
