/*
Day: 78
Question: Q128
Title: Count Vowels and Consonants in a File
Problem:
Read a text file and count vowels and consonants. Ignore digits and special characters.
*/

#include <stdio.h>

int main(void)
{
    FILE *fp;
    int ch;
    int vowels = 0, consonants = 0;

    fp = fopen("info.txt", "r");
    if (fp == NULL) {
        printf("Error: Cannot open file\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
                vowels++;
            else
                consonants++;
        }
    }

    fclose(fp);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
