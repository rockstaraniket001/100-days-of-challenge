/*
 * Day 16 - Q32 (Loops without Arrays/Strings):
 * Write a program to check if a number is a palindrome.
 */
#include <stdio.h>

int main(void) {
    long long n;

    printf("Enter an integer: ");
    if (scanf("%lld", &n) == 1) {
        if (n < 0) {
            printf("%lld is NOT a palindrome (negative numbers cannot be palindromes).\n", n);
            return 0;
        }

        long long temp = n;
        long long rev = 0;

        while (temp > 0) {
            rev = (rev * 10) + (temp % 10);
            temp /= 10;
        }

        if (rev == n) {
            printf("%lld is a PALINDROME.\n", n);
        } else {
            printf("%lld is NOT a palindrome.\n", n);
        }
    } else {
        printf("Invalid input.\n");
    }

    return 0;
}