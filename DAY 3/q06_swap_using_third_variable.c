/*
 * Day 3 - Q6: Write a program to swap two numbers using a third variable.
 */
#include <stdio.h>

int main(void) {
    int a, b, temp;

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

    temp = a;
    a = b;
    b = temp;

    printf("After Swapping:  a = %d, b = %d\n", a, b);

    return 0;
}