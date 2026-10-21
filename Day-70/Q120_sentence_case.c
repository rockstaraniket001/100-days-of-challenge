/*
Day: 70
Question: Q120
Title: Convert String to Sentence Case
Problem:
Take a string input and change it to sentence case.
*/

#include <stdio.h>

int main(void)
{
    char str[300];
    int i = 0;
    int capitalize = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == ' ' || str[i] == '.' || str[i] == '!' || str[i] == '?') {
            capitalize = 1;
        } else if (capitalize && ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))) {
            if (str[i] >= 'a' && str[i] <= 'z')
                str[i] = str[i] - 32;
            capitalize = 0;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
        i++;
    }

    printf("Sentence case: %s\n", str);

    return 0;
}
