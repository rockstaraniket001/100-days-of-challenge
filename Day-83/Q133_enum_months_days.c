/*
Day: 83
Question: Q133
Title: Enum for Months and Days
Problem:
Create an enum for months and print how many days each month has.
*/

#include <stdio.h>

enum Month {
    JAN = 1, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

int main(void)
{
    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int m;

    for (m = JAN; m <= DEC; m++) {
        printf("Month %d has %d days\n", m, days[m]);
    }

    return 0;
}
