/*
 * Day 14 - Q27 (Loops without Arrays/Strings):
 * Write a program to print the sum of the first n odd numbers.
 */
#include <stdio.h>

int main(void) {
    int n;

    printf("Enter n: ");
    if (scanf("%d", &n) == 1 && n >= 1) {
        long long sum = 0;
        int odd = 1;

        for (int i = 1; i <= n; i++) {
            sum += odd;
            odd += 2;
        }

        printf("Sum of the first %d odd numbers = %lld\n", n, sum);
    } else {
        printf("Invalid input. Please enter an integer n >= 1.\n");
    }

    return 0;
}