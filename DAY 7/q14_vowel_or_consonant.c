/*
 * Day 7 - Q14: Write a program to input a character and check whether it is a
 * vowel or consonant using if-else.
 */
#include <stdio.h>
#include <ctype.h>

int main(void) {
    char ch;

    printf("Enter an alphabet character: ");
    if (scanf(" %c", &ch) == 1) {
        if (isalpha(ch)) {
            char lower = tolower(ch);
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                printf("'%c' is a VOWEL.\n", ch);
            } else {
                printf("'%c' is a CONSONANT.\n", ch);
            }
        } else {
            printf("'%c' is not an alphabet letter.\n", ch);
        }
    } else {
        printf("Invalid input.\n");
    }

    return 0;
}