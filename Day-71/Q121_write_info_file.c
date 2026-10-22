/*
Day: 71
Question: Q121
Title: Create info.txt and Write Name and Age
Problem:
Create info.txt in write mode. Take user's name and age and write them using fprintf(). Display confirmation.
*/

#include <stdio.h>

int main(void)
{
    FILE *fp;
    char name[100];
    int age;

    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter age: ");
    scanf("%d", &age);

    fp = fopen("info.txt", "w");
    if (fp == NULL) {
        printf("Error creating file\n");
        return 1;
    }

    fprintf(fp, "Name: %sAge: %d\n", name, age);
    fclose(fp);

    printf("Data saved successfully to info.txt\n");

    return 0;
}
