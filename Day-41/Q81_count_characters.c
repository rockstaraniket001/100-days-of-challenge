/*
Day: 41
Question: Q81
Title: Count Characters Without Built-in Length
Problem:
Count characters in a string without using built-in length functions.
*/

#include <stdio.h>

int main(void)
{
    char str[200];
    int count = 0;
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        count++;
        i++;
    }

    printf("Number of characters = %d\n", count);

    return 0;
}
