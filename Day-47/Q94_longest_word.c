/*
Day: 47
Question: Q94
Title: Longest Word in a Sentence
Problem:
Find the longest word in a sentence.
*/

#include <stdio.h>

int main(void)
{
    char str[300];
    char longest[100] = "";
    char word[100];
    int i = 0, j = 0, max_len = 0, len;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (1) {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\0') {
            word[j++] = str[i];
        } else {
            if (j > 0) {
                word[j] = '\0';
                len = j;
                if (len > max_len) {
                    max_len = len;
                    int k;
                    for (k = 0; k <= len; k++)
                        longest[k] = word[k];
                }
                j = 0;
            }
            if (str[i] == '\n' || str[i] == '\0')
                break;
        }
        i++;
    }

    printf("Longest word: %s\n", longest);

    return 0;
}
