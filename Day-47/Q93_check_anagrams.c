/*
Day: 47
Question: Q93
Title: Check if Two Strings are Anagrams
Problem:
Check if two strings are anagrams of each other.
*/

#include <stdio.h>

int main(void)
{
    char s1[200], s2[200];
    int count[26] = {0};
    int i, is_anagram = 1;

    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);
    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);

    for (i = 0; s1[i] != '\0' && s1[i] != '\n'; i++) {
        if (s1[i] >= 'a' && s1[i] <= 'z')
            count[s1[i] - 'a']++;
        else if (s1[i] >= 'A' && s1[i] <= 'Z')
            count[s1[i] - 'A']++;
    }

    for (i = 0; s2[i] != '\0' && s2[i] != '\n'; i++) {
        if (s2[i] >= 'a' && s2[i] <= 'z')
            count[s2[i] - 'a']--;
        else if (s2[i] >= 'A' && s2[i] <= 'Z')
            count[s2[i] - 'A']--;
    }

    for (i = 0; i < 26; i++) {
        if (count[i] != 0) {
            is_anagram = 0;
            break;
        }
    }

    if (is_anagram)
        printf("Anagrams\n");
    else
        printf("Not Anagrams\n");

    return 0;
}
