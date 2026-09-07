/*
 * Day 22 - Q43 (Loops without Arrays/Strings):
 * Write a program to check if a number is a strong number.
 * A strong number equals the sum of the factorials of its digits (e.g., 145 = 1! + 4! + 5!).
 */
#include <stdio.h>

int main(void) {
    long long n;

    printf("Enter a positive integer: ");
    if (scanf("%lld", &n) == 1 && n > 0) {
        long long temp = n;
        long long sum = 0;

        while (temp > 0) {
            int digit = temp % 10;
            long long fact = 1;
            for (int i = 1; i <= digit; i++) {
                fact *= i;
            }
            sum += fact;
            temp /= 10;
        }

        if (sum == n) {
            printf("%lld is a STRONG number.\n", n);
        } else {
            printf("%lld is NOT a strong number (sum of digit factorials = %lld).\n", n, sum);
        }
    } else {
        printf("Invalid input. Please enter a positive integer.\n");
    }

    return 0;
}