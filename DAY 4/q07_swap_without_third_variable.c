/*
 * Day 4 - Q7: Write a program to swap two numbers without using a third variable.
 */
#include <stdio.h>

int main(void) {
    int a, b;

    printf("Enter first integer (a): ");
    if (scanf("%d", &a) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter second integer (b): ");
    if (scanf("%d", &b) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("\nBefore Swapping: a = %d, b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After Swapping:  a = %d, b = %d\n", a, b);

    return 0;
}