/*
Day: 72
Question: Q122
Title: Read File Contents Using fgets
Problem:
Open an existing file such as info.txt and read its contents using fgets(). Print all lines until EOF.
*/

#include <stdio.h>

int main(void)
{
    FILE *fp;
    char line[256];

    fp = fopen("info.txt", "r");
    if (fp == NULL) {
        printf("Error: Cannot open info.txt\n");
        return 1;
    }

    printf("Contents of info.txt:\n");
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);
    return 0;
}
