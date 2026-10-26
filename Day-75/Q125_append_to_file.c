/*
Day: 75
Question: Q125
Title: Append a Line to Existing File
Problem:
Open an existing file in append mode. Let the user enter a new line and append it.
*/

#include <stdio.h>

int main(void)
{
    FILE *fp;
    char line[256];
    char filename[100] = "info.txt";

    printf("Enter line to append: ");
    fgets(line, sizeof(line), stdin);

    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    fputs(line, fp);
    fclose(fp);

    printf("Line appended successfully\n");

    return 0;
}
