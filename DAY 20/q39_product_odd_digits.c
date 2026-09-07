/*
 * Day 20 - Q39 (Loops without Arrays/Strings):
 * Write a program to find the product of odd digits of a number.
 */
#include <stdio.h>

int main(void) {
    long long n;

    printf("Enter an integer: ");
    if (scanf("%lld", &n) == 1) {
        long long temp = (n < 0) ? -n : n;
        long long product = 1;
        int found_odd = 0;

        if (temp == 0) {
            found_odd = 0;
        } else {
            while (temp > 0) {
                int digit = temp % 10;
                if (digit % 2 != 0) {
                    product *= digit;
                    found_odd = 1;
                }
                temp /= 10;
            }
        }

        if (found_odd) {
            printf("Product of odd digits of %lld = %lld\n", n, product);
        } else {
            printf("No odd digits found in %lld.\n", n);
        }
    } else {
        printf("Invalid input.\n");
    }

    return 0;
}