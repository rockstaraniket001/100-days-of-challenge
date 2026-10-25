/*
Day: 74
Question: Q124
Title: Copy File Content
Problem:
Take source and destination filenames. Copy all content using fgetc() and fputc().
*/

#include <stdio.h>

int main(void)
{
    FILE *src, *dest;
    char source[100], destination[100];
    int ch;

    printf("Enter source filename: ");
    scanf("%s", source);
    printf("Enter destination filename: ");
    scanf("%s", destination);

    src = fopen(source, "r");
    if (src == NULL) {
        printf("Error opening source file\n");
        return 1;
    }

    dest = fopen(destination, "w");
    if (dest == NULL) {
        printf("Error opening destination file\n");
        fclose(src);
        return 1;
    }

    while ((ch = fgetc(src)) != EOF)
        fputc(ch, dest);

    printf("File copied successfully\n");

    fclose(src);
    fclose(dest);
    return 0;
}
