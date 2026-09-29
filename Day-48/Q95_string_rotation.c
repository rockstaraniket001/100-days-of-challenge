/*
Day: 48
Question: Q95
Title: Check if One String is Rotation of Another
Problem:
Check if one string is a rotation of another.
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char s1[200], s2[200], temp[400];
    int len1, len2;

    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);
    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);

    /* Remove newline */
    len1 = 0;
    while (s1[len1] != '\0' && s1[len1] != '\n') len1++;
    s1[len1] = '\0';
    len2 = 0;
    while (s2[len2] != '\0' && s2[len2] != '\n') len2++;
    s2[len2] = '\0';

    if (len1 != len2) {
        printf("Not a rotation\n");
        return 0;
    }

    /* Concatenate s1 with itself */
    int i;
    for (i = 0; i < len1; i++)
        temp[i] = s1[i];
    for (i = 0; i < len1; i++)
        temp[len1 + i] = s1[i];
    temp[2 * len1] = '\0';

    /* Check if s2 is substring of temp */
    int found = 0;
    for (i = 0; i <= len1; i++) {
        int j;
        for (j = 0; j < len2; j++) {
            if (temp[i + j] != s2[j])
                break;
        }
        if (j == len2) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("One string is a rotation of the other\n");
    else
        printf("Not a rotation\n");

    return 0;
}
