/*
 * Day 1 - Q1: Write a program to input two numbers and display their sum.
 */
#include <stdio.h>

int main(void) {
    double num1, num2, sum;

    printf("Enter two numbers: ");
    if (scanf("%lf %lf", &num1, &num2) == 2) {
        sum = num1 + num2;
        printf("Sum = %.2lf\n", sum);
    } else {
        printf("Invalid input. Please enter numeric values.\n");
    }

    return 0;
}