/*
Day: 45
Question: Q90
Title: Toggle Case of Each Character
Problem:
Toggle case of each character in a string.
*/

#include <stdio.h>

int main(void)
{
    char str[200];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
        i++;
    }

    printf("Toggled string: %s\n", str);

    return 0;
}
