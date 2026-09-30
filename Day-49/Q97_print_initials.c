/*
Day: 49
Question: Q97
Title: Print Initials of a Name
Problem:
Print the initials of a name.
*/

#include <stdio.h>

int main(void)
{
    char name[200];
    int i = 0;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    if (name[0] != ' ' && name[0] != '\n')
        printf("%c", name[0]);

    while (name[i] != '\0' && name[i] != '\n') {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\n' && name[i + 1] != '\0')
            printf("%c", name[i + 1]);
        i++;
    }
    printf("\n");

    return 0;
}
