/*
 * Day 15 - Q30 (Loops without Arrays/Strings):
 * Write a program to reverse a given number.
 */
#include <stdio.h>

int main(void) {
    long long n;

    printf("Enter an integer: ");
    if (scanf("%lld", &n) == 1) {
        long long temp = n;
        long long rev = 0;
        int is_negative = 0;

        if (temp < 0) {
            is_negative = 1;
            temp = -temp;
        }

        while (temp > 0) {
            rev = (rev * 10) + (temp % 10);
            temp /= 10;
        }

        if (is_negative) {
            rev = -rev;
        }

        printf("Reversed number: %lld\n", rev);
    } else {
        printf("Invalid input.\n");
    }

    return 0;
}