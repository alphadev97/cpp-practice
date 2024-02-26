#include <stdio.h>
#include <math.h>

#define M_PI 3.14159265358979323846

int main() {
    double value;
    double result;

    // Prompt the user to enter a value
    printf("Enter a value between 0 and 1 (inclusive): ");
    scanf("%lf", &value);

    // Check if the entered value is within the range (0, 1)
    if (value >= 0 && value <= 1) {
        // Calculate the sine of the value using the sin() function from math.h
        result = sin(value * M_PI / 180); // Convert degrees to radians
        printf("The sine of %.2lf is: %.4lf\n", value, result);
    } else {
        printf("Error: Entered value is not within the range (0, 1).\n");
    }

    return 0;
}
