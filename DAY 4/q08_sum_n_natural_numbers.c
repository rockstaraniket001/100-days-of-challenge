/*
 * Day 4 - Q8: Write a program to find and display the sum of the first n natural numbers.
 */
#include <stdio.h>

int main(void) {
    int n;

    printf("Enter a positive integer n: ");
    if (scanf("%d", &n) == 1 && n > 0) {
        long long sum = (long long)n * (n + 1) / 2;
        printf("Sum of first %d natural numbers = %lld\n", n, sum);
    } else {
        printf("Invalid input. Please enter a positive integer.\n");
    }

    return 0;
}