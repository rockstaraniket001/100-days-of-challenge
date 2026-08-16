/*
 * Day 1 - Q2: Write a program to input two numbers and display their sum, difference,
 * product, and quotient. Division by zero should be handled carefully.
 */
#include <stdio.h>

int main(void) {
    double num1, num2;

    printf("Enter first number: ");
    if (scanf("%lf", &num1) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter second number: ");
    if (scanf("%lf", &num2) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("\n--- Results ---\n");
    printf("Sum        = %.2lf\n", num1 + num2);
    printf("Difference = %.2lf\n", num1 - num2);
    printf("Product    = %.2lf\n", num1 * num2);

    if (num2 != 0.0) {
        printf("Quotient   = %.4lf\n", num1 / num2);
    } else {
        printf("Quotient   = Undefined (Division by zero is not allowed)\n");
    }

    return 0;
}