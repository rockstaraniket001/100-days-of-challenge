/*
Day: 41
Question: Q82
Title: Print Each Character on New Line
Problem:
Print each character of a string on a new line.
*/

#include <stdio.h>

int main(void)
{
    char str[200];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        printf("%c\n", str[i]);
        i++;
    }

    return 0;
}
