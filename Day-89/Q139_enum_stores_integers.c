/*
Day: 89
Question: Q139
Title: Show Enums Store Integers
Problem:
Show that enums store integers by printing assigned values.
*/

#include <stdio.h>

enum Status {
    OK = 100,
    ERROR = 200,
    PENDING = 300
};

int main(void)
{
    enum Status s1 = OK;
    enum Status s2 = ERROR;
    enum Status s3 = PENDING;

    printf("OK value = %d\n", s1);
    printf("ERROR value = %d\n", s2);
    printf("PENDING value = %d\n", s3);

    printf("\nEnums are integers: %d + %d = %d\n", s1, s2, s1 + s2);

    return 0;
}
