/*
Day: 46
Question: Q92
Title: First Repeating Lowercase Alphabet
Problem:
Find the first repeating lowercase alphabet in a string.
*/

#include <stdio.h>

int main(void)
{
    char str[200];
    int freq[26] = {0};
    int i = 0;
    char result = '\0';

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
            if (freq[str[i] - 'a'] == 2) {
                result = str[i];
                break;
            }
        }
        i++;
    }

    if (result != '\0')
        printf("First repeating lowercase alphabet: %c\n", result);
    else
        printf("No repeating lowercase alphabet found\n");

    return 0;
}
