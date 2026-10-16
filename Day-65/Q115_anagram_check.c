/*
Day: 65
Question: Q115
Title: Anagram Check for Two Lowercase Strings
Problem:
Print "Anagram" if same characters with same frequencies, else "Not Anagram".
*/

#include <stdio.h>

int main(void)
{
    char s[200], t[200];
    int count[26] = {0};
    int i, is_anagram = 1;

    printf("Enter first lowercase string: ");
    fgets(s, sizeof(s), stdin);
    printf("Enter second lowercase string: ");
    fgets(t, sizeof(t), stdin);

    for (i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z')
            count[s[i] - 'a']++;
    }
    for (i = 0; t[i] != '\0' && t[i] != '\n'; i++) {
        if (t[i] >= 'a' && t[i] <= 'z')
            count[t[i] - 'a']--;
    }

    for (i = 0; i < 26; i++) {
        if (count[i] != 0) {
            is_anagram = 0;
            break;
        }
    }

    if (is_anagram)
        printf("Anagram\n");
    else
        printf("Not Anagram\n");

    return 0;
}
