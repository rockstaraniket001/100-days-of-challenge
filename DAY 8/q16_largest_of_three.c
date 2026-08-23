/*
 * Day 8 - Q16: Write a program to input three numbers and find the largest among
 * them using if-else.
 */
#include <stdio.h>

int main(void) {
    double a, b, c;

    printf("Enter three numbers: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) == 3) {
        if (a >= b && a >= c) {
            printf("The largest number is: %.2lf\n", a);
        } else if (b >= a && b >= c) {
            printf("The largest number is: %.2lf\n", b);
        } else {
            printf("The largest number is: %.2lf\n", c);
        }
    } else {
        printf("Invalid input.\n");
    }

    return 0;
}