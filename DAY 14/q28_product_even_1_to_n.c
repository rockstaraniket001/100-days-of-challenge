/*
 * Day 14 - Q28 (Loops without Arrays/Strings):
 * Write a program to print the product of even numbers from 1 to n.
 */
#include <stdio.h>

int main(void) {
    int n;

    printf("Enter n: ");
    if (scanf("%d", &n) == 1 && n >= 1) {
        if (n < 2) {
            printf("No even numbers in the range 1 to %d.\n", n);
        } else {
            unsigned long long product = 1;
            for (int i = 2; i <= n; i += 2) {
                product *= i;
            }
            printf("Product of even numbers from 1 to %d = %llu\n", n, product);
        }
    } else {
        printf("Invalid input. Please enter an integer n >= 1.\n");
    }

    return 0;
}