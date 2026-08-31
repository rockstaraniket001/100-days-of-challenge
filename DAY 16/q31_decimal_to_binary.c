/*
 * Day 16 - Q31 (Loops without Arrays/Strings):
 * Write a program to take a number as input and print its equivalent binary representation.
 */
#include <stdio.h>

int main(void) {
    long long n;

    printf("Enter a non-negative integer: ");
    if (scanf("%lld", &n) == 1 && n >= 0) {
        if (n == 0) {
            printf("Binary representation: 0\n");
            return 0;
        }

        // Find the highest bit position without arrays or strings
        unsigned long long mask = 1ULL << 62;
        while ((mask & (unsigned long long)n) == 0) {
            mask >>= 1;
        }

        printf("Binary representation: ");
        while (mask > 0) {
            if ((unsigned long long)n & mask) {
                printf("1");
            } else {
                printf("0");
            }
            mask >>= 1;
        }
        printf("\n");
    } else {
        printf("Invalid input. Please enter a non-negative integer.\n");
    }

    return 0;
}