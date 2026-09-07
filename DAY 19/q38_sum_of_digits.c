/*
 * Day 19 - Q38 (Loops without Arrays/Strings):
 * Write a program to find the sum of digits of a number.
 */
#include <stdio.h>

int main(void) {
    long long n;

    printf("Enter an integer: ");
    if (scanf("%lld", &n) == 1) {
        long long temp = (n < 0) ? -n : n;
        long long sum = 0;

        while (temp > 0) {
            sum += (temp % 10);
            temp /= 10;
        }

        printf("Sum of digits of %lld = %lld\n", n, sum);
    } else {
        printf("Invalid input.\n");
    }

    return 0;
}