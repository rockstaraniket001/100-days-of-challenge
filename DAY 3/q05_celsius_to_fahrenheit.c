/*
 * Day 3 - Q5: Write a program to convert temperature from Celsius to Fahrenheit.
 * Formula: F = (C * 9 / 5) + 32
 */
#include <stdio.h>

int main(void) {
    double celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    if (scanf("%lf", &celsius) == 1) {
        fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
        printf("Temperature in Fahrenheit = %.2lf F\n", fahrenheit);
    } else {
        printf("Invalid input.\n");
    }

    return 0;
}