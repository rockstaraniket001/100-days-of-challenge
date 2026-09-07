/*
 * Day 18 - Q35 (Loops without Arrays/Strings):
 * Write a program to print all factors of a given number.
 */
#include <stdio.h>

int main(void) {
    long long n;

    printf("Enter a positive integer: ");
    if (scanf("%lld", &n) == 1 && n > 0) {
        printf("Factors of %lld are: ", n);
        for (long long i = 1; i <= n; i++) {
            if (n % i == 0) {
                printf("%lld ", i);
            }
        }
        printf("\n");
    } else {
        printf("Invalid input. Please enter a positive integer.\n");
    }

    return 0;
}