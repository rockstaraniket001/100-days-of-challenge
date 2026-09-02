/*
 * Day 18 - Q36 (Loops without Arrays/Strings):
 * Write a program to find the HCF (GCD) of two numbers.
 */
#include <stdio.h>

int main(void) {
    long long a, b;

    printf("Enter two integers: ");
    if (scanf("%lld %lld", &a, &b) == 2) {
        long long n1 = (a < 0) ? -a : a;
        long long n2 = (b < 0) ? -b : b;

        while (n2 != 0) {
            long long temp = n2;
            n2 = n1 % n2;
            n1 = temp;
        }

        printf("HCF (GCD) of %lld and %lld is %lld\n", a, b, n1);
    } else {
        printf("Invalid input.\n");
    }

    return 0;
}