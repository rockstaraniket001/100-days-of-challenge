/*
 * Day 7 - Q13: Write a program to input a year and check whether it is a leap year
 * or not using conditional statements.
 * Year is a leap year if divisible by 4 but not 100, except if divisible by 400.
 */
#include <stdio.h>

int main(void) {
    int year;

    printf("Enter year: ");
    if (scanf("%d", &year) == 1 && year > 0) {
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
            printf("%d is a LEAP year.\n", year);
        } else {
            printf("%d is NOT a leap year.\n", year);
        }
    } else {
        printf("Invalid input. Year must be a positive integer.\n");
    }

    return 0;
}