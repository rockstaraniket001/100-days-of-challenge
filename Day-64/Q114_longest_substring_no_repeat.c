/*
Day: 64
Question: Q114
Title: Longest Substring Without Repeating Characters
Problem:
Find the length of the longest substring without repeating characters.
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[200];
    int n, i, j, max_len = 0, len;
    int seen[256];

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    n = 0;
    while (s[n] != '\0' && s[n] != '\n') n++;

    for (i = 0; i < n; i++) {
        memset(seen, 0, sizeof(seen));
        len = 0;
        for (j = i; j < n; j++) {
            if (seen[(unsigned char)s[j]])
                break;
            seen[(unsigned char)s[j]] = 1;
            len++;
        }
        if (len > max_len)
            max_len = len;
    }

    printf("%d\n", max_len);

    return 0;
}
