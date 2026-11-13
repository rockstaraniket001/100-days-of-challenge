/*
Day: 93
Question: Q143
Title: Student with Highest Marks
Problem:
Find and print the student with the highest marks.
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
    int i, max_idx = 0;

    for (i = 0; i < 5; i++) {
        printf("Enter details for student %d (name roll marks):\n", i + 1);
        scanf("%s %d %f", s[i].name, &s[i].roll_no, &s[i].marks);
    }

    for (i = 1; i < 5; i++) {
        if (s[i].marks > s[max_idx].marks)
            max_idx = i;
    }

    printf("\nStudent with highest marks:\n");
    printf("Name: %s\n", s[max_idx].name);
    printf("Roll No: %d\n", s[max_idx].roll_no);
    printf("Marks: %.2f\n", s[max_idx].marks);

    return 0;
}
