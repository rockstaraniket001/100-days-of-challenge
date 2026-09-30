/*
Day: 49
Question: Q98
Title: Initials with Surname in Full
Problem:
Print initials of a name with the surname displayed in full.
*/

#include <stdio.h>

int main(void)
{
    char name[200];
    int i = 0, last_space = -1;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    /* Find last space (start of surname) */
    while (name[i] != '\0' && name[i] != '\n') {
        if (name[i] == ' ')
            last_space = i;
        i++;
    }

    /* Print initials of all words except last */
    i = 0;
    if (name[0] != ' ' && name[0] != '\n')
        printf("%c. ", name[0]);

    while (i < last_space) {
        if (name[i] == ' ' && name[i + 1] != ' ' && i + 1 < last_space)
            printf("%c. ", name[i + 1]);
        i++;
    }

    /* Print surname in full */
    if (last_space != -1) {
        i = last_space + 1;
        while (name[i] != '\0' && name[i] != '\n') {
            printf("%c", name[i]);
            i++;
        }
    }
    printf("\n");

    return 0;
}
