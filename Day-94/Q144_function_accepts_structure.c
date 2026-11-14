/*
Day: 94
Question: Q144
Title: Function Accepting Structure
Problem:
Write a function that accepts a structure as a parameter and prints its members.
*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

void print_student(struct Student s)
{
    printf("Name: %s\n", s.name);
    printf("Roll No: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);
}

int main(void)
{
    struct Student s;

    printf("Enter name: ");
    scanf("%s", s.name);
    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);
    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("\nStudent details (via function):\n");
    print_student(s);

    return 0;
}
