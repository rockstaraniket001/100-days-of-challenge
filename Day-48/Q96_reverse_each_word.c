/*
Day: 48
Question: Q96
Title: Reverse Each Word in a Sentence
Problem:
Reverse each word in a sentence without changing the word order.
*/

#include <stdio.h>

int main(void)
{
    char str[300];
    int start, end, i, j;
    char temp;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    i = 0;
    while (str[i] != '\0') {
        /* Skip spaces */
        while (str[i] == ' ')
            i++;
        if (str[i] == '\0' || str[i] == '\n')
            break;

        start = i;
        while (str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
            i++;
        end = i - 1;

        /* Reverse the word */
        for (j = 0; j < (end - start + 1) / 2; j++) {
            temp = str[start + j];
            str[start + j] = str[end - j];
            str[end - j] = temp;
        }
    }

    /* Remove trailing newline if present */
    i = 0;
    while (str[i] != '\0' && str[i] != '\n') i++;
    str[i] = '\0';

    printf("Sentence with reversed words: %s\n", str);

    return 0;
}
