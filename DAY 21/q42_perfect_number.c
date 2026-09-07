/*
 * Day 21 - Q42 (Loops without Arrays/Strings):
 * Write a program to check if a number is a perfect number.
 * A perfect number equals the sum of its proper positive divisors (excluding itself).
 */
#include <stdio.h>

int main(void) {
    long long n;

    printf("Enter a positive integer: ");
    if (scanf("%lld", &n) == 1 && n > 0) {
        long long sum = 0;

        for (long long i = 1; i <= n / 2; i++) {
            if (n % i == 0) {
                sum += i;
            }
        }

        if (sum == n) {
            printf("%lld is a PERFECT number.\n", n);
        } else {
            printf("%lld is NOT a perfect number (sum of proper divisors = %lld).\n", n, sum);
        }
    } else {
        printf("Invalid input. Please enter a positive integer.\n");
    }

    return 0;
}