/*
Day: 46
Question: Q91
Title: Remove All Vowels from a String
Problem:
Remove all vowels from a string.
*/

#include <stdio.h>

int main(void)
{
    char str[200], result[200];
    int i = 0, j = 0;
    char ch;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        ch = str[i];
        if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
              ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) {
            result[j++] = ch;
        }
        i++;
    }
    result[j] = '\0';

    printf("String without vowels: %s\n", result);

    return 0;
}
