/*
 * Day 8 - Q15: Write a program to input a character and check whether it is an
 * uppercase alphabet, lowercase alphabet, digit, or special character.
 */
#include <stdio.h>

int main(void) {
    char ch;

    printf("Enter any character: ");
    if (scanf(" %c", &ch) == 1) {
        if (ch >= 'A' && ch <= 'Z') {
            printf("'%c' is an UPPERCASE alphabet.\n", ch);
        } else if (ch >= 'a' && ch <= 'z') {
            printf("'%c' is a LOWERCASE alphabet.\n", ch);
        } else if (ch >= '0' && ch <= '9') {
            printf("'%c' is a DIGIT.\n", ch);
        } else {
            printf("'%c' is a SPECIAL CHARACTER.\n", ch);
        }
    } else {
        printf("Invalid input.\n");
    }

    return 0;
}