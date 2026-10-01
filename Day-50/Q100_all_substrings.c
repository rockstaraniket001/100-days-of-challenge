/*
Day: 50
Question: Q100
Title: Print All Sub-strings of a String
Problem:
Print all sub-strings of a string.
*/

#include <stdio.h>

int main(void)
{
    char str[100];
    int len = 0, i, j, k;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[len] != '\0' && str[len] != '\n')
        len++;

    printf("All substrings:\n");
    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            for (k = i; k <= j; k++)
                printf("%c", str[k]);
            printf("\n");
        }
    }

    return 0;
}
