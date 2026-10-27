/*
Day: 76
Question: Q126
Title: Check if File Exists and Display Content
Problem:
Ask for a filename and check whether it exists by opening in read mode. If NULL print error, else display content.
*/

#include <stdio.h>

int main(void)
{
    FILE *fp;
    char filename[100];
    char ch;

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: File does not exist or cannot be opened\n");
        return 1;
    }

    printf("File content:\n");
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);

    fclose(fp);
    return 0;
}
