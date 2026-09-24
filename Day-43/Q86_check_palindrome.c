/*
Day: 43
Question: Q86
Title: Check if String is Palindrome
Problem:
Check if a string is a palindrome.
*/

#include <stdio.h>

int main(void)
{
    char str[200];
    int len = 0, i, is_pal = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[len] != '\0' && str[len] != '\n')
        len++;

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            is_pal = 0;
            break;
        }
    }

    if (is_pal)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0;
}
