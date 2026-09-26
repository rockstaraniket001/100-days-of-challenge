/*
Day: 45
Question: Q89
Title: Frequency of a Given Character
Problem:
Count frequency of a given character in a string.
*/

#include <stdio.h>

int main(void)
{
    char str[200], ch;
    int i = 0, count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter character to count: ");
    scanf(" %c", &ch);

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == ch)
            count++;
        i++;
    }

    printf("Frequency of '%c' = %d\n", ch, count);

    return 0;
}
