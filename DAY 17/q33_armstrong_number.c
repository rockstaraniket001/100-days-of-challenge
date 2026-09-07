/*
 * Day 17 - Q33 (Loops without Arrays/Strings):
 * Write a program to check if a number is an Armstrong number.
 * An Armstrong number of k digits satisfies: n = sum of (digit^k)
 */
#include <stdio.h>

int main(void) {
    long long n;

    printf("Enter a non-negative integer: ");
    if (scanf("%lld", &n) == 1 && n >= 0) {
        long long temp = n;
        int count = 0;

        // Count number of digits
        if (temp == 0) {
            count = 1;
        } else {
            while (temp > 0) {
                count++;
                temp /= 10;
            }
        }

        // Calculate sum of digits raised to power 'count'
        temp = n;
        long long sum = 0;

        if (temp == 0) {
            sum = 0;
        } else {
            while (temp > 0) {
                int digit = temp % 10;
                long long p = 1;
                for (int i = 0; i < count; i++) {
                    p *= digit;
                }
                sum += p;
                temp /= 10;
            }
        }

        if (sum == n) {
            printf("%lld is an ARMSTRONG number.\n", n);
        } else {
            printf("%lld is NOT an Armstrong number.\n", n);
        }
    } else {
        printf("Invalid input. Please enter a non-negative integer.\n");
    }

    return 0;
}