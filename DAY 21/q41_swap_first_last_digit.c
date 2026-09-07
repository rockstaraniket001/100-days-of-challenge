/*
 * Day 21 - Q41 (Loops without Arrays/Strings):
 * Write a program to swap the first and last digit of a number.
 */
#include <stdio.h>

int main(void) {
    long long n;

    printf("Enter an integer: ");
    if (scanf("%lld", &n) == 1) {
        int is_negative = 0;
        if (n < 0) {
            is_negative = 1;
            n = -n;
        }

        if (n < 10) {
            printf("Number after swapping first and last digit: %s%lld\n",
                   is_negative ? "-" : "", n);
            return 0;
        }

        long long temp = n;
        int last_digit = temp % 10;
        long long multiplier = 1;

        while (temp >= 10) {
            multiplier *= 10;
            temp /= 10;
        }

        int first_digit = temp;
        long long middle = (n % multiplier) / 10;
        long long swapped = (last_digit * multiplier) + (middle * 10) + first_digit;

        printf("Number after swapping first and last digit: %s%lld\n",
               is_negative ? "-" : "", swapped);
    } else {
        printf("Invalid input.\n");
    }

    return 0;
}