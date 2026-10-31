/*
Day: 80
Question: Q130
Title: Store and Read Student Records
Problem:
Store multiple student records (name, roll number, marks) using fprintf(). Read them using fscanf() and display.
*/

#include <stdio.h>

int main(void)
{
    FILE *fp;
    char name[50];
    int roll;
    float marks;
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error creating file\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Enter name, roll number, marks for student %d:\n", i + 1);
        scanf("%s %d %f", name, &roll, &marks);
        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }
    fclose(fp);

    printf("\nReading records from file:\n");
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error reading file\n");
        return 1;
    }

    while (fscanf(fp, "%s %d %f", name, &roll, &marks) == 3) {
        printf("Name: %s, Roll: %d, Marks: %.2f\n", name, roll, marks);
    }

    fclose(fp);
    return 0;
}
