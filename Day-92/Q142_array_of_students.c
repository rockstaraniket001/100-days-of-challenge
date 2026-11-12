/*
Day: 92
Question: Q142
Title: Array of Student Structures
Problem:
Store details of 5 students in an array of structures and print all.
*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main(void)
{
    struct Student s[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter details for student %d (name roll marks):\n", i + 1);
        scanf("%s %d %f", s[i].name, &s[i].roll_no, &s[i].marks);
    }

    printf("\nAll Students:\n");
    for (i = 0; i < 5; i++) {
        printf("%d. %s | Roll: %d | Marks: %.2f\n",
               i + 1, s[i].name, s[i].roll_no, s[i].marks);
    }

    return 0;
}
