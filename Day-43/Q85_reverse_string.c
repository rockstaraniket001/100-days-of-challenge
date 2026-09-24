/*
Day: 43
Question: Q85
Title: Reverse a String
Problem:
Reverse a string.
*/

#include <stdio.h>

int main(void)
{
    char str[200];
    int len = 0, i;
    char temp;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[len] != '\0' && str[len] != '\n')
        len++;

    for (i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }

    str[len] = '\0';
    printf("Reversed string: %s\n", str);

    return 0;
}
