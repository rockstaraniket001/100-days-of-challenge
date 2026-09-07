/*
 * Day 17 - Q34 (Loops without Arrays/Strings):
 * Write a program to check if a number is prime.
 */
#include <stdio.h>

int main(void) {
    long long n;

    printf("Enter an integer: ");
    if (scanf("%lld", &n) == 1) {
        if (n <= 1) {
            printf("%lld is NOT a prime number.\n", n);
            return 0;
        }
        if (n == 2 || n == 3) {
            printf("%lld is a PRIME number.\n", n);
            return 0;
        }
        if (n % 2 == 0 || n % 3 == 0) {
            printf("%lld is NOT a prime number.\n", n);
            return 0;
        }

        int is_prime = 1;
        for (long long i = 5; i * i <= n; i += 6) {
            if (n % i == 0 || n % (i + 2) == 0) {
                is_prime = 0;
                break;
            }
        }

        if (is_prime) {
            printf("%lld is a PRIME number.\n", n);
        } else {
            printf("%lld is NOT a prime number.\n", n);
        }
    } else {
        printf("Invalid input.\n");
    }

    return 0;
}