/*
Day: 44
Question: Q87
Title: Count Spaces, Digits and Special Characters
Problem:
Count spaces, digits, and special characters in a string.
*/

#include <stdio.h>

int main(void)
{
    char str[200];
    int i = 0, spaces = 0, digits = 0, special = 0;
    char ch;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        ch = str[i];
        if (ch == ' ')
            spaces++;
        else if (ch >= '0' && ch <= '9')
            digits++;
        else if (!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')))
            special++;
        i++;
    }

    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", special);

    return 0;
}
