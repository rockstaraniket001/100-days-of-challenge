/*
Day: 73
Question: Q123
Title: Count Characters, Words and Lines in a File
Problem:
Read a text file and count total characters, words, and lines.
*/

#include <stdio.h>

int main(void)
{
    FILE *fp;
    char ch;
    int chars = 0, words = 0, lines = 0;
    int in_word = 0;

    fp = fopen("info.txt", "r");
    if (fp == NULL) {
        printf("Error: Cannot open file\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        if (ch == '\n')
            lines++;
        if (ch == ' ' || ch == '\n' || ch == '\t') {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            words++;
        }
    }

    /* If file is not empty and doesn't end with newline, count last line */
    if (chars > 0 && lines == 0)
        lines = 1;

    fclose(fp);

    printf("Characters: %d\n", chars);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
