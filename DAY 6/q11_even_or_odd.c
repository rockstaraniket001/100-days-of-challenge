/*
 * Day 6 - Q11: Write a program to input an integer and check whether it is even
 * or odd using if-else.
 */
#include <stdio.h>

int main(void) {
    int num;

    printf("Enter an integer: ");
    if (scanf("%d", &num) == 1) {
        if (num % 2 == 0) {
            printf("%d is EVEN.\n", num);
        } else {
            printf("%d is ODD.\n", num);
        }
    } else {
        printf("Invalid input.\n");
    }

    return 0;
}