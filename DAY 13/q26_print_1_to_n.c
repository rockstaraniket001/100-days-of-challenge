/*
 * Day 13 - Q26 (Loops without Arrays/Strings):
 * Write a program to print numbers from 1 to n.
 */
#include <stdio.h>

int main(void) {
    int n;

    printf("Enter n: ");
    if (scanf("%d", &n) == 1 && n >= 1) {
        printf("Numbers from 1 to %d:\n", n);
        for (int i = 1; i <= n; i++) {
            printf("%d ", i);
        }
        printf("\n");
    } else {
        printf("Invalid input. Please enter an integer n >= 1.\n");
    }

    return 0;
}