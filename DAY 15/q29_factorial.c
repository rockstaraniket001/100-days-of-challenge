/*
 * Day 15 - Q29 (Loops without Arrays/Strings):
 * Write a program to calculate the factorial of a number.
 */
#include <stdio.h>

int main(void) {
    int n;

    printf("Enter a non-negative integer: ");
    if (scanf("%d", &n) == 1 && n >= 0) {
        unsigned long long fact = 1;
        for (int i = 1; i <= n; i++) {
            fact *= i;
        }
        printf("Factorial of %d (%d!) = %llu\n", n, n, fact);
    } else {
        printf("Invalid input. Factorial is defined for non-negative integers.\n");
    }

    return 0;
}