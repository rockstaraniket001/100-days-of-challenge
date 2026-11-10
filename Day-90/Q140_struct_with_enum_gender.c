/*
Day: 90
Question: Q140
Title: Struct with Enum Gender
Problem:
Define a struct with enum Gender and print the person's gender.
*/

#include <stdio.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    char name[50];
    enum Gender gender;
};

int main(void)
{
    struct Person p;

    printf("Enter name: ");
    scanf("%s", p.name);
    printf("Enter gender (0=MALE, 1=FEMALE, 2=OTHER): ");
    scanf("%d", (int *)&p.gender);

    printf("Name: %s\n", p.name);
    printf("Gender: ");
    switch (p.gender) {
        case MALE:   printf("Male\n"); break;
        case FEMALE: printf("Female\n"); break;
        case OTHER:  printf("Other\n"); break;
        default:     printf("Unknown\n");
    }

    return 0;
}
