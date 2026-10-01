/*
Day: 50
Question: Q99
Title: Change Date Format dd/04/yyyy to dd-Apr-yyyy
Problem:
Change the date format from dd/04/yyyy to dd-Apr-yyyy.
*/

#include <stdio.h>

int main(void)
{
    char date[20];
    int day, month, year;
    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    printf("Enter date in dd/mm/yyyy format: ");
    scanf("%s", date);

    sscanf(date, "%d/%d/%d", &day, &month, &year);

    if (month < 1 || month > 12) {
        printf("Invalid month\n");
        return 1;
    }

    printf("%02d-%s-%d\n", day, months[month - 1], year);

    return 0;
}
