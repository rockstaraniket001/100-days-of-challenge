/*
 * Day 6 - Q12: Write a program to input an integer and check whether it is positive,
 * negative or zero using nested if-else.
 */
#include <stdio.h>

int main(void) {
    int num;

    printf("Enter an integer: ");
    if (scanf("%d", &num) == 1) {
        if (num >= 0) {
            if (num == 0) {
                printf("%d is ZERO.\n", num);
            } else {
                printf("%d is POSITIVE.\n", num);
            }
        } else {
            printf("%d is NEGATIVE.\n", num);
        }
    } else {
        printf("Invalid input.\n");
    }

    return 0;
}