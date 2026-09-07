/*
 * Day 19 - Q37 (Loops without Arrays/Strings):
 * Write a program to find the LCM of two numbers.
 */
#include <stdio.h>

int main(void) {
    long long a, b;

    printf("Enter two positive integers: ");
    if (scanf("%lld %lld", &a, &b) == 2 && a > 0 && b > 0) {
        long long n1 = a;
        long long n2 = b;

        // Euclidean Algorithm for GCD
        while (n2 != 0) {
            long long temp = n2;
            n2 = n1 % n2;
            n1 = temp;
        }

        long long gcd = n1;
        long long lcm = (a / gcd) * b;

        printf("LCM of %lld and %lld is %lld\n", a, b, lcm);
    } else {
        printf("Invalid input. Both numbers must be positive integers.\n");
    }

    return 0;
}