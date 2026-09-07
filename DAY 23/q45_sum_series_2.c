/*
 * Day 23 - Q45 (Loops without Arrays/Strings):
 * Write a program to find the sum of the series:
 * 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
 * (i-th term is (2*i) / (4*i - 1))
 */
#include <stdio.h>

int main(void) {
    int n;

    printf("Enter number of terms (n): ");
    if (scanf("%d", &n) == 1 && n >= 1) {
        double sum = 0.0;

        for (int i = 1; i <= n; i++) {
            double term = (double)(2 * i) / (4 * i - 1);
            sum += term;
        }

        printf("Sum of the series up to %d terms = %.6lf\n", n, sum);
    } else {
        printf("Invalid input. n must be an integer >= 1.\n");
    }

    return 0;
}