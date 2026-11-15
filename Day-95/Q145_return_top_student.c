/*
Day: 95
Question: Q145
Title: Return Structure from Function
Problem:
Return a structure containing the top student's details from a function.
*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student get_top_student(struct Student arr[], int n)
{
    int i, max_idx = 0;
    for (i = 1; i < n; i++) {
        if (arr[i].marks > arr[max_idx].marks)
            max_idx = i;
    }
    return arr[max_idx];
}

int main(void)
{
    struct Student s[5], top;
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter details for student %d (name roll marks):\n", i + 1);
        scanf("%s %d %f", s[i].name, &s[i].roll_no, &s[i].marks);
    }

    top = get_top_student(s, 5);

    printf("\nTop student:\n");
    printf("Name: %s\n", top.name);
    printf("Roll No: %d\n", top.roll_no);
    printf("Marks: %.2f\n", top.marks);

    return 0;
}
